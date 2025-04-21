#include<bits/stdc++.h>
using namespace std;

int main(){
	int T; cin >> T;
	while (T--){
		int S, D;
		cin >> S >> D;
		stack<int> st;
		if (S > 9 * D || S < 1){
            cout << -1 << endl;
            continue;
        }
		while(S > 0){
			D--;
			if(S > 9){
				st.push(9);
				S-=9;
			}
			else {
				st.push(S);
				break;
			}
		}
		if (D < 0) cout << -1;
		else {
			if ( D > 0){
				int so = st.top(); st.pop();
				st.push(so - 1);
				while (D > 1){
					D -- ;
					st.push(0);
				}
				st.push(1);
			}
		}
		while (!st.empty()) {
				cout << st.top();
				st.pop();
			}
		cout << endl;
	}
	return 0;
}