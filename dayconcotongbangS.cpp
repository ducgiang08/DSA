#include <bits/stdc++.h>
using namespace std;
int A, Sum[40005];

int main(){
	int T; cin >> T;
	while (T--){
		int N, S; cin >> N >> S;
		memset(Sum,0,sizeof(Sum));
		for (int i=0; i<N; i++) {
			cin >> A;
			Sum[A]=1;
			for (int j = S; j >=A;j--){
				if(Sum[j-A]) Sum[j]=1;
			}
		}
		if(Sum[S]) cout<< "YES" << endl;
		else cout << "NO" <<endl;
	}
	return 0;
}