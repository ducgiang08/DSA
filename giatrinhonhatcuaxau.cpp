#include<bits/stdc++.h>
using namespace std;

int main(){
	int T; cin >> T;
	while (T--){
		string S;
		int K;
		cin >> K;
		cin.ignore();
		getline(cin , S);
		int d[300] = {0};
		long long res = 0;
		for (int i = 0; i < S.size(); i++) d[S[i]] ++;
		priority_queue<int, vector<int>> q;
		for(int i = 0; i < S.size();i++){
			if(d[S[i]] > 0) {
				q.push(d[S[i]]);
				d[S[i]] = 0;
			}
		}
		while (K > 0 && q.size()>0){
			K --;
			int t = q.top(); q.pop();
			t--;
			if (t > 0) q.push(t);
		}
		while (q.size() > 0){
			int t = q.top(); q.pop();
			res += t*t;
		}
		cout << res << endl;
	}
	return 0;
}