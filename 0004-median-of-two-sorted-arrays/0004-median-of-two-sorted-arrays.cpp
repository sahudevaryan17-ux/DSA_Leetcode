class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       vector<int>ans;

       //insertion
        for(int x : nums1)
        ans.push_back(x);

      for(int x : nums2)
      ans.push_back(x);
     
     int n = ans.size();
     //sort
    sort(ans.begin(), ans.end());
    //even and odd cases important.
       if(n%2 != 0){
        return ans[(n - 1)/2];

       }else{
        return (ans[n/2] + ans[n/2 - 1]) / 2.0;
       }
       
    }
};