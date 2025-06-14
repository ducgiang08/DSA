#include<bits/stdc++.h>

using namespace std;

int main(){
	int T; cin >> T;
	while (T--){
		int V, E, s, u, v;
		cin >> V >> E >> s;
		vector<vector<int>> a(V+1);
		int chuaxet[1005];
		memset(chuaxet,1,sizeof(chuaxet));
		while (E--){
			cin >> u >> v;
			a[u].push_back(v);
			a[v].push_back(u);
		}
		queue<int> qu;
		qu.push(s); chuaxet[s] = false;
		while(!qu.empty()){
			auto z = qu.front();
			qu.pop();
			cout << z << " ";
			for (int i = 0; i < a[z].size(); i++){
				if(chuaxet[a[z][i]]){
					qu.push(a[z][i]);
					chuaxet[a[z][i]] = false;
				}
			}
		}
		cout << endl;	
	}
	return 0;
}