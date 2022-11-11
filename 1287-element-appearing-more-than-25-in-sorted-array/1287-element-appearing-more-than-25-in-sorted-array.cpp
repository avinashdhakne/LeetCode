class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int total = arr.size() / 4;
        int result;
        int count = 0;
        int num = arr[0];
        cout<<total<<" "<<count<<" "<<num<<endl;
        for(int i=0; i<arr.size(); i++){
          
           
            
            if(arr[i] == num){
                cout<<num<<endl;
                count++;
            }
            else{
                num = arr[i];
                count = 1;
            }
            
             // if count is greater than 25% then store it into result
            if(count > total){
                result = num;
            }
        }
        
        return result;
    }
};