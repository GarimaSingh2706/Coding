#include <iostream>
#include <vector>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
	{
        int greenCost, purpleCost;
        cin >> greenCost >> purpleCost;
        int n; 
        cin >> n;
        int firstProblemSolved = 0, secondProblemSolved = 0;
        for (int i = 0; i < n; i++) 
		{
            int first, second;
            cin >> first >> second;
            
            if (first == 1) 
			{
                firstProblemSolved++;
            }
            if (second == 1) 
			{
                secondProblemSolved++;
            }
        }
        int cost1 = firstProblemSolved * greenCost + secondProblemSolved * purpleCost;
        int cost2 = firstProblemSolved * purpleCost + secondProblemSolved * greenCost;
        cout << min(cost1, cost2) << endl;
    }
    return 0;
}
