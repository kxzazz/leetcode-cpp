class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
       int left = 1, right = 1000000000;
        while(left <= right){
            long long k = left + (right - left)/2;
            if(canEat(piles, h, k)) right = k - 1;
            else left = k + 1;
        }
        return left;
    }

    bool canEat(vector<int>& piles, int h, int k){
        int hToEat = 0;
        for(int pile: piles){
            hToEat += pile/k;
            if(pile % k != 0) hToEat++;
            if(hToEat > h) return false;
        }
        return hToEat <= h;
    }
};