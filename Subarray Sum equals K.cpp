
/* Optimal strategy is to use MAP*/
/*target-nums[i] is present or not. Just like, "Two sum"*/
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int currentSum=0,count=0;
        for(int i=0;i<nums.size();++i)
        {
           currentSum+=nums[i];
            if(currentSum==k)
                count++;
            
        
           if(mp.find(currentSum-k)!=mp.end())
           {  //  count++;// Doesnt Work
               count+= mp[currentSum-k];
           }
      mp[currentSum]++;
        
        }
        return count;
    }
};
