class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     //Using two Pointer Approach we would solve this
        int i=0; 
        //Whenever j encounters a different element then the element present at index i, jth element is assigned at 
        //i th ndex after one incerement.
        // We indirectly just bring distinct element at the start.
        int s= nums.size();
        //Two Pointers present until what the Loop must Run?
        // if We take i, at the end j would cross bound of vector. Thus, an incorrect garbage value.
        // We are left with to take j. And j also from 1.(Concept of Two pointer)
        for(int j=1;j<s;j++)
        {
            if(nums[i]!=nums[j])
                //simply not assigning because it will lead to imperefect meaning.
                //consider [0,1] => In This case 1 & 0 would be swapped.
                i++;
            nums[i]=nums[j];
        }
        // returning j would be hugely incorrect.
        // return i+1 as same elements are passed on(Not Considered).
        return i+1;
    }        
};
