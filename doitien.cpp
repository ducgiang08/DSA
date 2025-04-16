#include<bits/stdc++.h>
using namespace std;
int A[] = {1,2,5,10,20,50,100,200,500,1000};

int main(){
	int T; cin >> T;
	while (T--){
		int N; cin >> N;
		int res = 0;
		for(int i = 9; i >= 0; i--){
			res += N / A[i];
			N %= A[i];  
		}
		cout << res << endl;
	}
	return 0;
}