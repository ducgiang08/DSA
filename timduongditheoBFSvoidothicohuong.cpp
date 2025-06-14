#include<bits/stdc++.h>

using namespace std;

bool chuaxet[1005];

int main(){
	int T; cin >> T;
	while(T--){
		int V, E, u, v;
		cin >> V >> E;
		vector<vector<int>> a(V+1);
		int solt = 0;
		while (E--){
			cin >> u >> v;
			a[u].push_back(v);
			a[v].push_back(u);
		}
		stack<int> st;
		memset(chuaxet,1,sizeof(chuaxet));
		for (int i = 1; i <= V; i++){
			if(chuaxet[i]){
				solt ++;
				st.push(i); chuaxet[i] = false;
				while(!st.empty()){
					auto z = st.top();
					st.pop();
					for (int i = 0; i < a[z].size(); i++){
						if(chuaxet[a[z][i]]){
							chuaxet[a[z][i]] = false;
							st.push(z);
							st.push(a[z][i]);
							break;
						}
					}
				}
			}
		}
		cout << solt << endl;
	}
	return 0;
}