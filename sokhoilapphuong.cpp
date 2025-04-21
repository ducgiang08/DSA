#include<bits/stdc++.h>
using namespace std;

long long res;
vector<int> a;
int u[20];

bool check(long long x){
	if (x < 0) return false;
	long long root = round(cbrt(x));
	return root * root * root == x;
}

void Try (int k, int n){
	for (int j = 0; j <=1; j++){
		u[k] = j;
		long long ans = 0;
		if (k == n-1){
			for (int m = 0 ; m < n; m++){
				if(u[m]) ans = 10*ans + a[m];
			}
			if (check(ans) && ans!= 0 && res < ans) res = ans;
		}
		else Try(k+1,n);
	}
}

int main(){
	int T; cin >> T;
	while (T--){
		long long N; cin >> N;
		res = -1;
		a.clear();
		while (N){
			a.push_back(N%10);
			N/=10;
		}
		reverse(a.begin(),a.end());
		Try(0,a.size());
		cout << res << endl;
	}
}
