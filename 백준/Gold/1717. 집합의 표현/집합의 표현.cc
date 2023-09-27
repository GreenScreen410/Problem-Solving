#include <iostream>
using namespace std;
int parent[1000001];

int find(int x) {
	if (parent[x] == x) return x;
	parent[x] = find(parent[x]);
	return parent[x];
}
void merge(int x, int y) {
	x = find(x);
	y = find(y);
	if (x == y) return;
	parent[y] = x;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
	int n, m;
	cin >> n >> m;
	
	for (int i = 1; i < 1000001; i++) {
	    parent[i] = i;
	}
		
	for (int i = 0; i < m; i++) {
	    int q, a, b;
	    cin >> q >> a >> b;

		if (q == 0) {
			merge(a, b);
		}
		else {
			if (find(a) == find(b)) {
			    cout << "YES\n";
			}
			else {
			    cout << "NO\n";
			}
		}
	}
	
	return 0;
}