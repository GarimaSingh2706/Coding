#include <iostream>
using namespace std;
int main()
{
	int n; cin >> n;
	string s, invalid = "2345679";
	while(n--)
	{
		cin >> s;
		if(s == string(s.rbegin(),s.rend()))
		{
			cout << (s.find_first_of(invalid) == string::npos ? "YES\n" : "NO\n");
		} else cout << "NO\n";
	}
	
	return 0;
}
