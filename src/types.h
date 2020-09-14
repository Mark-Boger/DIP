#ifndef __DIP_TYPES__
#define __DIP_TYPES__

#include <functional>
template <class T>
class Checked {
  T value;
  std::function<T(T const &)> check;
};

#endif
