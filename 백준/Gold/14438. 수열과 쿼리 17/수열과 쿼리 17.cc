#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int init(vector<long long> &v, vector<long long> &tree, int node, int start, int end) {
    if (start == end) return tree[node] = v[start];
    int mid = (start + end) / 2;
    return tree[node] = min(init(v, tree, node * 2, start, mid), init(v, tree, node * 2 + 1, mid+ 1, end));
}
long long update(vector<long long> &tree, int node, int start, int end, int index, long long value) {
    if (index < start || index > end) return tree[node];
    if (start == end) return tree[node] = value;
    int mid = (start + end) / 2;
    return tree[node] = min(update(tree, node * 2, start, mid, index, value), update(tree, node * 2 + 1, mid + 1, end, index, value));
}
long long query(vector<long long> &tree, int node, int start, int end, int left, int right) {
    if (left > end || right < start) return 2e9;
    if (left <= start && end <= right) return tree[node];
    int mid = (start + end) / 2;
    return min(query(tree, node * 2, start, mid, left, right), query(tree, node * 2 + 1, mid + 1, end, left, right));
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    cin >> N;
    
    vector<long long> v(N);
    vector<long long> tree(1 << (int)(ceil(log2(N)) + 1));
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }
    init(v, tree, 1, 0, N - 1);
    
    int M;
    cin >> M;
	for (int i = 0; i < M; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		
		if (a == 1) {
			v[b - 1] = c;
			update(tree, 1, 0, N - 1, b - 1, c);
		}
		else {
			cout << query(tree, 1, 0, N - 1, b - 1, c - 1) << "\n";
		}
	}

    return 0;
}