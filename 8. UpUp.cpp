#include <iostream>
#include <sstream>
#include <cctype>
using namespace std;
int main(){
	string word, tmp;	
	while(getline(cin,word)){
		for(int i = 0; i < word.length()-1; i++){
			if(i == 0 && isalpha(word[i]))
				word[i] = toupper(word[i]);
			if(word[i] == ' ' && isalpha(word[i+1])){
				word[i+1] = toupper(word[i+1]);
				i++;
			}
		}
		cout << word << endl;
	}
}
