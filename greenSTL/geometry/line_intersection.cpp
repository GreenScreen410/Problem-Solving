auto line_intersection(auto a, auto b, auto c, auto d) {
  auto sign = [](auto v) { return (v > 0) - (v < 0); };
  int ab = sign(a.ccw(b, c)) * sign(a.ccw(b, d));
  int cd = sign(c.ccw(d, a)) * sign(c.ccw(d, b));
  if (ab == 0 && cd == 0) {
    if (a > b) swap(a, b);
    if (c > d) swap(c, d);
    return c <= b && a <= d;
  }
  return ab <= 0 && cd <= 0;
}