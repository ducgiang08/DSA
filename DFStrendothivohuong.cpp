#include<bits/stdc++.h>

using namespace std;

bool chuaxet[1005];

int main(){
	int T; cin >> T;
	while(T--){
		int V, E, u, s, v;
		cin >> V >> E >> u;
		vector<vector<int>> a(V+1);
		while (E--){
			cin >> s >> v;
			a[s].push_back(v);
			a[v].push_back(s);
		}
		stack<int> st;
		memset(chuaxet,1,sizeof(chuaxet));
		st.push(u); chuaxet[u] = false;
		cout << u <<" ";
		while(!st.empty()){
			auto z = st.top();
			st.pop();
			for (int i = 0; i < a[z].size(); i++){
				if(chuaxet[a[z][i]]){
					chuaxet[a[z][i]] = false;
					st.push(z);
					st.push(a[z][i]);
					cout << a[z][i] <<" ";
					break;
				}
			}
		}
		cout << endl;
	}
	return 0;
}