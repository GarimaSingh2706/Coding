#include <cstdio>
#include <set>
#define ll long long int
using namespace std;
int main(){
	int t, n, m;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&m); ll tmp;
		set<ll> monk;
		for(int i = 0; i < n; i++){
			scanf("%lld",&tmp);
			monk.insert(tmp);	
		}		
		for(int i = 0; i < m; i++){
			scanf("%lld",&tmp);
			if(monk.count(tmp) > 0){
				printf("YES\n");
			} else {
				monk.insert(tmp);
				printf("NO\n");
			}
		}	
	}
	return 0;
}
