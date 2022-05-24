class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
   int score=0, total=0;
        if(k==0)
            return 0;
        
        for(int i=0; i<cardPoints.size(); i++)
            total += cardPoints[i]; //22
        if(k == cardPoints.size())
            return total;
        
        int low=0, high=cardPoints.size()-k;
        for(int i=low; i<high; i++)
        {score += cardPoints[i];}  //10
        
        score = total - score;  //22-10=12

        int ans=score;  //Ans = 12
        while(high<cardPoints.size()){   //(n-k<n)
            score = score -cardPoints [high++] + cardPoints[low++];   //Sliding Window Technque
            ans = max(ans, score);
        }
        
        return ans;      
    }
};
