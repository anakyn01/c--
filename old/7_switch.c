#include <stdio.h>

int main(){ //코드량이 많을때는 가독성을 위해 스위치를 사용합니다

    //1)변수 설정
    int day =  4;

    //2)스위치 설정
    switch(day) {
case 1: printf("Monday"); break;
case 2: printf("Tuesday"); break;
case 3: printf("Wendesday"); break;
case 10: printf("thursday"); break;
case 5: printf("Friday"); break;
case 6: printf("Saturday"); break;
case 7: printf("Sunday"); break;
default : printf("알빠노");
    }

    return 0;
}

/*
선택지가 3개 이상을 경우 
if else if로 사용하면 코드가 지저분해 집니다
이럴때 스위치를 사용합니다
스위치는 맞는 조건을 실행시키고 중지합니다
break

else처럼 어떤 조건도 맞지 않으면 default라는 키워드를 사용하여
대체 합니다
*/