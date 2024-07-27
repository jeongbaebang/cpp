//  '=' 를 대입 연산자(Assignment Operator)
// % 는 오직 정수형 데이터에서만 연산이 가능
// 어떠한 자료형이 다른 두 변수를 연산 할 때, 숫자의 범위가 큰 자료형으로 자료형들이 바뀝니다.
#include <stdio.h>
int main() {
  int a = 0xAF;
  int b = 0xB5;


  printf("%x \n", a & b);   // a & b = 10100101
  printf("%x \n", a | b);   // a | b =10111111
  printf("%x \n", a ^ b);   // a ^ b = 00011010
  printf("%x \n", ~a);      // ~a = 1....1 01010000
  printf("%x \n", a << 2);  // a << 2 = 1010111100
  printf("%x \n", b >> 3);  

  return 0;
}

// 우선순위를 잘못 고려하여 나는 오류들은 찾기가 매우 힘들기 때문에 애초에 헷갈릴 만한 부분은 괄호를 통해 확실하게 하는 것이 좋습니다.