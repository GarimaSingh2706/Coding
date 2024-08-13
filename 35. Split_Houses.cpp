#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    string village;
    cin >> village;
    for (int i = 0; i < n - 1; i++) 
	{
        if (village[i] == 'H' && village[i + 1] == 'H') 
		{
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    for (int i = 0; i < n; i++) 
	{
        if (village[i] == '.') 
		{
            village[i] = 'B';
        }
    }
    cout << village << endl;
    return 0;
}
