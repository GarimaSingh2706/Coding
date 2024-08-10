#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <sstream>
#include <algorithm>
#include <cctype>
using namespace std;
bool comp(pair<string,int>& a, pair<string,int>& b)
	{	
    	if(b.second == a.second)
		{
    		int b1 = (b.first).length(), a1 = (a.first).length(), mval = 0;
    		mval = min(b1,a1);		
    		for(int i = 0; i < mval; i++)
    			if(b.first[i] < a.first[i]){
    				swap(a.first,b.first);
    				break;
    			}else return a.first < b.first;
    			
    		return a.first < b.first;	
    	}else return a.second > b.second;
    }
int main()
	{
    	int n, cnt = 0; cin >> n; n++;
    	string twit;
    	map<string,int> twits;
    	set<string> trend;
    	while(n--)
		{
    		getline(cin,twit);
    		stringstream out(twit);
    		while(out >> twit)
			{
    			if(twit[0] == '#')
				{
    				twits[twit]++;
    				trend.insert(twit);
    				
    			}
    		}
    	}
vector<pair<string,int> >vps;
    	for(map<string,int>::iterator it = twits.begin(); it != twits.end(); it++)
		{
    		vps.push_back(*it);
    	}
    	sort(vps.begin(),vps.end(), comp);
    	for(int i = 0; i < 5; i++)
		{
    		cout << vps[i].first << endl;
    	}
    return 0;
}
