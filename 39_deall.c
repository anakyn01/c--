#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;//정수를 가르키는 포인터
    ptr = malloc(sizeof(*ptr));
    //sizeof(*ptr) 자료형(int)의 크기를 계산
    //malloc(sizeof(*ptr));  정수하나를 저장할수 있는 만큼 메모리를 할당

    //메모리 할당 실패를 확인하는 부분
    if (ptr == NULL) {
        printf("Unable to allocate memory");
        return 1;//비정상적인 종료
    }

    *ptr = 20;//할당된 메모리 공간에 정수 값 20저장

    printf("Integer value : %d\n",  *ptr);

    free(ptr);

    ptr = NULL;
    //해제된 메모리를 가르키는 포인터는 더 이상 유효하지 않다

    return 0;

}

/*
메모리 할당 해제
Deallocate Memory
- 더 이상 메모리 블록이 필요없을때 메모리 해제
- 메모리가 할당이 해제되면 다른 프로그램에서 사용할수 있고
프로그램의 다른 부분에 할당될수 있습니다
- 이래서 며칠전에 예를 암시
free(pointer)
*/