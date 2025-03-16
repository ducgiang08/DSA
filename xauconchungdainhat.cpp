#include <bits/stdc++.h>
using namespace std;
int ans[1005][1005];

int main(){
	int T; cin >> T;
	while (T--){
		string S1, S2; cin >> S1 >> S2;
		int X = S1.size(), Y = S2.size();
		for (int i = 0; i <= X; i++){
			for (int j = 0; j <= Y; j++){
				if (i == 0 || j == 0) ans [i][j] = 0;
				else if(S1[i-1] == S2[j-1]) ans[i][j] = ans[i-1][j-1] + 1;
				else ans[i][j] = max(ans[i-1][j],ans[i][j-1]);
			}
		}
		cout << ans[X][Y] << endl;
	}
	return 0;
}