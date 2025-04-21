#include<bits/stdc++.h>
using namespace std;

int main(){
	int T; cin >> T;
	while (T--){
		cin.ignore();
		string S;
		getline (cin, S);
		stack <char> st;
		for (char x : S){
			if (x == '(' || x == '[' || x == '{') st.push(x);
			else {
				if(st.empty()){
					cout << "NO" << endl;
					break;
				}
				else {
					st.pop();
				}
			}
		}
		if (st.empty()) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}