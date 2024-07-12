#include <iostream>
using namespace std;
unsigned long long factorial(int N) 
    {
    if (N == 0 || N == 1) {
        return 1; 
    }
    unsigned long long fact = 1;
    for (int i = 2; i <= N; ++i) 
    {
        fact *= i;
    }
    return fact;
}
int main() 
{
    int N;
    cin >> N;
    unsigned long long result = factorial(N);
    cout << result << endl; 
    return 0;
}
