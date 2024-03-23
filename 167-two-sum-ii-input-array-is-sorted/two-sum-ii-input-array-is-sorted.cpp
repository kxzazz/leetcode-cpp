class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int len = numbers.size();
        map<int,int> compli;
        for(int i=0; i < len; i++){
            if(compli.contains(numbers[i])) 
                return { compli[numbers[i]] + 1, i + 1};
            compli[target - numbers[i]] = i;
        }

        return {};
    }
};