class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<pair<int, int> > events;
        vector<vector<int>> contour;
        multiset<int> heights;
        
        for(const vector<int>& building: buildings) {
            events.emplace_back(make_pair(building[0], -1 * building[2]));
            events.emplace_back(make_pair(building[1], building[2]));
        }
        
        sort(events.begin(), events.end());
        int max_height_so_far = 0, curr_height = 0;
        heights.emplace(0);
        
        for(const pair<int, int>& event: events) {
            if(event.second < 0)
                heights.emplace(-1 * event.second);
            else
                heights.erase(heights.find(event.second));
            
            curr_height = *heights.rbegin();

            if(curr_height != max_height_so_far) {
                contour.emplace_back(vector<int>{event.first, curr_height});
                max_height_so_far = curr_height;
            }
        }
        
        return contour;
    }
};