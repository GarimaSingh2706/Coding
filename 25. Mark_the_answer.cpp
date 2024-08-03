#include<iostream>
#include <cstdio>
#include <map>
using namespace std;
int main()
{
	int n, x, flag = 0, max_score = 0;
	scanf("%d %d",&n,&x);
	int questions[n];
	map<int,int>freq; 
	for(int i = 0; i < n; i++){
		scanf("%d",&questions[i]);
	}
	for(int i = 0; i < n; i++)
	{
		if(questions[i] > x) flag++;
		if(questions[i] <= x && flag <= 1) { max_score++; }
		if(flag > 2) break;
		
	}
	printf("%d\n",max_score);
	return 0;
}
