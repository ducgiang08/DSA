#include<bits/stdc++.h>
using namespace std;
int A[60], B[60];
int main (){
	int T;
	cin >> T;
	while (T--){
		int N;
		cin >> N;
		bool ok = true;
		for (int i = 0; i < N; i++){
			cin >> A[i];
			B[i] = A[i];
		}
		sort(B,B+N);
		for (int i = 0; i < N; i++){
			if (A[i] != B[i] && A[i] != B[N-i-1]){
				ok = false;
				break;
			}
		}
		if (!ok) cout << "No" << endl;
		else cout << "Yes" << endl;
	}
	return 0;
}