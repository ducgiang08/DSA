#include<bits/stdc++.h>
using namespace std;
#define MAX 10000005
long long A[MAX], B[MAX];

int main(){
	int T; cin >> T;
	while(T--){
		int N; cin >> N;
		for (int i = 0; i < N; i++) cin >> A[i];
		for (int i = 0; i < N; i++) cin >> B[i];
		sort(A,A+N);
		sort(B,B+N,greater<long long>());
		long long res = 0;
		for (int i = 0; i < N; i++) res += A[i] * B[i];
		cout << res << endl;
	}
	return 0;
}