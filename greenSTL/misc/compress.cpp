void compress(auto& v) {
  auto temp = v;
  ranges::sort(temp);
  temp.erase(ranges::unique(temp).begin(), temp.end());
  for (auto& x : v) x = ranges::lower_bound(temp, x) - temp.begin();
}