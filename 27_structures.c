//변수에서 스트링 "" 단일문자 ''

#include <stdio.h>
#include <string.h>

//구조체 생성
struct myP{
    int myNum; 
    char myLastName;
    char myString[30];//char 문자자료형 1바이트 크기 30바이트
    //문자열과의 관계 29글자 + 문자열 종료문자('\0 ') 널문자
};

int main(){
  struct myP s1;
  struct myP s2;

  s1.myNum = 13;
  s1.myLastName = 'H';
  strcpy(s1.myString, "hello world");

  printf(" 나의 숫자는 : %d\n", s1.myNum);
  printf(" 나의 성은 : %c\n", s1.myLastName);
  printf(" 내가 쓴 문자열은 : %s", s1.myString);

  s2.myNum = 26;
  s2.myLastName = 'W';

  printf(" 나의 숫자는 : %d\n", s2.myNum);
  printf(" 나의 성은 : %c\n", s2.myLastName);

  return 0;
}



/*
C Structures => 구조체 여러개의 변수를 한곳으로
그룹화하는 방법입니다
배열과 달리 구조체는 다양한 데이터 유형(int, float, char)
등을 포함할수 있습니다
struct{
struct 키워드를 사용하여 생성하고 각 맴버를 중괄호안에 선언 합니다
}
*/