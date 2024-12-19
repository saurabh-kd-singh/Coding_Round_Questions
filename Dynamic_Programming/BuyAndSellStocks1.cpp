#include <vector>
#include <iostream>
#include <map>
using namespace std;

int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minimumCost = prices[0];
        int maxProfit = 0;
        for(int i=0; i<n; i++) {
            int profitOnDayi = prices[i] - minimumCost;
            maxProfit = max(maxProfit, profitOnDayi);
            minimumCost = min(minimumCost, prices[i]);
        }
        return maxProfit;
    }

int main() {
    vector<int> prices = {7,1,5,3,6,4};
    int answer = maxProfit(prices);
    cout << answer;
    return 0;
}