#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxBitonicSum(vector<int>& A) {
    int n = A.size();
    vector<int> lis(n), lds(n);
    
    // Compute LIS values
    for (int i = 0; i < n; i++) {
        lis[i] = A[i];
        for (int j = 0; j < i; j++) {
            if (A[i] > A[j] && lis[i] < lis[j] + A[i]) {
                lis[i] = lis[j] + A[i];
            }
        }
    }
    
    // Compute LDS values
    for (int i = n-1; i >= 0; i--) {
        lds[i] = A[i];
        for (int j = n-1; j > i; j--) {
            if (A[i] > A[j] && lds[i] < lds[j] + A[i]) {
                lds[i] = lds[j] + A[i];
            }
        }
    }
    
    // Find maximum sum
    int maxSum = 0;
    for (int i = 0; i < n; i++) {
        maxSum = max(maxSum, lis[i] + lds[i] - A[i]);
    }
    
    return maxSum;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        cout << maxBitonicSum(A) << endl;
    }
    return 0;
}