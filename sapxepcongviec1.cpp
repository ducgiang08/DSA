#include<bits/stdc++.h>
using namespace std;

struct work{
	int Si, Fi;
};

work W[1005];

bool cmp(work a, work b){
	return a.Fi < b.Fi;
}
int main(){
	int T; cin >> T;
	while (T--){
		int N; cin >> N;
		for (int i = 0; i < N; i++) cin >> W[i].Si;
		for (int i = 0; i < N; i++) cin >> W[i].Fi;
		sort(W, W+N,cmp);
		int d = 1, i = 0;
		for (int j = 1; j < N; j++){
			if (W[j].Si >= W[i].Fi){
				d++;
				i = j;
			}
		}
		cout << d << endl;
	}
	return 0;
}