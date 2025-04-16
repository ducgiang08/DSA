#include<bits/stdc++.h>
using namespace std;
int A[25];

int main(){
	int T; cin >> T;
	while (T--){
		int N; cin >> N;
		long long  x = 0, y = 0;
		
		for (int i = 0; i < N; i++) cin >> A[i];
		sort (A, A + N);
		for (int i = 0 ; i < N ; i++){
			if (i % 2 == 0) x = 10 * x + A[i];
			else y = 10 * y + A[i];
		}
		cout << x + y << endl;
	}
	return 0;
}