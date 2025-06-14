#include<bits/stdc++.h>
using namespace std;

long long ugly(int n){
	long long ugly[10005];
	long long i2 = 1, i3 = 1, i5 = 1;
	ugly[1] = 1;
	for (int i = 2; i <=n; i++){
		ugly[i] = min(ugly[i2]*2,min(ugly[i3]*3,ugly[i5]*5));
		if(ugly[i] == ugly[i2]*2) i2 ++;
		if (ugly[i] == ugly[i3]*3) i3++;
		if (ugly[i] == ugly[i5]*5) i5 ++;
	}
	return ugly[n];
}

int main(){
	int T;
	cin >> T;
	while (T--){
		int N;
		cin >> N;
		cout << ugly(N) << endl;
	}
	return 0;
}