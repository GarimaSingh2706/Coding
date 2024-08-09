#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstring>
#include <map>
#include <set>
#include <vector>
#include <cstdio>
#include <iostream>
#include <stack>
#define lli long long int
using namespace std;
int main()
{
	lli t, n, x, ctr; cin >> t;
	while(t--)
	{
		cin >> n;
		vector<lli>speed;
		for(lli i = 0; i < n; i++)
		{ 
			cin >> x; speed.push_back(x);
		}
		lli pos, best = speed[0]; pos = ctr = 0;
		for(lli i = 1; i < n; i++)
		{
			if(speed[pos] < speed[i]) {pos = i;}
			else if(best >= speed[i] && speed[pos] >= speed[i])
			{
				ctr++;
				best = speed[i];
				pos = i;
			}
		}
		cout << ctr+1 << endl;
	}
	return 0;
}
