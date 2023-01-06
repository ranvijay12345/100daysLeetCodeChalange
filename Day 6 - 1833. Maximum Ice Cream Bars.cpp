class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());

        int currCoin = 0;
        int count = 0;
        for(auto cost: costs){
            currCoin += cost;
            if(currCoin > coins){
                break;
            }
            count++;
        }

        return count;
    }
};