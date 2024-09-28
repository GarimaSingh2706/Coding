#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() 
{
    long n;
    cin >> n;
    vector<long> a(n);
    long sum = 0, max = -10000000;
    for (long i = 0; i < n; i++) 
    {
        cin >> a[i];
        if (i > 0) 
        {
            a[i] += a[i - 1];
        }
    }
    for (long i = 0; i < n; i++) 
    {
        long left = n - i;
        long k = (-1 + static_cast<long>(sqrt(static_cast<double>(8 * left + 1)))) / 2;
        sum = a[(k * (k + 1)) / 2 + i - 1];
        if (i != 0) 
        {
            sum -= a[i - 1];
        }
        if (max < sum) 
        {
            max = sum;
        }
    }
    cout << max << endl;
    return 0;
}
