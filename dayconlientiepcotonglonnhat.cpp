#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		vector<int> arr(n);
		for(int i=0; i<n; i++) {
			cin>> arr[i];
		}
		
		int ans = INT_MIN;
		int sum_cur = 0;
		for(int i = 0; i<n; i++) {
			sum_cur = max(sum_cur + arr[i], arr[i]);
			ans = max(sum_cur, ans);
		}
		cout<<ans<<endl;
	}
}