#include<bits/stdc++.h>
using namespace std;


int main(){
	int T;
	cin >> T;
	while (T--){
		int n;
		cin >> n;
		long long C[105] = {0};
		C[0] = 1;
		for (int i = 0; i <= n; i++){
			for (int j =0; j <i;j++){
				C[i] += C[j] * C[i-j-1];
			}
		}
		cout << C[n] << endl;
	}
	return 0;
}