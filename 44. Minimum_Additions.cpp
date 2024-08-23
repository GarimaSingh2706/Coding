#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
#define endl "\n"
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define vi vector<ll>
#define pb push_back
#define F first
#define S second
#define all(v) (v).begin(),(v).end()
#define pii pair<ll,ll>
#define vii vector<pii>
#define calc_fact(n) tgamma(n+1)
#define inf LONG_LONG_MAX
#define MOD 1000000007
#define mod 998244353
signed main()
{
	FIO;
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k,sum=0;
		cin>>n>>k;
		for(ll i=0;i<n;i++)
		{
			ll a;
			cin>>a;
			sum+=a;
		}
		ll p = sum/(k+1);
		p++;
		ll ans=max(0LL,p-n);
		cout<<ans<<endl;
	}
}
