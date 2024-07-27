#include <stdio.h>

// 컴퓨터 상에서 정수인 음수를 표현하기 위해서 2 의 보수 표현법을 사용
int main() {
  unsigned int a = 2147483647;
  
  printf("a : %d \n", a);

  a++;
  printf("a : %d \n", a);

  return 0;
}