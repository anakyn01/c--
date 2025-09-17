#include <stdio.h>

int global = 5;//전역변수 어디에서나 사용가능

void iam() {
    int m = 1000;
    printf("%d", m);
    printf("함수안에 쓰는걸 지역변수라고 하므니다");
    printf("%d\n", global);
}

int main(){
    iam();
    printf("%d\n", global); //자바는(global)
    return 0;
}
/*
Variable Scope 변수 범위
- 변수는 변수가 생성된 영역 내에서만 접근할수 있습니다
- 이를 유효범위 scope라고 합니다
- 함수 내부에서 생성된 변수는 함수 내부에서만 사용할수 있습니다
*/