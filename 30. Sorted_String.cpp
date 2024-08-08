#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
using namespace std;
bool comp(pair<char,int>&a, pair<char,int>&b)
{
	if(a.second == b.second)
	{
		return a.first < b.first;
	}
	return a.second < b.second;
}
int main()
{
	int t; scanf("%d",&t);
	while(t--){
		char word[105]; scanf("%s",word);
		int n = strlen(word); word[n] = '\0';
		map<char,int> freq;
		set<char> strings;
		for(int i = 0; i < n; i++)
		{
			freq[word[i]]++;
		}
		vector<pair<char,int> >vec;
		for(map<char,int>::iterator it = freq.begin(); it != freq.end(); it++)
		{
			vec.push_back(*it);
		}
		sort(vec.begin(),vec.end(),comp);
		for(int i = 0; i < vec.size(); i++){
			cout << string(vec[i].second,vec[i].first);
		}cout << endl;
		
	}
	return 0;
}
