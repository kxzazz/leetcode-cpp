class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        stack<float> fleets;
        vector<pair<int, float>> pt;
         
        for(int i = 0; i < position.size(); i++)
            pt.push_back({ position[i], float(target - position[i]) / speed[i] });
        
        sort(pt.begin(), pt.end());
                   
        
        for(int i = 0; i < position.size(); i++){
            float curMax = pt[i].second;
         
            while(fleets.size() && curMax >= fleets.top())
                fleets.pop();
            
            fleets.push(curMax);
        }
        
        return fleets.size();
    }
};