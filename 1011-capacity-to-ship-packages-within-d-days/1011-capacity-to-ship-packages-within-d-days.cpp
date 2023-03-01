class Solution {
public:
    int shipWithinDays(vector<int>& w, int days) {
        int min = *max_element(w.begin(), w.end());
        int max = accumulate(w.begin(), w.end(), 0);
        int ans = 0;
        while(min <= max){
            int mid = (max + min)/2;
            int tempDays = 1;
            
            int sum = 0;
            for(auto i: w){
                sum += i;
                if(sum > mid){
                    tempDays++;
                    sum = i;
                }
            }
            
            
            if(tempDays <= days){
                ans = mid;
                max = mid - 1;
            }
            else{ 
                min = mid + 1;
            }
            cout<<min<<" "<<max<<endl;
        }
        return ans;
    }
    
    
};