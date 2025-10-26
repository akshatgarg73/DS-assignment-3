#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string infix, postfix = "";
    cout << "Enter infix expression: ";
    getline(cin, infix);

    stack<char> st;

    for(char ch : infix) {
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            postfix += ch;
        }
        else if(ch == '(') {
            st.push(ch);
        }
        else if(ch == ')') {
            while(!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            if(!st.empty()) st.pop();
        }
        else {
            int currPrec;
            if(ch == '+' || ch == '-') currPrec = 1;
            else if(ch == '*' || ch == '/') currPrec = 2;
            else currPrec = 0;

            while(!st.empty()) {
                char topOp = st.top();
                int topPrec;
                if(topOp == '+' || topOp == '-') topPrec = 1;
                else if(topOp == '*' || topOp == '/') topPrec = 2;
                else topPrec = 0;

                if(topPrec >= currPrec) {
                    postfix += topOp;
                    st.pop();
                } else {
                    break;
                }
            }
            st.push(ch);
        }
    }

    while(!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    cout << "Postfix expression: " << postfix << endl;

    return 0;
}

