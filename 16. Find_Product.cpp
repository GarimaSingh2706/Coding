#include <iostream>
#include <cstdio>
#define MOD 1000000007
#define lli long long int
using namespace std;
int main()
{
	int n; scanf("%d",&n);
	int arr[n];
	lli prod = 1;
	for(int i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
		prod = (prod * arr[i])%MOD;
	}
	cout << (long long int)(prod) << endl;
	return 0;
}
