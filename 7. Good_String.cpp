#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	string str;
	while(getline(cin,str))
  {
		sort(str.begin(),str.end());
		int prev = str.length();
		str.erase(unique(str.begin(),str.end()),str.end());
		cout << prev-str.length() << endl;
	}
	return 0;
}
