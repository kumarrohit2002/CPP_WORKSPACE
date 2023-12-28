#include <stdio.h>
#include <math.h>

int main() {
  float di = 6.0f;
  float r= di / 2.0f;
  float side = 2 * r * sqrt(3.0f) / 3.0f;
  printf("The side length of the triangle is %.2f cm.\n", side);
  float length_of_material = side* 3.0f;
  float breadth_of_material = side * 2.0f;
  printf("The length of the material is %.2f cm.\n", length_of_material);
  printf("The breadth of the material is %.2f cm.\n", breadth_of_material);

  return 0;
}

