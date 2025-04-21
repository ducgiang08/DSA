#include<bits/stdc++.h>
using namespace std;
int dp[300];
int main(){
	int T; cin >> T;
	while (T--){
		string S; cin >> S;	
		int max_freq = 0;
		memset(dp,0,sizeof(dp));
		for (int i = 0; i < S.size(); i++){
			dp[S[i]] ++;
			if (dp[S[i]] > max_freq) max_freq = dp[S[i]];
		}
		if (max_freq <= (S.size()+1)/2) cout << 1 << endl;
		else cout << -1 << endl;
	}
	return 0;
}