class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       unordered_map<int , bool> vis;
       for(int i = 0 ; i < nums.size() ; i++){
            if(vis[nums[i]]) return true;
            vis[nums[i]] = true;
       }

       return false;

    }
};