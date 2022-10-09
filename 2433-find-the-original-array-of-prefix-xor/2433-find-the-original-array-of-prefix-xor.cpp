class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int result = pref[0];
        for(int i=1; i<pref.size(); i++){
            pref[i] = result ^ pref[i];
            result = result ^ pref[i];
        }
        return pref;
    }
};