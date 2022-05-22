class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        vector<vector<int>> V;
        for(int i=0;i<nums.size();i++)
        {
           if(i==0||(i>0&&nums[i]!=nums[i-1]))
           {
               int lo=i+1, high =nums.size()-1,sum=0-nums[i];
               while(lo<high)
               {
                 if(nums[lo]+nums[high]==sum)
                 {  vector<int> vr;
                   vr.push_back(nums[i]);
                   vr.push_back(nums[lo]);
                       vr.push_back(nums[high]);
                   V.push_back(vr);
                   
                   while(lo<high&&nums[lo]==nums[lo+1])
                       lo++;
                   while(lo<high&&nums[high]==nums[high-1])
                       high--;
                   
                   lo++;
                   high--;
                 }  
                
            else if(nums[lo]+nums[high]<sum)
                   lo++;
               else
                   high--;
             
           }
           }
        }
return V;
        
    }
};
