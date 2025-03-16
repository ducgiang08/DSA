#include <bits/stdc++.h>
using namespace std;

int findKNumber(int N, int K){
	if (K%2 == 1) return 1;
	int mid = pow(2,N);
	if(K == mid) return N+1;
	else if (K < mid) return findKNumber(N-1,K);
	else return findKNumber (N-1,K-mid);
}

int main(){
	int T; cin >> T;
	while (T--){
		int N, K; cin >> N >> K;
		cout << findKNumber (N, K) << endl;
	}
	return 0;
}