#include<bits/stdc++.h>
using namespace std;

struct TD{
	int hs, mu;
};

int main(){
	int T;
	cin >> T;
	while (T--){
		int M, N;
		cin >> M >> N;
		vector<vector<TD> > res;
		TD a[M], b[N];
		for (int i = 0; i < M; i++){
			cin >> a[i].hs;
			a[i].mu = i;
		}
		for (int i = 0; i < N; i++){
			cin >> b[i].hs;
			b[i].mu = i;
		}
		for (int i = 0; i < M; i++){
			vector<TD> tmp;
			for (int j = 0; j < N; j++){
				tmp.push_back({a[i].hs*b[j].hs,a[i].mu+b[j].mu});
			}
			res.push_back(tmp);
		}
		int mu = 0;
		while (mu<M+N-1){
			int hs = 0;
			for (int i = 0; i<res.size(); i++){
				for (int j = 0; j < res[i].size();j++)
					if(res[i][j].mu == mu) hs += res[i][j].hs;
			}
			cout << hs << " ";
			mu ++;
		}
		cout << endl;
	}
	return 0;
}