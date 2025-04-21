#include<bits/stdc++.h>
using namespace std;
long long A[1000005];

int main(){
	int T; cin >> T;
	while (T--){
		long long N; cin >> N;
		long long sum = 0;
		priority_queue <long long, vector<long long>,greater<long long>> res;
		for (long long i = 0; i < N; i++) {
			cin >> A[i];
			res.push(A[i]);
		}
		while (res.size() > 1){
			long long x = res.top(); res.pop();
			long long y = res.top(); res.pop();
			sum = sum + x + y;
			res.push(x+y);
		}
		cout << sum << endl;
	}
	return 0;
}