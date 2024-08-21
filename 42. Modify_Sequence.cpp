#include <iostream>
#include <vector>
using namespace std;
int main() 
{
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i = 0; i < N; i++) 
	{
        cin >> a[i];
    }
    for(int i = 0; i < N - 1; i++) 
	{
        if(a[i] > a[i + 1]) 
		{
            cout << "NO" << endl;
            return 0;
        }
        a[i + 1] -= a[i];
        a[i] = 0;
    }
    if(a[N-1] == 0) 
	{
        cout << "YES" << endl;
    } 
	else 
	{
        cout << "NO" << endl;
    }

    return 0;
}
