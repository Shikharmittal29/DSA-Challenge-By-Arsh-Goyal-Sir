class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    for(int lastelementFoundat=0,curr=0;curr<nums.size();curr++)
    {
        //Whenever We get a nonZero element we would swap it to 'curr'
        if(nums[curr]!=0)
            swap(nums[lastelementFoundat++],nums[curr]);
    }
    }
};
