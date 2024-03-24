class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> seenIndex(256, -1);
        int maxCount = 0, slow = -1;
        for(int fast=0; fast != s.length(); fast++){
            if(seenIndex[s[fast]] > slow )
                slow = seenIndex[s[fast]];
            seenIndex[s[fast]] = fast;
            maxCount = max(maxCount, fast - slow);
        }
        return maxCount;
    }
};