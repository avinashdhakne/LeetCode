/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<Node *, Node *> mp;
    
    void dfs(Node * node){
        Node * newNode = new Node(node->val);
        mp[node] = newNode;
        
        for(auto i: node->neighbors){
            if(mp.find(i)==mp.end()){
                dfs(i);
            }  
            mp[node]->neighbors.push_back(mp[i]);
        }      
    }
    
    Node* cloneGraph(Node* node) {
        if(node==NULL) return NULL;
        dfs(node);
        return mp[node];
    }
};