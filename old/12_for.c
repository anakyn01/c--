#include <stdio.h>

int main(){


    printf("---------------------------");

    int i, j;

    for (i =1; i <= 2; ++i){
        //전위 연산자(prefix operator) 값을 출력하기 전에 증감 => 무조건 증가된 값이 들어갑니다
        //후의 연산자(postfix operator) 현재 값을 식에 사용하고  그후에 증감 연산 수행
        printf("바깥: %d\n", i);

        for (j = 1; j <= 3; ++j){
            printf(" 안쪽: %d\n", j);
        }
    }

        int q, w;

    for(q = 1; q <= 3; q++) {
        for(w = 1; w <= 3; w++){
            printf("%d ", q * w);
        }
        printf("\n");
    }

    return 0;
}
