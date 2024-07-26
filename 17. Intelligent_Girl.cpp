#include <cstdio>
#include <cstring>
#include <vector>
using namespace std;
int main()
{
	char intel_girl[10000];
	scanf("%s",intel_girl); 
	int n = strlen(intel_girl); intel_girl[n] = '\0';
	vector<int> soumika(n);
	for(int i = 0; i < n; i++)
	{
		for(int j = i; j < n; j++)
			if((intel_girl[j]-48)%2 == 0)
				soumika[i]++;
	}
	for(int i = 0; i < n; i++)
	{
		printf("%d ",soumika[i]);
	}
	return 0;
}
