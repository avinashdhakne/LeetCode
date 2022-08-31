class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        multimap<int,int> vect;
        vector<int> result(2,0);
        for(int i=0; i<nums.size(); i++){
           vect.insert(pair<int,int>(nums[i],i));
        }
        
    
        
        for(int j=0; j<nums.size(); j++){
           
            auto iter = vect.find(target - nums[j]);
            cout<<j<<" iter: "<<(*iter).first<<" "<<(*iter).second<<endl;

            if((iter != vect.end() && (j != (*iter).second))){
                result[0] = j;
                result[1] = (*iter).second;
                break;
            }
        }
        return result;
    }
};