class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        int maxLeft[n];
        maxLeft[0] = height[0];
        for(int i=1; i < n; i++)
            maxLeft[i] = max(maxLeft[ i - 1], height[i]);
        
        int maxRight[n];
        maxRight[n - 1] = height[n - 1];

        for(int i=n-2; i >= 0; i--)
            maxRight[i] = max(maxRight[i + 1], height[i]);
        
        int minArr[n];
        for(int i=0; i < n; i++){
            minArr[i] = min(maxLeft[i], maxRight[i]);
        }

        int water = 0;
        for(int i=0; i < n; i++)
            water += minArr[i] - height[i];

        return water;
    }
};

