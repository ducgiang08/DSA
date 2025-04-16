#include<bits/stdc++.h>
using namespace std;
int A[60];

int main(){
	int T; cin >> T;
	while (T--){
		int N , K; cin >> N >> K;
		for (int i = 0 ; i < N; i++) cin >> A[i];
		int sum1 = 0, sum2 = 0;
		int min_val = min(K , N-K);
		sort (A,A+N);
		for (int i = 0; i < min_val; i++) sum1 += A[i];
		for (int i = min_val; i < N; i++) sum2 += A[i];
		cout << sum2 - sum1 << endl;
	}
	return 0;
}