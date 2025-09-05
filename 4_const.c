#include <stdio.h>
//상수는 재선언 재할당 금지 참조만 할뿐이다 레퍼런스
int main(){
    const int myNum = 15;
    myNum = 10;
    printf("%d\n", myNum);
    return 0;
}