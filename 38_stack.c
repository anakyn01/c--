#include <stdio.h>
#include <stdlib.h>
/*
push : 스택에 값을 넣는다(top 증가)
pop : 스택에 값을 꺼낸다(Top 감소)
peek : Top 값을 확인하되 제거하지 않는다
isEmpty : 스택이 비었는지 확인
isFull : 스택이 가득 찾는지 확인
*/

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
if(isFull(s)){
    printf("stack overflow! Cannot pop\n");
    return;
}
s->data[++(s -> top)] = value;
}

//스택에서 값 꺼내기(pop)
int pop(Stack *s){
    if(isEmpty(s)){//스택이 비어 있으면 underflow메세지 출력
        printf("Stack underflow! Cannot pop\n");
        return -1;//게시판 일 가정할때 글쓰기 성공1, 실패0, -1네트
    }
    return s -> data[(s->top)--];
    //아니면 top위치의 값을 리턴하고 top1을 감소
}

//스택에서 top값보기 Peek
int peek(Stack *s){//
    if(isEmpty(s)){//스택이 비어 있으면 경고 메세지 출력
        printf("Stack is empty\n");
        return -1;
    }
    return s->data[s->top];
    //아니라면 top위치의 값을 리턴(제거하지 않음)
}

int main(){
    Stack s;
    initStack(&s);//스택 초기화

    push(&s, 10); //[10]
    push(&s, 20); //[10,20]
    push(&s, 30); //[10,20,30]

    printf("Top element: %d\n", peek(&s));//30

    printf("top ej : %d\n", pop(&s));//30 [10,20]
    printf("top ej : %d\n", pop(&s));//20 [10]
    printf("top ej : %d\n", pop(&s));//10 []
    printf("top ej : %d\n", pop(&s));//-1

    return 0;
}

/*
배열을 이용한 스택 구현예제 (정수형)
*/