class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();++i)
        {
            //First We push All The opening Brackets in Th stack
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
                st.push(s[i]);
            else if( !st.empty())
            {  //We have to check individually for each string
                if(s[i]==')'&&st.top()=='(')    //Thinking of We are writing individual case then why not if for each case? Well, else only gives wrong answer. 
                                              //This is because after last if it would go in else and directly return false. To avoid it we are using else if. 
                    st.pop();
              else  if(s[i]=='}'&&st.top()=='{')
                    st.pop();
                else if(s[i]==']'&&st.top()=='[')
                    st.pop();
                else     //Other than desired sequence some other is present
                    return false;
                
            }
            else //Maybe All Closing ones are present of different type or of same type
                //i.e. st.empty() will be empty (TRUE)
                return false;
                
        }
        if(!st.empty()) return false;
        return true;
        
    }
};
