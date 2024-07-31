#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    int t,n,k; scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&k);
		int arr[n], m = 0;
		for(int i = 0; i < n; i++) 
		{
		    scanf("%d",&arr[i]);
			if(arr[i] < k)
			m = max(m,k-arr[i]);
		}   
		printf("%d\n",m);	
	}
    return 0;
}
