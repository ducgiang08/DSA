#include <bits/stdc++.h>
using namespace std;
int A[205], Sum[40005];

int main(){
	int T; cin >> T;
	while (T--){
		int N, S; cin >> N >> S;
		for (int i=0; i<N; i++) cin >> A[i];
		Sum[0] = 1;
		for (int j=1; j<= S; j++) Sum[j]=0;
		for (int i=0; i<N; i++){
			for (int j = S; j>= A[i]; j--){
				if (Sum[j-A[i]]) Sum[j] = 1;
			}
		}
		if(Sum[S]) cout<< "YES" << endl;
		else cout << "NO" <<endl;
	}
	return 0;
}