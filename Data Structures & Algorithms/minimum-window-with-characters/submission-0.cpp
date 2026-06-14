class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>freq(256 , 0);
        int n = s.size();
        int m = t.size();
        for(int i = 0 ; i < m ; i++){
            freq[t[i]]++;
        }
        int l = 0;
        int r = 0;
        int cnt = 0;
        int minLen = INT_MAX;
        int stIdx = -1;
        while(r < n){
            if(freq[s[r]] > 0){
                cnt++;
            }
            freq[s[r]]--;

            while(cnt == m){
                if(r-l+1 < minLen){
                    minLen = r-l+1;
                    stIdx = l;
                }

                freq[s[l]]++;
                if(freq[s[l]] > 0) cnt--;
                l++;


            }

            r++;
        }

        return minLen == INT_MAX ? "" : s.substr(stIdx , minLen);
    }
};
