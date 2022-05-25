/*Considering example of Matrix of Size 3 given in testcase*/ 
#include<bits/stdc++.h>
using namespace std;

    void spiralOrder(vector<vector<int>>& matrix) {
        vector<int> V;
     int ROW=matrix.size();
        int COL = matrix[0].size();
        /*TOP is Beginning Of Row , Right is End Of Column (N-1), Left = beginning Of Column, Bottom is End Of Row */
        int top=0;
        int left=0;
        int bottom =ROW-1,right=COL-1; 
        while (top <= bottom && left <= right) {
        //In actual 'Left' variable is not moving but For the sake Of Number we are taking it.
        cout<<"Top = "<< top<<"\n";
        cout<<"Bottom = "<< bottom<<"\n";cout<<"Left = "<< left<<"\n";cout<<"Right = "<< right<<"\n";
    for(int i=left;i<=right;i++)  //Top Row Print _____ i=0, i<=2  (3 elements)
    {
        V.push_back(matrix[top][i]);  //As TOP =0. therefore, 0th Row ka element till 2nd Index will be pushed
    }    
      top++;
      cout<<"After 1st Loop , Top ="<<top<<"\n";//(understandable)
        // Output Would be : [1,2,3,3,6,9,6,3,7,4]
        // 3 repeated. So we increment next variable to be taken  By 1.
        //bottom right to left     
        for(int j=top;j<=bottom;j++)   //Starting again From Top as it is 0.
        {
            V.push_back(matrix[j][right]);  //column to remain intact means 2nd Column(right is having 2 from previous Loop) . Row would change. 
        }  // RightMost column printed
        
       right--;   //  (to prevent 9from repeating due to equal)
         cout<<"After 2nd Loop , Right ="<<right<<"\n";
        if(top<=bottom){
             cout<<"Top in last loop = "<< top<<"\n";
        cout<<"Bottom in last loop = "<< bottom<<"\n";
            for(int i=right;i>=left;i--)     //[9,8,7] printed
        {
            V.push_back(matrix[bottom][i]);
        }   
        bottom--; }
        cout<<"Bottom after last loop = "<< bottom<<"\n";
         // To avoid repeated print of elemnt of 0th Row leftmost bottom element
        if(left<=right){
            cout<<"Left in last loop = "<< left<<"\n";cout<<"Right in last loop = "<< right<<"\n";
            for(int i=bottom;i>=top;i--)
        {
            V.push_back(matrix[i][left]);
        }   
        //[7,4] is printed.
        left++;
    
       }
        }
    }


/*Without ++ and -- elements would be repeated*/

int main()
{
    vector<vector<int>> vr= {{1, 2, 3},
                   {5, 6, 7},
	           {8,9,10}} ;
	           spiralOrder(vr);
	           return 0;
}
