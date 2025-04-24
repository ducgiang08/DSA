#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string exp;
        cin >> exp;

        stack<string> st;
        for (int i = exp.length() - 1; i >= 0; i--) {
            if (!isOperator(exp[i])) {
                st.push(string(1, exp[i]));
            } else {
                string op1 = st.top(); st.pop();
                string op2 = st.top(); st.pop();
                string newExp = "(" + op1 + exp[i] + op2 + ")";
                st.push(newExp);
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}