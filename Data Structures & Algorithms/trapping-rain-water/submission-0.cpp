class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n == 0) return 0;
        vector<int>leftmx(n);
        vector<int>rightmx(n);
        leftmx[0] = height[0];
        rightmx[n-1] = height[n-1];
        for(int i = 1 ; i < n ; i++){
            leftmx[i] = max(leftmx[i-1] , height[i]);
            rightmx[n-i-1] = max(rightmx[n-i] , height[n-i-1]);
        }

        int ans = 0;

        for(int i = 0 ; i < n ; i++){
            ans += min(leftmx[i] , rightmx[i]) - height[i];
        }

        return ans;

    }
};
