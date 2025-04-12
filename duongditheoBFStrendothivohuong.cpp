#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <cstring>

using namespace std;

const int MAX = 1005;

vector<int> adj[MAX];
int parent[MAX];
bool visited[MAX];

void bfs(int start, int end, int n) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    parent[start] = -1;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        if (u == end) break;

        for (int v : adj[u]) {
            if (!visited[v]) {
                visited[v] = true;
                parent[v] = u;
                q.push(v);
            }
        }
    }
}

void printPath(int start, int end) {
    if (!visited[end]) {
        cout << -1;
        return;
    }

    stack<int> path;
    for (int v = end; v != -1; v = parent[v]) {
        path.push(v);
    }

    while (!path.empty()) {
        cout << path.top();
        path.pop();
        if (!path.empty()) cout << " ";
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, m, s, t;
        cin >> n >> m >> s >> t;

        // Reset đồ thị và các mảng phụ trợ
        for (int i = 1; i <= n; i++) {
            adj[i].clear();
        }
        memset(visited, false, sizeof(visited));
        memset(parent, 0, sizeof(parent));

        // Đọc danh sách cạnh
        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        bfs(s, t, n);
        printPath(s, t);
        cout << endl;
    }

    return 0;
}