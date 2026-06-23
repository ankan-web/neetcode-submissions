class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        int i = 0;
        stack<int>st;
        while(i < n){
            if((st.size() >= 2) && (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/" )){
                int n1 = st.top();
                st.pop();
                int n2 = st.top();
                st.pop();
                if(tokens[i] == "+"){
                    st.push(n1+n2);
                } 
                if(tokens[i] == "-"){
                    st.push(n2-n1);
                }
                if(tokens[i] == "*"){
                    st.push(n1*n2);
                }
                if(tokens[i] == "/"){
                    st.push(n2/n1);
                }
            }else if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/"){
                st.push(stoi(tokens[i]));
            }else{
                return 0;
            }
            i++;
        }

        return st.top();
    }
};
