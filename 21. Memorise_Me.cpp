#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstring>
#include <map>
#include <set>
#include <vector>
#include <cstdio>
#include <iostream>
using namespace std;
int main(void)
{
	int n,q; scanf("%d",&n);
	map<int,int> frequency;
	for(int i = 0; i < n; i++) 
	{
		scanf("%d",&q);
		frequency[q]++;
	}
	scanf("%d",&q);
	for(int i = 0; i < q; i++) 
	{
		scanf("%d",&n);
		if(frequency[n] == 0) printf("NOT PRESENT\n");
		else printf("%d\n",frequency[n]);
		
	}
	return 0;
}
