#include <iostream>
#include <cstdio>
#include <cstring>
#include <set>
#include <cmath>
using namespace std;
int main(){
	
	int t; scanf("%d",&t);
	while(t--){
		string solitary; cin >> solitary;
		int max_solitary = 0, tmp = 0;
		if(solitary.length() > 1){
			set<char>sol_string;
			for(int i = 0; i < solitary.length(); i++)
				sol_string.insert(solitary[i]);
			set<char>::iterator it = sol_string.begin();
			max_solitary = abs(int(solitary.find_last_of(*it)-solitary.find_first_of(*it)));
			it++;
			for(; it != sol_string.end(); it++){
				tmp = solitary.find_last_of(*it)-solitary.find_first_of(*it);
				max_solitary = max(tmp,max_solitary);
			}
		}
		
		cout << max_solitary-1 << endl;
	}

	return 0;
}
