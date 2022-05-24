class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector < int>> ans;
          //vector<int> V; Shouldn`t Be done  
            if (nums.empty()) return ans;
        
        sort(nums.begin(),nums.end());
       
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
             int sumfronttwo = target-(nums[i]+nums[j]);
                int low=j+1,high=nums.size()-1;
                while(low<high)
                { 
                
                  int sumbacktwo=nums[low]+nums[high];
                     if(sumfronttwo>sumbacktwo)
                        low++;
                    else if(sumfronttwo<sumbacktwo)
                    high--;
                    else
                    { vector<int> V={nums[i],nums[j],nums[low],nums[high]};
                     ans.push_back(V);
                    
                    
                   while(low<high&&nums[low]==V[2])
                    low++;
                      
                         while(low<high&&nums[high]==V[3])
                      high--;
                }
                }     
             while (j < nums.size() - 1 && nums[j] == nums[j + 1]) j++;    
            }
             while (i < nums.size() - 1 && nums[i] == nums[i + 1]) i++;
        }
        return ans;
        
    }
   };


/* If Vector is declared At beginning globally. Memory Limit will exceed  */
