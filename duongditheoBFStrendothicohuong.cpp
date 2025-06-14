#include<bits/stdc++.h>

using namespace std;

int main(){
	int T; cin >> T;
	while (T--){
		int V, E, s, t, u, v;
		cin >> V >> E >> s >> t;
		vector<vector<int>> a(V+1);
		int pre[1005];
		int chuaxet[1005];
		vector<int> path;
		memset(chuaxet,1,sizeof(chuaxet));
		memset(pre,-1,sizeof(pre));
		while (E--){
			cin >> u >> v;
			a[u].push_back(v);
		}
		queue<int> qu;
		qu.push(s); chuaxet[s] = false;
		while(!qu.empty()){
			auto z = qu.front();
			qu.pop();
			for (int i = 0; i < a[z].size(); i++){
				if(chuaxet[a[z][i]]){
					qu.push(a[z][i]);
					chuaxet[a[z][i]] = false;
					pre[a[z][i]] = z; 
				}
			}
		}
		if (pre[t] == -1) cout << -1;
		else {
			path.push_back(t);
			while(t!=s){
				t = pre[t];
				path.push_back(t);
			}
			for (auto it = path.rbegin(); it!= path.rend(); it++) cout << *it << " ";
		}
		cout << endl;	
	}
	return 0;
}