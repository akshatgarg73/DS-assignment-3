#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string postfix;
    cout << "Enter postfix expression: ";
    cin >> postfix;

    stack<int> st;

    for(char ch : postfix) {
        if(isdigit(ch)) {
            st.push(ch - '0');
        } else {
            int val2 = st.top(); st.pop();
            int val1 = st.top(); st.pop();

            switch(ch) {
                case '+': st.push(val1 + val2); break;
                case '-': st.push(val1 - val2); break;
                case '*': st.push(val1 * val2); break;
                case '/': st.push(val1 / val2); break;
            }
        }
    }

    cout << "Result: " << st.top() << endl;
    return 0;
}
