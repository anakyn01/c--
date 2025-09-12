#include <stdio.h>
#include <math.h>

int main(){
const double E = 2.718281828;
/*
자연로그(natural logarithm)는 밑(base)이 e인 로그
로그는 거듭제곱을 뒤집어 말하는것
log2 8 = 3
*/
    printf("%f\n", sqrt(16));
    printf("%f\n", ceil(1.4));//올림
    printf("%f\n", floor(1.4));//내림
    printf("%f\n", pow(4, 3));//4 * 4 * 4
    printf("%f\n", atan(0.5));
    printf("%f\n", exp(2.718));//숫자만큼 거듭제곱
printf("%f\n", log(E));
//반올림 가장 가까운 정수로 따라갑니다
printf("%f\n", round(0.60));
printf("%f\n", round(-5.1)); 



    /*
삼각함수(sin,cos,atan등)는 기본적으로 도(degree)가
아니라 라디안을 사용합니다
 라디안 : 각도를 재는 단위 중에 하나   
atan(x) arc tangent(역탄젠트)함수 입니다
각도 라디안 값을 리턴 
y = arctan(x) => tan(y) = x
atan(0.5) 은 어떤 각도의 탄젠트가 0.5일까를 찾는것
0.5를 라디안 => 0.4636476090 에서 소수점 6자리
    */

//atan() : 라디안 단위의 아크탄젠트(역삼각함수[아크사인,아크코사인,아크탄젠트])를 리턴 -PI/2 ~ PI/2 사이의 각도만 리턴




    return 0;
}