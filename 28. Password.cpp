#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;
int main()
{
	int n; cin >> n;
	vector<string> pass_list(n);
	for(int i = 0; i < n; i++)
	{
		cin >> pass_list[i];
	}
	int flag = 0;
	for(int i = 0; i < n; i++){
		if(flag == 1) break;
		for(int j = n-1; j >= 1; j--){
			if(pass_list[i] != pass_list[j] && pass_list[i] == string(pass_list[j].rbegin(),pass_list[j].rend()))
			{
				int len = pass_list[i].length();
				cout << len << ' ' << pass_list[i][len/2] << endl;
				flag = 1;
				break;
			}	
		}
	}
	return 0;
}
