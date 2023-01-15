class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        vector<int> merge(n1+n2);

        int a = 0;
        int b = 0;
        int i = 0;
    
        
        
        while(a < n1 && b < n2)
        {
            if(nums1[a] < nums2[b]){
                merge[i] = nums1[a];
                a++;
            }
            else{
                merge[i] = nums2[b];
                b++;
            }
            i++;  
        }
        
        while(a <= n1/2 && n1!=0){
            merge[i] = nums1[a];
            a++; i++;
        }
        
        while(b <= n2/2  && n2!=0){
            merge[i] = nums2[b];
            b++; i++;
        }
        
        
       
        if(merge.size() % 2 == 0){
           return double (merge[merge.size()/2] + merge[merge.size()/2 - 1])/2;
        }
        return merge[merge.size()/2];
    }
};