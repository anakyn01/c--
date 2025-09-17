#include <stdio.h>
#include <stdlib.h>

#define MAX 100 //int MAX = 100;
//스택에 저장할수 있는 최대원소 개수는 100개 입니다

typedef struct {//스택 구조체는 아래에 두멤버를 포함
int data[MAX]; //실제 데이터를 저장하는 정수배열
int top;//스택의 최상단 원소 인덱스를 나타내는 변수
//초기값은 -1로 설정되어 스택이 비어 있음을 의미
} Stack;

//스택초기화
void initStack(Stack *s){
    s -> top = -1;//초기값이 -1로 설정되어 스택이 비어 있음을 의미lambda
}

//스택이 비어 있는지 확인
int isEmpty(Stack *s) {
    return s -> top == -1;
}

//스택이 가득 찾는지 확인 top이 -1 T 100 F
int isFull(Stack * s){
    return s -> top == MAX -1;
}

//아니면 스택에 값 추가 push
void push(Stack *s, int value){
if(isEmpty(s)){
    printf("stack overflow! Cannot pop\n");
    return;
}
s->data[++(s -> top)] = value;
}

/*
배열을 이용한 스택 구현예제 (정수형)
*/