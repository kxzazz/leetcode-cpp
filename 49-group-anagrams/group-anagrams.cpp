class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashRecord;
        for(string str: strs){
            string hash = getHash(str);
            if(!hashRecord.contains(hash)){
                hashRecord[hash] = {};
            }
            hashRecord[hash].push_back(str);
        }

        vector<vector<string>> ans;
        for(auto record: hashRecord){
            ans.push_back(record.second);
        }
        return ans;
        
    }

    string getHash(string str){
        sort(str.begin(), str.end());
        return str;
    }
};