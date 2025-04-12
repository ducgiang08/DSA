#include<bits/stdc++.h>
using namespace std;
int N, a[15], used[15];

void Try (int i){
	for (int j = 1; j <= N; j++){
		if (used[j] == 0){
			used[j] = 1;
			a[i] = j;
			if (i == N){
				for (int i = 1; i<=N; i++) cout << a[i];
				cout <<" ";
			}
			else Try (i+1);
			used[j] = 0;
		}
	}
}

int main(){
	int T;
	cin >> T;
	while (T--){
		cin >> N;
		Try (1);
		cout << endl;
	}
	return 0;
}