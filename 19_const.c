#include <stdio.h>

int main(){
    const int BIRTHYEAR = 1980;
    //대문자를 사용하는것이 권고사항
    const int minutesPerHour= 60;
    //minutesPerHour

    printf("%d", minutesPerHour);
    return 0;
}

/*
C Constants 상수
상수를 사용하는 이유
- 다른 사람 또는 자신이 기존 변수 값을 변경하지 못하게 하려면 
const키워드를 사용합니다
- 변수가 상수가 됩니다 
- 즉 변경 불가능 하고 읽기 전용이 됩니다 
*/