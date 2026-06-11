class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;

        unordered_set<int>ust(nums.begin() , nums.end());
        int i = 0;
        while(i < nums.size()){
            int st = nums[i];
            if(!ust.count(st - 1)){
                int cnt = 1;
                int current = st;
                while(ust.count(current+1)){
                    current++;
                    cnt++;
                }
                ans = max(ans , cnt);
            }
            i++;
        }
         return ans;


    }
};
