#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	string str,ing;
	while(cin >> str)
	{
		ing = str;
		reverse(str.begin(),str.end());
		cout << (ing == str ? "YES\n":"NO\n");
	}
	
	return 0;
}
