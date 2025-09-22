/*
c는 성능이 좋지 않은 컴퓨터 시대에 프로그래밍으로
메모리가 가장중요..자바나오기전에
거의 모든 프로그래밍 C => C++
95년도에 자바가 나왔을때도..컴퓨터 사양이 안좋음..
자바가 호불호가 갈림..

요즘 개발에 흐름 mvp
java,python,c(c++),nodejs

front 리액트, 넥스트 js
backend + java spring boot
erp, mes를 만듬

1. 자동차 구조체 정의
2. 그구조체에 대한 메모리를 동적 할당
3. 값을 설정
4. 메모리 해제 하고 종료
*/

#include<stdio.h> //입출력함수
#include<stdlib.h> //메모리 할당/해제
#include<string.h> //문자열 처리함수 (strcpy)

struct Car{
    char brand[50]; //최대 49자 + 널 종료문자(\0)
    int year;//자동차의 연식(정수)
};

int main(){

    //구조체의 크기 만큼 메모리를 동적으로 할당합니다
    //그 메모리 주소를 ptr포인터에 저장
    //(struct Car*) malloc이 변환하는 void*를 struct Car*로 명시적 형 변환합니다
    //malloc 은 요청된 size만큼 메모리를 힙영겨에서 할당하고 반환값의 자료형은 void*
    //void*는 타입이 지정되지 않는 포인터..즉 어떤 타입의 포인터로 도 변환(cast)할수 있음
    struct Car *ptr = (struct Car*) malloc(sizeof(struct Car));

    //메모리 할당이 실패할 경우를 대비
    if (ptr == NULL){
        printf("메모리 적재 실패...\n");
        return 1;
    }//오류 메세지 출력하고 프로그램을 종료 합니다

    //ptr이 가르키는 구조체에 값을 설정 brand는 현대 문자열을 복사
    //year는 2025를 저장
    strcpy(ptr -> brand, "hyundai");
    ptr -> year = 2025;

    //구조체에 저장된 값을 저장
    printf("Brand: %s\n", ptr -> brand);
    printf("Brand: %d\n", ptr -> year);

    //malloc으로 할당한 메모리를 해제 합니다 메모리 누수 방지를 위해 꼭 필요
    free(ptr);

    return 0;





}

/*
malloc() : 구조체에 대한 메모리를 할당합니다
초기화 되지 않은 메모리를 할당합니다
값을 할당하기 전까지 내용이 정의되지 않습니다



strcpy() : 문자열을 brand필드에 복사하는데 사용됩니다
여러분은 포인터를 통해 맴버에 접근합니다

free() : 메모리를 해제하기 위해 끝에서 사용


구조체와 다이나믹 메모리
- 미리 필요한 구조체의 수를 알수 없는 경우나
필요한것만 할당해서 메모리를 절약하려는 경우
(자동차 대수가 고정되어 있지 않은 자동차 판매점
프로그램)에 유용합니다
*/