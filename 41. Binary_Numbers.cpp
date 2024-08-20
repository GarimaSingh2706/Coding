#include <iostream>
#include <vector>
using namespace std;
string toBinary(int num) {
    string binary = "";
    while (num > 0) {
        binary = (num % 2 == 0 ? "0" : "1") + binary;
        num /= 2;
    }
    return binary;
}
bool containsSubstring11(const string &binary) {
    return binary.find("11") != string::npos;
}

int main() {
    int T;
    cin >> T;
    vector<int> K(T);
    
    for (int i = 0; i < T; ++i) {
        cin >> K[i];
    }

    for (int i = 0; i < T; ++i) {
        int count = 0;
        int num = 1;
        while (true) {
            string binary = toBinary(num);
            if (!containsSubstring11(binary)) {
                ++count;
                if (count == K[i]) {
                    cout << binary << endl;
                    break;
                }
            }
            ++num;
        }
    }
    return 0;
}
