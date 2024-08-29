#include <cmath>
#include <iostream>
#include <numeric>
using namespace std;

int a[1001], b[1001];

double distance(double a, double b) {
  return pow(a, 2) + pow(b, 2);
}

int main() {
  int N;
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> a[i] >> b[i];
  }

  double x = accumulate(a, a + N, 0.0) / N;
  double y = accumulate(b, b + N, 0.0) / N;

  double ratio = 0.1, max_distance, current_distance;
  for (int i = 0; i < 30000; i++) {
    int max_distance_index = 0;
    max_distance = distance(x - a[0], y - b[0]);
    for (int j = 1; j < N; j++) {
      current_distance = distance(x - a[j], y - b[j]);
      if (max_distance < current_distance) {
        max_distance = current_distance;
        max_distance_index = j;
      }
    }

    x += (a[max_distance_index] - x) * ratio;
    y += (b[max_distance_index] - y) * ratio;
    ratio *= 0.999;
  }

  if (round(x) == 0) x = 0;
  if (round(y) == 0) y = 0;

  cout.precision(2);
  cout << fixed;
  cout << sqrt(max_distance) * 2;

  return 0;
}