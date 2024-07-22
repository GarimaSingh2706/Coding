#include <cstdio>
#include <vector>
using namespace std;
#define ll long long int;
int main()
{
	int t, n; scanf("%d",&t);
	vector<int> pcount; pcount.push_back(-1); pcount.push_back(-1);
	for(int i = 2; i < 1000000; i++)
  {
		n = i;
		int total = n/7;
		n %= 7;
		if(n > 0){
			if(n%2 == 0 && n > 2) total += 2;
			else total++;
		}
		pcount.push_back(total);
	}
	while(t-- && scanf("%d",&n))
  {
		printf("%d\n",pcount[n]);
	}
	return 0;
}
