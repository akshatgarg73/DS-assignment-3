#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string expr;
    cout << "Enter an expression: ";
    getline(cin, expr);

    stack<char> st;
    int flag = 1;

    for(char ch : expr) {
        if(ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        else if(ch == ')' || ch == '}' || ch == ']') {
            if(st.empty()) {
                flag = 0;
                break;
            }
            char top = st.top();
            st.pop();
            if((ch == ')' && top != '(') ||
               (ch == '}' && top != '{') ||
               (ch == ']' && top != '[')) {
                flag = 0;
                break;
            }
        }
    }

    if(!st.empty()) flag = 0;

    if(flag)
        cout << "Balanced" << endl;
    else
        cout << "Not Balanced" << endl;

    return 0;
}
