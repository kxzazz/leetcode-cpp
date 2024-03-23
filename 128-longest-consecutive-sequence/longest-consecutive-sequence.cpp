class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() < 1) return 0;
        int result = 0;
        sort(nums.begin(), nums.end());
        int current = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums.at(i) != nums.at(i-1)) {
                if (nums.at(i) - nums.at(i-1) == 1) {
                    current++;
                } else {
                    if (current + 1 > result) {
                        result = current + 1;
                    }
                    current = 0;
                }
            }
        }
        if (current + 1 > result) {
            result = current + 1;
        }

        return result;
    }
};