/*BRUTE FORCE APPROACH --> Would be To Come Over Every Tile and Take Every Path and check if we can reacht the End or not
It would Be a Long Procedure. And For Each 'N' Element We would Visit Each of its N Paths TIME Complexity Would be O(N^N)  
  */

/*On a second Thought To Minimise Computatation By taking Every path , We could Just Actually See, What Maximum Tile To we can jump From the Standing Position. Why, to do so? One Reason is It would redcue Our Iterations of checking. Ok, So we Are keeping a Number of UptoWhichTile we can reach from a Gievn Standing Position Now, What next?     */
class Solution {
public:
    bool canJump(vector<int>& nums) {
     int reachUpto=0;
        for(int i=0;i<nums.size();i++){
         if(reachUpto<i)
                return false;
    reachUpto=max(reachUpto,nums[i]+i);
            if(i>=nums.size()-1)return true;     //Example : [2,3,1,2,0,1] 
           
    }
        return false;
    }
};
