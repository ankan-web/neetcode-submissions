class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int i = 0;
        int j = n - 1;
        int water = INT_MIN;

        while(i < j){
            water = max(water , (min(heights[i] , heights[j]) * (j - i)));

            if(heights[i] <= heights[j]) i++;
            else j--;
        }

        return water;

    }
};
