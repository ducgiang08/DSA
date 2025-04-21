#include<bits/stdc++.h>
using namespace std;
const long long  MOD = 1e9+7;

int main(){
	long long N; cin >> N;
	long long x;
	long long ans = 0;
	priority_queue <long long, vector<long long>,greater<long long>> res;
	for (long long i = 0; i < N; i++) {
		cin >> x;
		res.push(x);
	}
	while (res.size() > 1){
		long long x = res.top(); res.pop();
		long long y = res.top(); res.pop();
		long long tmp = (x+y) % MOD;
		res.push(x+y);
		ans += tmp % MOD;
	}
	cout << ans << endl;
	return 0;
}