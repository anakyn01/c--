#include <stdio.h>

int main() {
//조건을 처음부터 거짓으로 만들경우 한번만 실행됩니다
int q = 10;
do{
printf("q is %d\n", q);
q++;
}while(q < 5);//거짓이므로 i는 한번만 출력됩니다

    //참인경우
    int i = 0;

    do{
        printf("%d \n", i);
        i++;
    }while(i < 5);

    return 0;
}

/*
syntax

do{

}
while (condition)
*/