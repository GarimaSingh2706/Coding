#include <cstdio>
using namespace std;
int main(){
	
	int n, groups = 1;
	scanf("%d",&n);
	int arr[n];
	scanf("%d",&arr[0]);
	for(int i = 1; i < n; i++){
		scanf("%d",&arr[i]);
		if(arr[i-1] > arr[i]) groups++;
	}
	printf("%d\n",groups);
	return 0;
}
