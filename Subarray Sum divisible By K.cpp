/* Brute force approach woudl be two loops i=0,j=i<;j<V.size()----Time Complexity: O(N^2)*/
/*To optimize it We do as We did in Subarray sum equal k. */
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
    
     int count=0,rem;
        unordered_map<int,int> mp;
        mp[0]=1;   //Adding 0 --> 1
        int sum=0;   //PrefixSum Technique along woth Map
        for(int i=0;i<nums.size();i++)
        {
           sum+=nums[i];
            rem=sum%k;
            
            if(rem<0)
                rem+=k;
            if(mp.find(rem)!=mp.end())
            {
                count= count+mp[rem];
            } 
                mp[rem]++;
        }
      return count;
    }
    
};
