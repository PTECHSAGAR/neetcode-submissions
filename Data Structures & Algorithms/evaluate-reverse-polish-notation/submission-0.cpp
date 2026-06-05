class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string t:tokens){
            if(t=="+" || t=="-" || t=="*" || t=="/"){
              int a=st.top();
              st.pop();
            
              int b=st.top();
              st.pop();
              int c;
              if(t == "+")
    c = b + a;

else if(t == "-")
    c = b - a;

else if(t == "*")
    c = b * a;

else
    c = b / a;
              st.push(c);
            }
            else{
                int num=stoi(t);
                st.push(num);
            }
            
        }
        return st.top();
    }
};
