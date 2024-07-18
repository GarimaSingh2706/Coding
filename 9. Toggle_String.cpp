#include <iostream>
using namespace std;
int main()
{
	string str;
	while(getline(cin,str))
	{
		
		for(int i = 0; i < str.length(); i++)
		{
			if(str[i] >= 65 && str[i] <= 90)
			{
				str[i] = char((int(str[i]-64))+96);
			}else if(str[i] >= 97 && str[i] <= 122)
			{
				str[i] = char((int(str[i]-96))+64);
			}
		}
		cout << str << endl;
	}
	return 0;
}
