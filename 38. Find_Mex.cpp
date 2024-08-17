#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int main() 
{
    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++) 
	{
        cin >> arr[i];
    }
    vector<int> result(N);
    unordered_set<int> seen;
    int mex = 0;
    for (int i = 0; i < N; i++) 
	{
        seen.insert(arr[i]);
        while (seen.find(mex) != seen.end()) 
		{
            mex++;
        }
        result[i] = mex;
    }
    for (int i = 0; i < N; i++) 
	{
        cout << result[i] << " ";
    }
    return 0;
}
