#include <bits/stdc++.h>
using namespace std;

bool chuaxet[1005];

int main() {
    int T;
    cin >> T;
    while (T--) {
        int V, E, u, s, v;
        cin >> V >> E >> u;
        vector<vector<int>> a(V + 1);
        while (E--) {
            cin >> s >> v;
            a[s].push_back(v);
        }
        fill(chuaxet, chuaxet + 1005, true);
        stack<int> st;
        st.push(u);
        chuaxet[u] = false;
        cout << u << " ";

        while (!st.empty()) {
            int z = st.top();
            bool found = false;

            for (int i = 0; i < a[z].size(); ++i) {
                int t = a[z][i];
                if (chuaxet[t]) {
                    chuaxet[t] = false;
                    st.push(t);
                    cout << t << " ";
                    found = true;
                    break;
                }
            }

            if (!found) st.pop();
        }

        cout << endl;
    }
    return 0;
}
