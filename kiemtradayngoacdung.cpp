#include<bits/stdc++.h>
using namespace std;

void solve(string S){
	stack<char> st;
	if(S.empty()) {
		cout << "NO";
		return;
	}
	else {
		for(auto x : S){
			if(x == '{' || x == '[' || x == '(') st.push(x);
			else {
				if (st.empty()) {
					cout << "NO";
					return;
				}
				else {
					auto top = st.top();
					if ((x=='}'&&top=='{') || (x==']'&&top=='[') || (x==')'&&top=='(')) st.pop();
					else {
						cout << "NO";
						return;
					}
				}
			}
		}
		if (st.empty()) cout << "YES";
	}
}

int main(){
	int T;
	cin >> T;
	while (T--){
		string S;
		cin.ignore();
		getline(cin, S);
		solve(S) ;
		cout << endl;
	}
	return 0;
}