#include <bits/stdc++.h>
using namespace std;

int main(){
	string n; cin >> n;
	int s = n.size();
	n = "n" + n;
	bool F[s+1][s+1];
	for (int i = 1; i<= s; i++) F[i][i] = true;
	int ans = 1;
	for (int len = 2; len <= s; len ++ ){
		for (int i = 1; i <= s - len + 1; i++){
			int j = i + len - 1;
			if (len == 2 && (n[i]==n[j])) F[i][j] = true;
			else F[i][j] = F[i+1][j-1] && (n[i]==n[j]);
			if (F[i][j]) ans = len;
		}
	}
	cout << ans  ;
	return 0;
}