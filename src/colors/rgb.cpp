#include "rgb.h"
#include <algorithm>

using Color::RGB;

int RGB::r() const { return this->r_; }

int RGB::g() const { return this->g_; }

int RGB::b() const { return this->b_; }

void RGB::r(const int r) { this->r_ = std::clamp(r, MIN, MAX); }

void RGB::g(const int g) { this->g_ = std::clamp(g, MIN, MAX); }

void RGB::b(const int b) { this->b_ = std::clamp(b, MIN, MAX); }

namespace Color {

std::ostream &operator<<(std::ostream &os, const RGB &rgb) {
  return os << rgb.r() << " " << rgb.g() << " " << rgb.b();
}

std::istream &operator>>(std::istream &is, RGB &color) { return is; }
} // namespace Color
