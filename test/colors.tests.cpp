#include "../src/colors/rgb.h"
#include "gtest/gtest.h"

using Color::RGB;
namespace colorTests {
class ColorTests : public ::testing::Test {};

TEST_F(ColorTests, ClampingColors) {
  RGB t{1000, -1000, 40};

  ASSERT_EQ(t.r(), 255);
  ASSERT_EQ(t.g(), 0);
  ASSERT_EQ(t.b(), 40);

  t.r(0);
  t.g(0);
  t.b(0);
  ASSERT_EQ(t.r(), 0);
  ASSERT_EQ(t.g(), 0);
  ASSERT_EQ(t.b(), 0);

  t.r(-10);
  t.g(-10);
  t.b(-10);
  ASSERT_EQ(t.r(), 0);
  ASSERT_EQ(t.g(), 0);
  ASSERT_EQ(t.b(), 0);

  t.r(1000);
  t.g(1000);
  t.b(1000);
  ASSERT_EQ(t.r(), 255);
  ASSERT_EQ(t.g(), 255);
  ASSERT_EQ(t.b(), 255);

  t.r(100);
  t.g(100);
  t.b(100);
  ASSERT_EQ(t.r(), 100);
  ASSERT_EQ(t.g(), 100);
  ASSERT_EQ(t.b(), 100);
}

TEST_F(ColorTests, WriteColors) {
  RGB t{1, 2, 3};
  std::cout << t << std::endl;
}
} // namespace colorTests
