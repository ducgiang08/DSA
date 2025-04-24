#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void nextSubset(int N, int K, vector<int>& X) {
    int i = K - 1;
    while (i >= 0 && X[i] == N - K + i + 1) {
        i--;
    }
    if (i >= 0) {
        X[i]++;
        for (int j = i + 1; j < K; j++) {
            X[j] = X[i] + j - i;
        }
    } else {
        for (int j = 0; j < K; j++) {
            X[j] = j + 1;
        }
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> X(K);
        for (int i = 0; i < K; i++) {
            cin >> X[i];
        }
        nextSubset(N, K, X);
        for (int num : X) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}