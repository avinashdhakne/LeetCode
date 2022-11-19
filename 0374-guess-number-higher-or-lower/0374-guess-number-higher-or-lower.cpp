/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int start = 1;
        int end = n;
        int result = -1;
        
        while(start <= end){
            int mid = start + (end - start)/2;
            cout<<mid<<" ";
            
            if(guess(mid)==0){
                result = mid;
                break;
            }
            else if(guess(mid)==-1){
                end = mid;
            }
            
            else{
                start = mid+1;
            }
        }
        return result;
    }
};