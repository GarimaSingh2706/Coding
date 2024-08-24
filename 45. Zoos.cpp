#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string word;
    cin >> word;
    int countZ = 0, countO = 0;
    for (char c : word) 
	{
        if (c == 'z' || c == 'Z') countZ++;
        else if (c == 'o' || c == 'O') countO++;
    }
    if (2 * countZ == countO) 
	{
        cout << "Yes" << endl;
    } 
	else 
	{
        cout << "No" << endl;
    }
    return 0;
}
