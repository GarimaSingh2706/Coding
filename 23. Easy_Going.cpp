#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int t, n, m, k; scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&m);
		k = n-m;
		vector<int> vec(n);
		for(int i = 0; i < n; i++) scanf("%d",&vec[i]);
		sort(vec.begin(),vec.end());
		int min_sum = 0, max_sum = 0;
		for(int i = 0; i < k; i++)
		{
			min_sum += vec[i];
			max_sum += vec[n-i-1];
		}
		printf("%d\n",max_sum-min_sum);
	}	
	return 0;
}
