#include <iostream>
#include <queue>
using namespace std;

vector<int> graph[1001];
bool visited[1001];
int amount = 0;

void bfs(int x) {
    // 이미 방문한 곳이라면 패스
	if (visited[x] == true) {
		return;
	}
	
	amount++;
	
	queue <int> q;
	q.push(x);
	while (!q.empty()) {
		x = q.front();
		q.pop();
		
		for (int i = 0; i < graph[x].size(); i++) {
			if (visited[graph[x][i]] == false) {
				q.push(graph[x][i]);
				visited[graph[x][i]] = true;
			}
		}
	}
}

int main() {
	int N, M;
	cin >> N >> M;
	
	for (int i = 1; i <= M; i++) {
		int u, v;
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	
	for (int i = 1; i <= N; i++) {
		bfs(i);
	}
	
	cout << amount;
}