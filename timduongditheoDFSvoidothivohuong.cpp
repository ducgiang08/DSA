#include<bits/stdc++.h>

using namespace std;

bool chuaxet[1005];

int main(){
	int T; cin >> T;
	while(T--){
		int V, E, s, t, u, v;
		cin >> V >> E >> s >> t;
		vector<vector<int>> a(V+1);
		int pre[1005];
		vector<int> path;
		bool check = false;
		while (E--){
			cin >> u >> v;
			a[u].push_back(v);
			a[v].push_back(u);
		}
		stack<int> st;
		memset(chuaxet,1,sizeof(chuaxet));
		memset(pre,-1,sizeof(pre));
		st.push(s); chuaxet[s] = false;
		while(!st.empty()){
			auto z = st.top();
			st.pop();
			for (int i = 0; i < a[z].size(); i++){
				if(chuaxet[a[z][i]]){
					chuaxet[a[z][i]] = false;
					st.push(z);
					st.push(a[z][i]);
					pre[a[z][i]] = z;
					break;
				}
			}
		}
		if(pre[t]!= -1){
			while(t!=s){
				path.push_back(t);
				t = pre[t];
			}
			path.push_back(s);
			for(auto it = path.rbegin(); it!= path.rend(); it++) cout << *it <<" ";
		}
		else cout << -1;
		cout << endl;
	}
	return 0;
}