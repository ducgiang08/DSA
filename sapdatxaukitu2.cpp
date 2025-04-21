#include<bits/stdc++.h>
using namespace std;

int dp[300];

int main(){
	int T; cin >> T;
	while (T--){
		int D; cin >> D;
		string S; cin >> S;
		memset(dp,0,sizeof(dp));
		int max_freq = 0;
		for (int i = 0; i < S.size(); i++){
			dp[S[i]] ++;
			if (max_freq < dp[S[i]]) max_freq = dp[S[i]];
			}
		if ((max_freq - 1)*(D-1) > S.size() - max_freq) cout << -1 << endl;
		else cout << 1 << endl;
	}
	return 0;
}