#include <iostream>
#include <cstdio>
#define lli long long int
using namespace std;
int main(){

	lli n, sum; 
	while(cin >> n){
		lli arr[n]; sum = 0;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
			sum += (long long int)(arr[i]);
		}
		cout << (long long int)sum << endl;
	}
	return 0;
}
