class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long start = 1;
        long long end = *max_element(piles.begin(), piles.end());
        
        // if(piles.size() == 1){
        //     return piles.front();
        // }
        
        while(start <= end){
            long long mid = start + (end - start)/2;
            long long time = 0;
            for(auto bananas: piles){
                time += ((bananas/mid)+ ((bananas%mid) != 0));
                if(time > h){
                    start = mid + 1;
                    break;
                }
            }
            
            cout<<time<<" "<<mid<<endl;
            if(time <= h)
                end = mid - 1;
            else
                start = mid + 1;
        }
        cout<<"-------------------"<<endl;
        return start; 
    }
};