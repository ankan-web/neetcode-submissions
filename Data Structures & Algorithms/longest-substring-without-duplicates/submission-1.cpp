class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0) return 0;
        unordered_set<char>st;
        int i = 0;
        st.insert(s[0]);
        int len = 1;
        for(int j = 1 ; j < s.length() ; j++){
            while(st.count(s[j])){
                st.erase(s[i]);
                i++;
            }

            st.insert(s[j]);
            len = max(len , j - i + 1);
            
        }

        return len;
    }
};
