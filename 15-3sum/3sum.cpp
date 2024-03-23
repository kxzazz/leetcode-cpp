class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        set<vector<int>> set;
        for(int i=0; i < len; i++){
            int first = nums[i];
            int left = i + 1;
            int right = len - 1;
            while(left < right){
                int sum = first + nums[left] + nums[right];
                if( sum == 0){
                    set.insert({ first, nums[left], nums[right]});
                    left++;
                    right--;
                }
                if(sum < 0) left++;
                if(sum > 0) right--;
            }
        }
        vector<vector<int>> v(set.begin(), set.end());
        return v;
    }
};