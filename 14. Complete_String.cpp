#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int n; string str; cin >> n;
	while(n--){
		cin >> str;
		sort(str.begin(),str.end());
		bool flag = false;
		vector<int> vec(26);
		if(str.length() >= 26){
			for(int i = 0; i < str.length(); i++){
				vec[str[i]-97]++;
			}
			sort(vec.begin(),vec.end());
			if(vec[0] != 0) flag =true; 
		}
		cout << (flag == true ? "YES\n":"NO\n");
	}
	return 0;
}
