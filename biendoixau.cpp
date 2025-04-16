#include<bits/stdc++.h>
using namespace std;

int main(){
	int T; cin >> T;
	while (T--){
		string str1, str2;
		cin >> str1 >> str2;
		int n = str1.length(), m = str2.length();
		int dp[n+5][m+5];
		for (int i = 0; i <= n; i++){
			for (int j = 0; j <= m; j++){
				if (i==0 || j == 0) dp[i][j] = i+j;
				else if (str1[i-1] == str2[j-1]) dp[i][j] = dp[i-1][j-1];
				else dp[i][j] = min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1])) + 1;
			}
		}
		cout << dp[n][m] << endl;
	}
	return 0;
}