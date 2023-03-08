class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        sort(time.begin(), time.end());
        long long start = 0;
        long long end = time.back() * 1LL * totalTrips;
        while(start <= end){
            long long mid = end + (start - end)/2;
            long long trips = 0;
            
            for(auto i: time){
                trips += (mid/i);
                if(trips > totalTrips){
                    end = mid - 1;
                }
            }
            
            if(trips >= totalTrips)
                end = mid - 1;
            else
                start = mid + 1;
        }
        return start;
    }
    
    long long calculate(vector<int>& time, int span){
        long long result = 0 ;
        for(auto i: time){
            result += (span/i);
        }
        return result;
    }
};