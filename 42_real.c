#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car{//구조체는 두개의 맴버변수를 가짐
    char brand[50];
    int year;
};

int main(){

    int count = 2;
    struct Car *cars = (struct Car*) malloc (count * sizeof(struct Car));
/*
동적 메모리 할당 및 초기화 
- 자동차 두대를 저장할 메모리를 동적으로 할당
- malloc을 사용하여 struct Car크기의 배열을 2개 만틈 생성
- 실패시에 cars == NULL이되어 오류 메세지를 출력하고 프로그램 종료
*/
if(cars == NULL){
    printf("시스템에 문제가 생겨서 비정상적으로 종료됨 \n");
    return 1;
}

//정해진 두대의 자동차에 값을 넣어줌
strcpy(cars[0].brand, "Toyota"); cars[0].year = 2010;
strcpy(cars[1].brand, "Audi"); cars[1].year = 2019;

//갑자기 예정하지 않은 맴버가 생김 그래서 메모리 재할당
int newCount = 3;
struct Car *tmp = (struct Car*) realloc (cars, newCount * sizeof(struct Car));

if(tmp == NULL){
    free(cars);
    printf("메모리 재할당이 실패함 \n");
    return 1;
}

cars = tmp; //변동사항이 생겨서 기존사용하던 변수에 바뀐 변수와 값이 같다는 걸 선언
strcpy(cars[2].brand, "Kia");
cars[2].year = 2022;

//전체 보유한 차량에 리스트를 봅니다 (조건식)
for (int i = 0; i < newCount; i++) {
    printf("%s - %d\n", cars[i].brand, cars[i].year);
}

free(cars); //메모리 해제 
    return 0;
}



/*
realloc()블록이 새 위치로 이동하고
새 포인터가 반환될수 있다
*/