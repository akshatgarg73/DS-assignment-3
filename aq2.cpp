#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    string inp; 
    cout << "Enter string: ";
    getline(cin, inp);
    int length = inp.length();
    vector<char> arr(length);
    for (int i = 0; i < length; i++) {
      
        arr[i] = inp[i];
    }
    cout << "Reversed string: ";
    for (int i = length - 1; i >= 0; i--) {
        cout << arr[i];
    }
    cout << endl;
    return 0;
}
