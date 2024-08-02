#include <iostream>
#include <set>
#include <map>
#include <cstdio>
using namespace std;
int main()
{
	int t, k; scanf("%d",&t);
	while(t--){
		scanf("%d",&k);
		int fp;
		set<int> hackerearth;
		map<int,int> freq;
		for(int i = 0; i < k; i++){
			scanf("%d",&fp);
			hackerearth.insert(fp);
			freq[fp]++;
		}
		int cnt = 0, tx; 
		for(set<int>::iterator i = hackerearth.begin(); i != hackerearth.end(); i++){
			tx = freq[*i];
			if(tx == 1) cnt++;
			else{ cnt += ((tx*tx+tx)/2); }
		}
		cout << cnt << endl;
	}
	return 0;
}
