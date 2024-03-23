class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // get a freqMap
        unordered_map<int, int> freqMap;
        for (int i : nums) {
            freqMap[i]++;
        }
        // create a min map, greater<pii>
        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       greater<pair<int, int>>>
            pq;

        // push pairs into pq
        for (auto kv : freqMap) {
            pq.push(make_pair(kv.second, kv.first));
            // limit size to k
            if (pq.size() > k) {
                pq.pop();
            }
        }

        // extract keys into a  vec
        vector<int> res;
        while (!pq.empty()) {
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};