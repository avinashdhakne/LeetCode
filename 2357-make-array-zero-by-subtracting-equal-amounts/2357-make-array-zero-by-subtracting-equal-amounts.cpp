class Solution {
public:
    bool isNull(vector<int> &vect){
        for(auto i: vect){
            if(i!=0)
                return false;
        }
        return true;
    }
    
    int findMin(vector<int> vect){
        int min = INT_MAX;
        for(auto i: vect){
            if(min>i && i!=0)
                min = i;
        }
        return min;
    }
    
    void subMin(vector<int> &vect, int min){
        for(int i=0; i<vect.size(); i++){
            if(vect[i]!=0)
                vect[i] = vect[i] - min;
        }
    }
    
    int minimumOperations(vector<int>& nums) {
        int count = 0;
        while(!isNull(nums)){
            int min = findMin(nums);
            cout<<min<<endl;
            subMin(nums, min);
            count++;
        }
        return count;
    }
};