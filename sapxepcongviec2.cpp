#include<bits/stdc++.h>
using namespace std;

struct work{
	int JobID, Deadline, Profit;
};

bool cmp(work a, work b){
	return a.Profit > b.Profit;
}

work W[1005];

int main(){
	int T; cin >> T;
	while (T--){
		int N; cin >> N;
		int max_Deadline = 1;
		for (int i = 0; i < N; i++) {
			cin >> W[i].JobID >> W[i].Deadline >> W[i].Profit;
			max_Deadline = max(max_Deadline,W[i].Deadline);
		}
		sort (W, W+N, cmp);
		int d = 0, res = 0;
		int F[1005] = {0};
		for (int i = 0; i < N; i++){
			for (int j = W[i].Deadline; j >= 1; j--){
					if(!F[j]) {
						F[j] = true;
						res += W[i].Profit;
						d++;
						break;
				}
			}
		}
		cout << d << " " << res << endl;
	}
	return 0;
}
