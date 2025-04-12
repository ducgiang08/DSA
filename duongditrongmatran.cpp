#include<bits/stdc++.h>
using namespace std;
#define MAX 105
int xx[4] = {-1, 0, 0, +1};
int yy[4] = {0, -1, +1, 0};
int M, N, x_1, y_1, x_2, y_2;
int A[MAX][MAX];

int Ddingannhat(){
    int D[MAX][MAX];
    for (int i = 1; i <= M; i++)
        for (int j = 1; j <= N; j++) 
            D[i][j] = 100000;
    D[x_1][y_1] = A[x_1][y_1];
    bool Ok = true;
    while(Ok){
        Ok = false;
        for (int i = 1; i <= M; i++)
            for (int j = 1; j <= N; j++)
                for (int k = 0; k < 4; k++) {
                    int ni = i + xx[k];
                    int nj = j + yy[k];
                    if (ni >= 1 && ni <= M && nj >= 1 && nj <= N) {
                        if (D[i][j] > D[ni][nj] + A[i][j]) {
                            D[i][j] = D[ni][nj] + A[i][j];
                            Ok = true;
                        }
                    }
                }
    }
    return D[x_2][y_2];
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> M >> N;
		for (int i = 1; i<= M; i++)
		for (int j = 1; j<= N; j++) cin >> A[i][j];
		cin >> x_1 >> y_1 >> x_2 >> y_2;
		cout << Ddingannhat() << endl;
	}
	return 0;
}