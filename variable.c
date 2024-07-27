// 바뀔 수 있는 어떤 값을 보관하는 곳을 변수
// 일반적인 경우 정수 데이터를 보관할 때 int 형 변수를 사용
#include <stdio.h>
int main() {
  float a = 3.141592f;
  double b = 3.141592;
  int c = 123;

  printf("a : %.2f \n", a);
  printf("c : %5d \n", c);
  printf("b : %6.3f \n", b);

  return 0;
}

// int a, b, c, hi;
// float d, e, f, bravo;
// double g, programming;
// long h;
// short i;
// char j, k, hello, mineral;