#include<bits/stdc++.h>
using namespace std; 

int cot[15], dxuoi[100], dnguoc[100];
int n, ans = 0;
void Try(int i){
	for (int j = 1; j<= n; j++){
		if(cot[j] == 0 && dxuoi[i-j+n] == 0 && dnguoc[i+j-1] == 0){
			cot [j] = dxuoi [i-j+n] = dnguoc[i+j-1] = 1;
			if (i == n) ans ++;
			else Try(i+1);
			cot[j] = dxuoi[i-j+n] = dnguoc[i+j-1] = 0;
		}
	}
}
	

int main(){
	cin >> n;
	Try(1);
	cout << ans;
	return 0;
}