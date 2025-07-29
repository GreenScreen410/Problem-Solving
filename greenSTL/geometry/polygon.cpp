template <typename T>
struct Polygon {
  vector<Point<T>> vertices;

  size_t size() const {
    return vertices.size();
  }

  long double perimeter() const {
    long double result = 0;
    for (size_t i = 0; i < size(); i++) {
      result += vertices[i].dist(vertices[(i + 1) % size()]);
    }
    return result;
  }

  long double area() const {
    long double result = 0;
    for (size_t i = 0; i < size(); i++) {
      result += static_cast<long double>(vertices[i].x) * vertices[(i + 1) % size()].y;
      result -= static_cast<long double>(vertices[i].y) * vertices[(i + 1) % size()].x;
    }
    return abs(result) / 2.0;
  }
};