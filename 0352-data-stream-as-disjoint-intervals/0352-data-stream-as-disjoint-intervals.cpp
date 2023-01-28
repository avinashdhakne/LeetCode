class SummaryRanges {
public:
    set<int> vect1;
    SummaryRanges() {
        
    }
    
    void addNum(int value) {
        vect1.insert(value);
    }
    
    vector<vector<int>> getIntervals() {
        vector<vector<int>> result;
        vector<int> vect (vect1.begin(), vect1.end());
        for(int i=0; i<vect.size(); i++){
            int start = vect[i];
            while(i+1 < vect.size() && ((vect[i+1] == vect[i]+1)||(vect[i+1] == vect[i]))){
                i++;
            }
            int end = vect[i];
            result.push_back({start, end});
        }
        
        // vector<vector<int>> ans (result.begin(), result.end());
        return result;
    }
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */