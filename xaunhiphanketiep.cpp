#include<bits/stdc++.h>
using namespace std;

void solve(){
	string X;
	cin >> X;
	int i = X.size()-1;
	while (X[i] == '1' && i>=0) i-= 1;
	if(i < 0){
		for (int i = 0; i < X.size(); i++) cout << 0;
		cout << endl;
	}
	else {
		X[i] = '1';
		for (int j = i+1; j < X.size(); j++) X[j] = '0';
		cout << X << endl;
	}
}

int main(){
	int T; cin >> T;
	while (T--){
		solve();
	}
	return 0;
}