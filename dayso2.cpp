#include <iostream>
#include <vector>

using namespace std;

void printTriangle(vector<int> A) {
    vector<vector<int>> triangle;
    triangle.push_back(A);
    
    while (A.size() > 1) {
        vector<int> next;
        for (int i = 0; i < A.size() - 1; i++) {
            next.push_back(A[i] + A[i+1]);
        }
        triangle.insert(triangle.begin(), next);
        A = next;
    }
    
    for (int i = 0; i < triangle.size(); i++) {
        cout << "[";
        for (int j = 0; j < triangle[i].size(); j++) {
            cout << triangle[i][j];
            if (j < triangle[i].size() - 1) cout << " ";
        }
        cout << "]";
        if (i < triangle.size() - 1) cout << " ";
    }
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
        printTriangle(A);
        cout << endl;
    }
    return 0;
}