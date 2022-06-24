
//Two pointer Approach
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      int count = m+n-1;  //5
--m; --n; //2
while(n>=0 && m >=0)
{
if(nums1[m] > nums2[n])
nums1[count--] = nums1[m--];
else
nums1[count--] = nums2[n--];
}
while(n>=0)
nums1[count--] = nums2[n--];
}
    
};

