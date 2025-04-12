#include <bits/stdc++.h>
using namespace std;
int C[20][20], X[20], visited[20];
int n, d, ans = INT_MAX;
int dem = 0;

void nhap(){
	cin >> n;
	for (int i = 1; i<= n; i++){
		for (int j = 1; j<= n; j++){
			cin >> C[i][j];
		}
	}
}
void Try(int i){
	for (int j = 2; j <= n; j++){
		dem ++;
		if(!visited[j]){
			visited[j] = 1;
			X[i] = j;
			d += C[X[i-1]][X[i]];
			if (i == n) {
				ans = min (ans, d+ C[X[n]][1]);
			}
			else {
				Try (i+1);
			}
			visited[j] = 0;
			d -= C[X[i-1]][X[i]];
		}
	}
}

int main(){
	nhap();
	X[1] = 1; visited[1] = 1;
	Try(2);
	cout << ans << endl;
	cout << dem;
	return 0;
}

