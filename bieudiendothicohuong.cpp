#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin >> T;
	while (T--){
		int V, E, u, v;
		cin >> V >> E;
		vector<vector<int>> a(V+1);
		while (E--){
			cin >> u >> v;
			a[u].push_back(v);
		}
		for(int i = 1; i <= V ; i++){
			cout << i <<": ";
			for(int j = 0; j < a[i].size();j++){
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}