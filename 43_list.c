#include <stdio.h>
#include <stdlib.h>

struct list{

    int *data; //데이터를 저장할 동적 배열 실제 정수들을 저장할 공간
    int numItems; //현재 리스트에 저장된 항목수
    int size; //현재 할당된 배열의 크기
};

void addToList(struct list * myList, int item);
//struct list * myList : 리스트 구조체에 대한 동적 포인터
//int item : 리스트에 추가 하고자 하는 정수값
int main(){
    struct list myList;
    int amount;
    int i, j;

    //초기화
    myList.numItems = 0;//항목수 0
    myList.size = 10;
    myList.data = malloc(myList.size * sizeof(int));

    amount = 44;
    for (i=0; i < amount; i++){
        addToList(&myList, i + 1);
        //1 ~ 44까지 총44개 숫자를 리스트에 추가
    }

    //리스트 출력
    for (j=0; j < myList.numItems; j++) {
        printf("%d ", myList.data[j]);
    }

    free(myList.data);
    myList.data = NULL;
    return 0;
}


void addToList(struct list * myList, int item) {
    //1. 리스트가 가득 찼는지 확인
    if(myList -> numItems == myList -> size){
        int newSize = myList -> size + 10;
        //기존보다 10개 더많은 크기로 재할당
        int *tmp = realloc(myList->data, newSize * sizeof(int));
        if(tmp == NULL){
            printf("메모리 사이즈 재조정 실패");
            return;
        }
        //Why 직접 myList -> data = realloc(..) 하면 실패시 기존 메모리 주소를 잃어버림
        //그래서 임시 포인터 tmp를 사용해 안전하게 검사
//재할당 성공시 구조체 업데이트(구조체 내부 포인터와 size값을 새로 업데이트)
myList -> data = tmp;
myList -> size = newSize;

    }
    //리스트의 현재 항목수가 용량과 같다면 -> 공간부족
    //이때는 realloc()을 통해 메모리를 확장함

    //항목 추가
    myList -> data[myList -> numItems] = item;
    //현재 인덱스 위치에 새값을 저장
    myList -> numItems++;

    //1) 메모리 확인 2)확장처리 3)안전처리 4)항목추가
}