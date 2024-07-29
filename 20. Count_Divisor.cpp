#include <iostream>
using namespace std;
int main()
{
	int l, r, k, ctr = 0;
	while(cin >> l >> r >> k)
	{
		ctr = 0;
		for(int i = l; i <= r; i++)
		{
			if(i%k == 0) ctr++;
		}
		cout << ctr << endl;
	}
	return 0;
}
