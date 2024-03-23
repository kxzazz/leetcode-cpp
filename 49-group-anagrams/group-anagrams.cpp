class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashRecord;
        for(string str: strs){
            string hash = str;
            sort(hash.begin(), hash.end());
            hashRecord[hash].push_back(str);
        }

        vector<vector<string>> ans;
        for(auto record: hashRecord){
            ans.push_back(record.second);
        }
        return ans;
        
    }
};