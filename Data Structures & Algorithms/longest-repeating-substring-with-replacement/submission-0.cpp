class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char , int>freq;

        int n = s.length();
        if(n == 0 && k != 0) return 0;
        int left = 0;
        int right = 0;
        int maxFreq = 0;
        while(left <= right && right < n){
            freq[s[right]]++;
            maxFreq = max(maxFreq , freq[s[right]]);
            int winSize = right - left + 1;
            if((winSize - maxFreq)  > k){
                freq[s[left]]--;
                left++;
            }
            right++;

        }
        return n - left;
    }
};
