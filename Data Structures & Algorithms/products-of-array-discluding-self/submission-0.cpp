class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>suffix(nums.size(),1);
        vector<int>prefix;
        vector<int>ans;
        for(int i = 0 ; i < nums.size() ; i++){
            if(i == 0) {
                prefix.push_back(1);
                continue;
            }
            prefix.push_back(nums[i-1] * prefix[i-1]);
        }
        for(int i = nums.size()-1 ; i >= 0 ; i--){
            if(i == nums.size()-1) {
                suffix.push_back(1);
                continue;
            }
            suffix[i] = (nums[i+1] * suffix[i+1]);
        }

        for(int i = 0 ; i < nums.size() ; i++){
            ans.push_back(suffix[i] * prefix[i]);
        }
        return ans;
    }
};
