#include <stdio.h>

enum Level{//열거항목에 값을 쓰지 않으면 인덱싱이 나옴
LOW=3, MEDIUM=5, HIGH=10
};

int main(){
enum Level myVar = MEDIUM;

switch(myVar) {
case 3:printf("로우 레벨");break;
case 5:printf("미드 레벨");break;
case 9:printf("하이 레벨");break;
}

printf("%d", myVar);
return 0;
}
/*
C Enumeration (enum)
상수(변경할수 없는 값)그룹을 나타내는 특수한 유형
열거형을 만들려면 enum키워드를 사용하고 
열거형 항목은 대문자를 쓰는걸 권장합니다 
*/