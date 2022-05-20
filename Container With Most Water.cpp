class Solution {
public:
    int maxArea(vector<int>& height) {
      int maxArea=0,right=height.size()-1,left=0;
/* for( int left=0,,right=height.size()-1;left<right;left++,right--) This Cannot be done. We would 
 move From shorter Line towards Longer Line To Hold Maximum Water.*/
    //while Loop is Used
        while(left<right){
            int width = right-left;  //Indexes Form "Width" & Shortest Line Becomes LENGTH.
        maxArea = max(maxArea,min(height[left],height[right]) *width );
       /* if(height[left]<height[left+1])   We Would Not Compare With Just Next Line 
            But With Current Right Element*/
            if(height[left]<=height[right])  //finding Next Longer Line to Increase Water Cntaining Capacity
            left++;
            else
                right--;            
            }
        return maxArea;
       
    }
};
