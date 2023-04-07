//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    void reverse(vector<long long>& arr, int s, int e){
        if(s>=e){
            return;
        }
        else{
            swap(arr[s],arr[e]);
        }
        reverse(arr, s+1, e-1);
    }
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        int i = 0, prev = -1;
        for(i=k-1; i<arr.size(); i+=k){
            reverse(arr, prev+1, i);
            prev = i;
        }
        reverse(arr,prev+1,arr.size()-1);
    }
};

//{ Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends