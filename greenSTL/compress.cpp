template <typename T>
void compress(vector<T>& v) {
  vector<T> sorted_unique = v;
  ranges::sort(sorted_unique);
  auto [first, last] = ranges::unique(sorted_unique);
  sorted_unique.erase(first, last);
  for (auto& i : v) i = ranges::lower_bound(sorted_unique, i) - sorted_unique.begin();
}
