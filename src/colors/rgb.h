/*
 This defines the operations on colors in an image
*/

#ifndef __DIP_COLORS__
#define __DIP_COLORS__

#include <algorithm>
#include <iostream>

#define MAX 255
#define MIN 0

namespace Color {

class RGB {
public:
  RGB() : r_{0}, g_{0}, b_{0} {};
  RGB(int r, int g, int b)
      : r_{std::clamp(r, MIN, MAX)}, g_{std::clamp(g, MIN, MAX)}, b_{std::clamp(b, MIN, MAX)} {};

  void r(const int r);
  void g(const int g);
  void b(const int b);
  int r() const;
  int g() const;
  int b() const;

  RGB &operator+=(const RGB &rhs);
  RGB &operator-=(const RGB &rhs);
  RGB &operator*=(const RGB &rhs);
  RGB &operator/=(const RGB &rhs);
  bool operator==(const RGB &other);
  bool operator!=(const RGB &other);

private:
  friend std::ostream &operator<<(std::ostream &os, const RGB &rgb);
  friend std::istream &operator>>(std::istream &is, RGB &color);

  int r_;
  int g_;
  int b_;
};
} // namespace Color

#endif
