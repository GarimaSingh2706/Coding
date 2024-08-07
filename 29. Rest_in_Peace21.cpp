#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <sstream>
using namespace std;
int main()
{
	int t, n; scanf("%d",&t);
	string str;
	while(t--)
	{
		cin >> str;
		int flag = 0, l_digit = str[str.length()-1]-48;
		if(atoi(str.c_str())%21 == 0) flag = 1;
		else
		{
			if(str.find("21") != string::npos) flag = 1;
			else flag = 0;
		}
		printf("%s\n",(flag == 1 ? "The streak is broken!" : "The streak lives still in our heart!"));
	}
	return 0;
}
