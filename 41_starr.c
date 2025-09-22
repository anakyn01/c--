#include <stdio.h> //입출력 
#include <stdlib.h> //메모리 관련 (malloc, free)
#include <string.h> //문자열 (strcpy)

struct Car{ //car라는 구조체에 두개의 맴버를 가지고 있다
    char brand[50]; //자동차 브랜드 이름(최대49자 + '\0)
    int year;//출시년도
};

int main(){//
    //malloc을 사용해 Car구조체 3개를 저장할수 있는 메모리를 할당합니다
    struct Car *cars = (struct Car*) malloc(3 * sizeof(struct Car));
    /*
    struct Car 3개를 저장할수 있는 메모리를 런타임에 할당합니다
    (struct Car*) 타입캐스팅 생략가능하지만 가독성을 위해 붙여줍니다   
    */
   //메모리 할당 실패검사
   if(cars == NULL){
    printf("Memory allocation failed. \n");
    return 1;
   }

   //구조체 배열에 값 저장
   strcpy(cars[0].brand, "Ford");
   cars[0].year = 2015;

   strcpy(cars[1].brand, "BMW");
   cars[1].year = 2018;

   strcpy(cars[2].brand, "Volvo");
   cars[2].year = 2023;
   /*strcpy 를 사용하여 구조체의 brand배열에 문자열 복사*/

   //구조체 배열출력
   for (int i =0; i<3; i++){
    printf("%s - %d\n", cars[i].brand, cars[i].year );
   }

   //메모리 할당 해제
   free(cars);

   return 0;

}

/*
malloc() : 구조체에 대한 메모리 할당
strcpy() : 문자열을 어디어디에 복사하는데 사용
free() : 메모리를 해제하기 위해 사용
*/