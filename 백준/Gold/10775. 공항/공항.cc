#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> parent(100001);

int find(int x) {
  return parent[x] == x ? x : parent[x] = find(parent[x]);
}

void merge(int x, int y) {
  x = find(x);
  y = find(y);
  if (x > y) swap(x, y);
  parent[y] = x;
}

int main() {
  int G, P;
  cin >> G >> P;
  
  for (int i = 1; i <= G; i++) {
    parent[i] = i;
  }
  
  int answer = 0;
  while (P--) {
    int g;
    cin >> g;
    
    g = find(g);
    if (g == 0) break;
    merge(g, g - 1);
    answer++;
  }

  cout << answer;
  
  return 0;
}