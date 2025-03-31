#include <iostream>
using namespace std;
int parent[1000001];

int find(int x) {
    return parent[x] == x ? x : parent[x] = find(parent[x]);
}
void merge(int x, int y) {
    x = find(x);
    y = find(y);
    if (x != y) parent[y] = x;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

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
        } else {
            if (find(a) == find(b)) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}