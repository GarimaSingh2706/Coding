#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    vector<int> arr(n), brr(n);
    int aneg = 0, bneg = 0;
    long long asum = 0, bsum = 0;
    for (int i = 0; i < n; i++) 
	{
        cin >> arr[i];
        if (arr[i] == -1) aneg++;
        else asum += arr[i];
    }
    for (int i = 0; i < n; i++) 
	{
        cin >> brr[i];
        if (brr[i] == -1) bneg++;
        else bsum += brr[i];
    }
    long long d = abs(asum - bsum);
    if (aneg == bneg) 
	{
        cout << "Infinite" << endl;
    } 
	else if ((bsum - asum) > 0 && aneg != bneg) 
	{
        if (aneg == 0) 
		{
            cout << "0" << endl;
        } 
		else if (aneg == 1) 
		{
            cout << "1" << endl;
        } 
		else if (aneg > 1) 
		{
            cout << d + 1 << endl;
        }
    } 
	else if ((asum - bsum) > 0 && aneg != bneg) 
	{
        if (bneg == 0) 
		{
            cout << "0" << endl;
        } 
		else if (bneg == 1) 
		{
            cout << "1" << endl;
        } 
		else if (bneg > 1) 
		{
            cout << d + 1 << endl;
        }
    }
    return 0;
}
