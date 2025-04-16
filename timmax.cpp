#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
int A[10000005];

int main(){
	int T; cin >> T;
	while (T--){
		int N; cin >> N;
		for (int i = 0; i < N; i++) cin >> A[i];
		sort (A, A+N);
		long long res = 0;
		for (int i = 0; i < N; i++){
			res += A[i] * i;
			res %= mod;
		}
		cout << res << endl;
	}
	return 0;
}