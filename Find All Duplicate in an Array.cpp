/*Approach here is a TRICK. Carefully Observe That Every Element-1 is an Index in Upper Bound   So, We would Subtract -1 From Each element  Go to That Position. If it is Not Negative We make it negative else We add It To vector because 
It Would be a DUPLICATE*/
// Using Two Loop Hashmap Would Be O(N) But Not O(1) Space.
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> V;
        for(int i=0;i<nums.size();i++)
        {
            int index = abs(nums[i])-1;
           
            
            if(nums[index]<0)
            {
                V.push_back(index+1);
            }  
            else
        nums[index]=-nums[index];
        }
        return V;
    }
};


