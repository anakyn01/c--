#include <stdio.h>
//입출력 아웃풋을 사용하는 라이브러리

//메인함수
int main(){

    int time = 20;//현재 8시라고 설정
if (time < 18) {
    printf("Good day");
}else if(time < 6){
    printf("Nop");
}else{
    printf("good evening");
}
//새로운 변수 삼항연산자 Ternary Operator (react[페이스북], vue[구글],java,php,nodejs)
int time = 21;
//조건 ? 참 : 거짓
(time < 18 ) ? printf("Good day") : printf("Good evening");
    return 0;//종료
}

/*
if(condition 1) {
}else if(condition 2){
}else{
}
이조건이 세가지 이상사용하면 코드가 지저분해지고 
가독성이 떨어집니다 그래서 사용하는것이 switch

Conditions and if Statements
조건문과 if문
if : 지정한 조건이 참인 경우 실행할 코드블럭을 지정
else : 위에 조건들이 거짓일 경우 default로 실행
else if : 첫번째 조건이 거짓인 경우 두번째로 실행할 조건
*/