#include <stdio.h>

    int nums(int x, int y) {
        return x + y;
    }


    int main() {
        int result = sum(10);//숫자형변수 리절트는 = 함수썸에 매개값 10을 대입
        printf("%d\n", result);
        printf("----------------");
        
        int rs = nums(3,4);
        printf("%d\n", rs);
        
        return 0;
    }

int sum(int k) {
    if(k > 0) {//만약 k값이 존재 한다면
return k + sum(k-1);//k에 임의에 수에 예를 9면 9 + (9-1)
    }else{
        return 0;//0에서 종료
    }
}

int sum(int k);


/*
Recursion
- 재귀는 함수 호출 자체를 만드는 기법입니다
- 이기법은 복잡한 문제를 해결하기 쉬운 간단한 문제로 분해
하는 간단한 기법입니다
- 재귀는 이해하기 어려울수 있습니다[그건 당신에 사정] . 그래서 가장 종흔 방법은 
직접 마니 해보시는 거에요.. 
*/