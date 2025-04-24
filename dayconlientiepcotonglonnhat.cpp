#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int maxSubArray(vector<int>& A) {
    int maxSoFar = INT_MIN, maxEndingHere = 0;
    
    for (int num : A) {
        maxEndingHere += num;
        if (maxSoFar < maxEndingHere) {
            maxSoFar = maxEndingHere;
        }
        if (maxEndingHere < 0) {
            maxEndingHere = 0;
        }
    }
    
    return maxSoFar;
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
        cout << maxSubArray(A) << endl;
    }
    return 0;
}