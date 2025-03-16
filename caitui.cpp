#include <bits/stdc++.h>
using namespace std;
int ans[1005][1005], A[1005], C[1005];

int main(){
	int T; cin >> T;
	while (T--){
		int N, V; cin >> N >> V;
		for (int i = 1; i <= N; i++) cin >> A[i] ;
		for (int i = 1; i <= N; i++) cin >> C[i] ;
		for (int i = 1; i <= N; i++){
			for (int j = 1; j <= V; j++){
				ans[i][j] = ans[i-1][j];
				if (j>= A[i]) ans[i][j] = max(ans[i][j], ans[i-1][j-A[i]]+C[i]);
			}
		}
		cout << ans[N][V] << endl;
	}
	return 0;
}