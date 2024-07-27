#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int t, safe = 0; cin >> t;
	int patient[t];
	int vaccine[t];
	for(int i = 0; i < t;i++) scanf("%d",&vaccine[i]);
	for(int i = 0; i < t;i++) scanf("%d",&patient[i]);
	sort(patient,patient+t);
	sort(vaccine,vaccine+t);
	for(int i = 0; i < t; i++)
	{
		if(vaccine[i] > patient[i]) safe++;
	}
	
	printf("%s\n",(safe == t ? "Yes" : "No")); 
	return 0;
}
