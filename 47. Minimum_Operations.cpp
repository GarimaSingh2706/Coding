#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; ++i) 
	{
        cin >> arr[i];
    }
    int operations = 1;
    for (int i = 1; i < N; ++i) 
	{
        if (arr[i] != arr[i - 1]) 
		{
            operations++;
        }
    }
    cout << operations << endl;
    return 0;
}
