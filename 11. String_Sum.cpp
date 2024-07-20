#include <iostream>
using namespace std;
int main()
{
	string str;
	while(getline(cin,str))
	{
		long int sum = 0;
		for(int i = 0; i < str.length(); i++)
		{
			sum += (str[i]-96);
		}
		cout << sum << endl;
	}
	
	return 0;
}
