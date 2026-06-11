class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(auto ch : s){
            if(ch == ' ' || !isalnum(ch)){
                continue;
            }
            str += tolower(ch);
        }

        string org = str;

        string rev = "";
        for(int i = str.size() - 1 ; i >= 0 ; i--){
            rev += str[i];
        }

        return org == rev;
    }
};
