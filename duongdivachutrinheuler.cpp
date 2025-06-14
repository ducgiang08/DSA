#include<bits/stdc++.h>

using namespace std;

int main(){
	int T; cin >> T;
	while (T--){
		int V, E, u, v;
		int dem1 = 0, dem2 = 0;
		cin >> V >> E;
		vector<vector<int>> a(V+1);
		while(E--){
			cin >> u >> v;
			a[u].push_back(v);
			a[v].push_back(u);
		}
		for (int i = 1; i <= V; i++){
			if (a[i].size() % 2 == 0) dem1++;
			else dem2++;
		}
		if (dem1 == V) cout << 2;
		else if (dem2 == 2) cout << 1;
		else cout << 0;
		cout << endl;
	}
	return 0;
}