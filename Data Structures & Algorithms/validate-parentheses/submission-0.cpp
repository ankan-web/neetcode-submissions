class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int i = 0;
        int n = s.length();
        while(i < n){
            if(st.empty() && (s[i] == ')' || s[i] == '}' || s[i] == ']')){
                return false;
            }else if(!st.empty() && (st.top() == '(' && s[i] == ')' || st.top() == '{' && s[i] == '}' || st.top() == '[' && s[i] == ']')){
                st.pop();
            }else{
                st.push(s[i]);
            }

            i++;
        }

        return st.empty();
    }
};
