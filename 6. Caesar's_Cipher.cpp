#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <set>
using namespace std;
int main(){
	int q; scanf("%d",&q);
	while(q--){
		string a, b;
		cin >> a >> b;
		set<int>cipher;
		
		for(int i = 0; i < a.length(); i++)
			cipher.insert(abs((a[i] > b[i] ? 26 : 0) - (a[i]-b[i])));
		
		set<int>::iterator caesar = cipher.begin();

		printf("%d\n",(cipher.size() == 1 ? *caesar:-1));
	}
	return 0;
}
