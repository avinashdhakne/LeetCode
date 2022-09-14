class Solution {
public:
    bool validUtf8(vector<int>& data) {
        int count = 0;
        for(auto &i: data){
            if(count==0){
                if(i >> 7 == 0b0){
                    count = 0;
                }
                else if(i >> 5 == 0b110){
                    count = 1;
                }
                else if(i >> 4 == 0b1110){
                    count = 2;
                }
                else if(i >> 3 == 0b11110){
                    count = 3;
                }
                else{
                    return false;
                }
            }
            else{
                if(i >> 6 == 0b10) count--;
                else{
                    return false;
                    cout<<"false";     
                }
            }
        }
        if(count) {
            return false;
        }            return true;
    }
};