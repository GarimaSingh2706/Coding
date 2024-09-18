#include <bits/stdc++.h>
using namespace std;
int main() 
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a, b = 0, c = 0;
	cin >> a;
	unordered_map<long long, int> have;
	for(; a ; --a) 
    {
		long long x;
		cin >> x;
		b = max(b, ++have[x]);
	}
	for(const auto& p : have) 
    {
		if(p.second == b) 
			++c;
	}
	cout << c << "\n";
	return 0;
}
