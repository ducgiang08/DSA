#include<bits/stdc++.h>
using namespace std;

int main(){
	int T; cin >> T;
	while (T--){
		int N, S, M;
		cin >> N >> S >> M;
		if (S * M > N * (S-S/7)) cout << -1 << endl;
		else {
			for (int i = 1; i <= S - S/7; i++){
				if (N * i >= S * M) {
					cout << i << endl;
					break;
				}
			}
		}
	}
	return 0;
}