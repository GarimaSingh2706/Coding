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
	string code;
	while(getline(cin,code))
	{
		int comment = code.find("//");
		if(comment == string::npos)
		{
			comment = 0;
			while((comment = code.find("->")) != string::npos)
				code.replace(comment++,2,".");
		}
		else
		{
			int *x = &comment; int pos = 0;
			
			for(int i = 0; i < *x; i++)
			{
				pos = code.find("->",pos);
				if(pos != string::npos && pos+1 < *x)
				{
					code.replace(pos,2,".");
					pos++;
				}else break;
				
				*x = code.find("//");
			}
		}
		printf("%s\n",code.c_str());
	}

	return 0;
}
