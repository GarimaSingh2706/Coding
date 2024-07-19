#include <iostream>
#include <cstring>
#include <map>
using namespace std;
int main()
{
	string str;
	while(getline(cin,str))
	{
		map<char,int> freq;
		for(int i = 0; i < str.length(); i++)
		{
			freq[str[i]]++;
			if(freq[str[i]] == 1) cout << str[i];
		}cout << endl;
	}
	return 0;
}
