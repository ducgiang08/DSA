#include <bits/stdc++.h>
using namespace std;
int A[1005],L[1005];

int main(){
	int T; cin >> T;
	while (T--){
		int N; cin >> N;
		for (int i = 0; i < N; i++) cin >> A[i];
		for (int i = 0; i < N; i++){
			L[i] = 1;
			for (int j = 0; j < i; j++){
				if (A[j] < A[i]) L[i] = max(L[i],L[j]+1);
			}
		}
		sort(L, L+N);
		cout << L[N-1] << endl;
	}
	return 0;
}