//https://leetcode.com/problems/valid-parentheses/

    //  faster than 100%;
    //  space less than 99.73%;
    //  runtime : 0 ms;
class Solution {
public:
    bool isValid(string s) {
        bool flag =1;
        stack<int> st;
        for(int i =0;i<s.size();i++){
            if(s[i] == '(') st.push(1);
            else if(s[i] == ')') {
                if(st.empty() || st.top() != 1 ) {flag = 0;  break;}
                else st.pop();
            }
            
            else if(s[i] == '{') st.push(2);
            else if(s[i] == '}') {
                if(st.empty() || st.top() != 2 ) {flag = 0;  break;}
                else st.pop();
            }
            else if(s[i] == '[') st.push(3);
            else if(s[i] == ']') {
                if(st.empty() || st.top() != 3 ) {flag = 0;  break;}
                else st.pop();
            }
        }
        if(!st.empty()) flag =0;
        return flag;
    }
};