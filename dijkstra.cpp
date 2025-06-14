#include<bits/stdc++.h>
using namespace std;

struct Edge{
	int to, weight;
};

struct Step {
	set<int> unmarked;
	set<int> marked;
	vector<int> distances;
	int current;
};

vector<Step> dijkstra(vector<vector<Edge>>& graph, int start, int n){
	vector<Step> steps;
	vector<int> dist(n, numeric_limits<int>::max());
	priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
	set<int> unmarked, marked;
	
	for (int i = 0; i < n; i++) unmarked.insert(i+1);
	
	dist[start] = 0;
	pq.push({0,start});
	
	while (!pq.empty()) {
		int d = pq.top().first;
		int u = pq.top().second;
		pq.pop();
		
		if (d > dist[u]) continue;
		
		unmarked.erase(u+1);
		marked.insert(u+1);
		
		Step step;
		step.unmarked = unmarked;
		step.marked = marked;
		step.distances = dist;
		step.current = u+1;
		steps.push_back(step);
		
		for (const Edge& e : graph[u]) {
			int v = e.to;
			int w = e.weight;
			
			if (dist[u] + w < dist[v]) {
				dist[v] = dist[u] + w;
				pq.push({dist[v],v});
			}
		}
	}
	return steps;
}

string setToString(const set<int>& s) {
	stringstream ss;
	ss << "{";
	bool first = true;
	for (int x : s) {
		if(!first) ss << ",";
		ss << x;
		first = false;
	}
	ss << "}";
	return ss.str();
}

int main() {
	int n, m;
	cout << "Nhap so dinh: ";
	cin >> n;
	cout << "Nhap so canh: ";
	cin >> m;
	vector<vector<Edge>> graph(n);
	cout << "Nhap " << m << " canh (u v w): \n";
	for (int i = 0; i < m; i++){
		int u, v, w;
		cin >> u >> v >> w;
		u--; v--;
		graph[u].push_back({v,w});
		graph[v].push_back({u,w});
	}
	int start;
	cout <<"Nhap dinh bat dau: ";
	cin >> start;
	start --;
	
	vector<Step> steps = dijkstra(graph, start, n);
	
	cout <<"\n" << left;
	
	cout << setw(10) <<"Iteration" << setw(20) <<"unmarked" << setw(20) << "marked" << setw(15) << "Current" << " |";
	for (int i = 1; i <=n; ++i){
		cout << setw(6) << i <<" ";
	}
	cout <<"\n";
	
	cout << string(10,'-') << string(20,'-') << string(20,'-') << string(15,'-') << " |";
	for(int i = 0; i < n; ++i){
		cout << string(6,'-') <<" ";
	}
	cout << "\n";
	
	for(int i = 0 ; i < steps.size(); ++i) {
		const Step& step = steps[i];
		cout << setw(10) << (i+1);
		cout << setw(20) << setToString(step.unmarked);
		cout << setw(20) << setToString(step.marked);
		cout << setw(15) << ("u=" + to_string(step.current)) << " |";
		for(int j = 0; j < n; ++j){
			if(step.distances[j] == numeric_limits<int>::max()) {
				cout << setw(6) << "Inf" << " ";
			} else{
				cout << setw(6) << step.distances[j] << " ";
			}
		}
		cout <<"\n";
	}
	return 0;
}