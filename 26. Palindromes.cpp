#include <iostream>
using namespace std;
int main()
{
	string s;
	while(getline(cin,s))
	{
		int i = 0;
		while((s == string(s.rbegin(),s.rend()+i)))
		{
			
			s.erase(s.length()-(i+1),1);
			i++;
		}
		
		if(s == string(s.rbegin(),s.rend())) cout << "0\n";
		else cout << s.length() << endl;

	}

	return 0;
}
