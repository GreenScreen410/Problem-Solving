#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
using namespace std;

double x[5000], y[5000], z[5000];

double min_enclosing_circle(double x[], double y[], int N) {
  double a = accumulate(x, x + N, 0.0) / N;
  double b = accumulate(x, x + N, 0.0) / N;
  double ratio = 0.1, max_distance, current_distance;
  
  for (int i = 0; i < 10000; i++) {
    int max_distance_index = 0;
    max_distance = hypot(a - x[0], b - y[0]);
    for (int j = 1; j < N; j++) {
      current_distance = hypot(a - x[j], b - y[j]);
      if (max_distance < current_distance) {
        max_distance = current_distance;
        max_distance_index = j;
      }
    }
    
    a += (x[max_distance_index] - a) * ratio;
    b += (y[max_distance_index] - b) * ratio;
    ratio *= 0.999;
  }

  return max_distance * 2;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int N;
  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> x[i] >> y[i] >> z[i];
  }

  cout.precision(4);
  cout << fixed << min({min_enclosing_circle(x, y, N), min_enclosing_circle(y, z, N), min_enclosing_circle(z, x, N)});
  
  return 0;
}