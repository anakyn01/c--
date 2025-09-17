#include <stdio.h>

int main(){

    int myMoney = 100;
    int* ptr = &myMoney;

    printf("%d\n", myMoney); //value
    printf("%p\n", &myMoney); //메모리 주소값 확인
    printf("아래는 노력 안한놈 ");
    printf("%p\n", ptr);

    printf(" 포인터는 다른 변수의 메모리 주소를 자신의 값으로 저장하는 변수입니다");
    return 0;
}