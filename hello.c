#include <stdio.h> // 화면에 데이터를 출력하는데 필요한 모든 도구들을 가지고 있는 파일

// 프로그램을 실행한다는 말의 의미가 CPU 의 명령어 레지스터에 프로그램의 시작 명령어 주소값을 전달한다고 하였는데, 
// 실제로 main 에서 첫 번째로 실행할 명령어의 주소값이 전달
int main() { // int 는 영어의 integer 의 줄임으로 이 함수가 끝날 때 정수값 을 반환
  printf("Hello World! \n");

  return 1; // 이 프로그램을 실행한 프로그램한테 반환
  // 0 을 반환한다는 것은 컴퓨터에게 프로그램이 무사히 종료되었음 을 알리는 것
}   

