class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Right Way Of Doing is Using Map in One Pass Only
        unordered_map<int,int> mp;
         vector<int> V;
         for (int i = 0; i < nums.size(); i++) {
       int ans = target-nums[i];
             if(mp.find(target-nums[i])!=mp.end())
             { V.push_back(mp[target-nums[i]]);V.push_back(i);
             
             return V;
             }
               mp[nums[i]]=i;  //Inside Square Brackets "KEY" is inserted and At The Right of equals Value is added;
         }
        return V;
    }
};





/*  vector<int> twoSum(vector<int>& nums, int target) {
        int j=1;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
          if(nums[i]-target==nums[j])
          {  ans.push_back(i);
            ans.push_back(j);
            } 
            j++;
        }
        return ans ;
    }  This didnt worked But logic was correct.*/
