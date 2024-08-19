#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> prices(n, vector<int>(m));
    vector<int> maxPrices(m, 0);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> prices[i][j];
            maxPrices[j] = max(maxPrices[j], prices[i][j]);
        }
    }
    vector<int> goodPriceCounts(n, 0);
    vector<double> averages(n, 0.0);
    for (int i = 0; i < n; ++i) {
        int goodPriceCount = 0;
        double sum = 0.0;
        for (int j = 0; j < m; ++j) {
            sum += prices[i][j];
            if (prices[i][j] == maxPrices[j]) {
                ++goodPriceCount;
            }
        }
        goodPriceCounts[i] = goodPriceCount;
        averages[i] = sum / m;
    }
    int mostUpdatedMenu = 0;
    for (int i = 1; i < n; ++i) {
        if (goodPriceCounts[i] > goodPriceCounts[mostUpdatedMenu]) {
            mostUpdatedMenu = i;
        } else if (goodPriceCounts[i] == goodPriceCounts[mostUpdatedMenu]) {
            if (averages[i] > averages[mostUpdatedMenu]) {
                mostUpdatedMenu = i;
            }
        }
    }
    cout << mostUpdatedMenu + 1 << endl; 
    return 0;
}
