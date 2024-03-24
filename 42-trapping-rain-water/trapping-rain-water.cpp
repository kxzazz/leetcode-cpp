class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int maxLeft = -1, maxRight = -1;
        int water = 0;
        while(left < right){
            maxLeft = max(maxLeft, height[left]);
            maxRight = max(maxRight, height[right]);

            if(maxLeft > maxRight){
                water += maxRight - height[right];
                right--;
            } else {
                water += maxLeft - height[left];
                left++;
            }
        }
        return water;
    }
};