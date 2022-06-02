/*Brute Type Approach Would be To Sort the Array using Sort() and write teh squares inplace . But, That would not be optimal.*/

/* Optimal Approach as usual Here is Two Pointers. One Would be placed at the starting of the array and another at the end. REMEMBER: Array is Sorted. So, Whenver 1st element is less than last element. Last
element is inserted at the last index (The Element chosen is bigger so For sorted Answer It must be placed at The END)...an Array Of Same Size.And last pointer is decremented(Higher Value Pointer is Moved in short.) Yes, This makes space complexity : o(N). But this the only possible way*/
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        //Declaring A vector of Size same as nums.
        vector<int> sor(nums.size());  //Writing Only Name would not Serve the Purpose.
        int low=0,high=nums.size()-1;
        
        for(int endIndex=high;endIndex>=0;endIndex--)
        {
            if(abs(nums[low])<abs(nums[high]))
            { sor[endIndex]=(nums[high]*nums[high]);
                 high--;
              }
            else
            {sor[endIndex]=(nums[low]*nums[low]); 
                low++;
        
            }
        }   
        return sor;
    }
};







/* 
    int high=nums.size()-1;
        int endIndex=nums.size()-1;
        for(int low=0;low<high+1;++low)
        {
            if(abs(nums[low])<abs(nums[high]))
            {     sor[endIndex]= (nums[high]*nums[high]);
               high--;
            }
            else
            {sor[endIndex]=(nums[low]*nums[low]);
               low++;
            } 
        }
 didn`t Worked

*/
