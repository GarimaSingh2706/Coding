#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for (int i = 0; i < a; ++i) 
	{
        int n,m;
        cin>>n>>m;
        int maxCount =0;
        for (int j = 0; j < n; ++j) 
		{
            char ar[m];
            int count=0;
            for (int k = 0; k < m; ++k) 
			{
                cin>>ar[k];
                if (ar[k]=='#'){
                    count++;
                }
            }
            maxCount = max(maxCount,count);
        }
        cout<<maxCount<<"\n";
    }
}
