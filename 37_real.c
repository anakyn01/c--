#include <stdio.h>//입출력 함수 사용
#include <stdlib.h>//동적메모리

/*
malloc() 메모리 새로할당
realloc() 기존메모리 블록 크기변경
sizeof(*ptr1) int의 크기를 자동으로 계산
ptr1, ptr2 메모리 블록을 가르키는 포인터
%p포멧 포인터 주소 출력
%d포멧 정수(바이트 수)출력
*/

int main() {
    int *ptr1, *ptr2, size; //변수 정의 ptr1(처음 할당한 메모리 블록) ptr2는 다시 할당한 메모리, size는 동적메모리 크기를 저장하는 변수

    //1) 메모리 할당 int형 4개를 저장할수 있는 공간을 할당
    //sizeof(*ptr1)은 sizeof(int)와 동일
    size = 4 * sizeof(*ptr1);
    //16 바이트 메모리를 힙영역에 할당하고 그주소를 ptr1에 저장
    ptr1 = malloc(size);
    printf("%d bytes allocated at address %p \n", size, ptr1);

    //메모리 재할당
    size = 6 * sizeof(*ptr1);
    //에는 재할당된 메모리가 저장됩니다(같은 주소일수도 있고 새로운 주소일수도 있습니다)
    ptr2 = realloc(ptr1, size);

    if (ptr1 == NULL){//일을 두번하지 말고 한번에 끝내려면 안정장치를 해놓음
        fprintf(stderr, "malloc faild\n");
        exit(1);
    }//printf는 고정형으로 모니터로만 출력 스트림을 특정파일로 지정

    printf("%d bytes reallocated at address %p \n", size, ptr2);

    //실무에서는 fprintf 
    /*
    printf는 출력버퍼에 저장되어 있다가 화면에 출력되어 버퍼에 찰때 시간이 있음
    그때문에 그사이에 프로그램이 죽을 경우 버퍼의 내용을 확인하지 못함

    그러나 fprintf(stderr)는 버퍼없이 바로 출력이 됩니다
    */


//2) 16바이트 메모리를 힙영역[동적 메모리 할당이 이루어 지는 메모리 공간] 할당하고 그주소를 ptr1에 저장합니다
//Stack : 데이터를 순서대로 쌓아 올리듯이 저장하고 가장 마지막에 들어간 테이터 가장 먼저나오는 자료구종
//Last In First Out방식의 자료구조
//메모리 구조 : 프로그램 실행시 메모리 영역
/*
스택 (stack) : 함수 호출시 지역변수, 매개변수 저장
힙 (Heap) : malloc/realloc/free로 할당/해제 되는 영역

큐(Queue) : 자료를 순서대로 저장하고 꺼내는 자료구조 
First In First Out 선입선출


[동적메모리 할당이 이루어 지는 런타임중 크기를 결정할수 있는 메모리 공간]
데이터(Data)/BSS영역 : 전역변수, static변수 저장
코드(code/Text) : 프로그램의 명령어(실행코드)
*/



    return 0; //exit(0) exit(1) 당장(문제가 생겨서 비정상적으로 종료됨)
}

/*
Reallocate Memory 메모리 재할당
예약한 메모리의 양이 충분하지 않으면 메모리를 재할당하여 
더크게 만들어 줍니다

realloc() 을 사용하면 할당된 메모리의 크기를 변경할수 있습니다
이함수는 두개의 매개변수를 사용합니다
int *ptr2 = realloc(ptr1, size)

첫번째 매개변수는 크기가 조정되는 메모리를 가리키는 포인터
두번째 매개변수는 할당된 메모리의 새로운 크기를 바이트 단위로 지정

*/