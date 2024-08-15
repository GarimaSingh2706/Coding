#include <iostream>
#include <vector>
#include <unordered_set>
#include <cmath>
using namespace std;
bool isPerfectSquare(int x) 
{
    int s = sqrt(x);
    return (s * s == x);
}
int main() 
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) 
	{
        cin >> A[i];
    }
    int count = 0;
    for (int i = 0; i < N; i++) 
	{
        int sum = 0;
        for (int j = i; j < N; j++) 
		{
            sum += A[j];
            if (isPerfectSquare(sum)) 
			{
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
