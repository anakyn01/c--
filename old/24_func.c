#include <stdio.h>

float toCelsius(float fahrenheit){
    return(5.0 / 9.0) * (fahrenheit - 32.0);
}
/*프로그램의 시작점(entry point) 프로그램이 끝날때..
main이 반환하는 값을 확인
0 -> 정상종료 (success) 0이외의 값은 비정상 종료 
그래서 int형 반환값은 운영체제에에 정상종료했는지 문제가 있는지
*/
int main(){

    float f_value = 98.8;//화씨 값 설정
    //화씨값으로 함수를 호출
    float result = toCelsius(f_value);
    //화씨 값을 출력
    printf("화씨: %.2f\n", f_value);
    //결과를 출력
    printf("화씨를 섭씨로 변환: %.2f\n", result);
    return 0;//exit(0)
}
/*
화씨 온도를 섭씨 온도로
*/