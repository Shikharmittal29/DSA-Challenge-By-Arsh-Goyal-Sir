class Solution {
public:
    //By Dutch National Flag Algorithm 
    void sortColors(vector<int>& nums) {
    int low=0,mid=0,high=nums.size()-1;
        while(mid<=high)
        {   //Intitially LOW will be at 0 and High at end index.
            //MID variable will travrse the array.
            //If 0 is encountered while traversing
            //we would swap by c++ swap function Current mid Value By Low, And
            //increment Low by 1 after Operation is performed.
            if(nums[mid]==0)
                swap(nums[low++],nums[mid++]);
                else if(nums[mid]==1)
                    mid++;
            // If 1 is encountered We Simply pass assuming Element After Highest Value of Low just Next would be 
            // 1 (finally)That`s why
            else    // When 2 is encountered
                   // We will swap High and Current MID value assuming High only has highest value 2.
                // after swaping We "decrement" HIGH by 1.
                // indirectly throwing 2 at last as needed.
                swap(nums[mid],nums[high--]);
        }
    }
    
    
    
    /* Fault :- While(low<high) gave wrong answer Remember    */

};
