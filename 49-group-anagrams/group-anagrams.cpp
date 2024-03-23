class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> hashRecord;
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
        int freq[26]={0};
        for(char c: str) freq[c - 'a']++;
        
        string s="";
        for(int i=0; i < 26; i++){
            s += freq[i] + '0';
        }
        return s;
    }
};