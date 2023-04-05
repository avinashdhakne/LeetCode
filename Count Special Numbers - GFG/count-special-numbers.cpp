//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSpecialNumbers(int N, vector<int> arr) {
        // Code here
        map<int, int> mp;
        for(auto i: arr) mp[i]++;
        
        int count = 0;
        for(auto i: mp){
            if(i.second > 1){
                count += i.second;
            }
            else{
                for(auto j: mp){
                    if(i.first <= j.first){
                        break;
                    }
                    else if(i.first % j.first == 0){
                        count++;
                        break;
                    }
                }
            }
           
        }
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.countSpecialNumbers(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends