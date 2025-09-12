/*
구조체 포인터를 사용하는 이유
- 대량의 데이터의 복사하는것을 피할때 => 전체복사가 아닌 포인터만 전달
- 함수내에서 값을 변경하고 싶을때 => 구조체 포인터를 전달하면 함수가 
원래값을 변경할수 있습니다
- 메모리 할당을 사용하여 동적으로 구조체를 생성하려고 할때
(malloc()를 사용하면 프로그램 실행중에도 구조체를 생성합니다)
*/

#include <stdio.h>
//구조체 정의
struct Car{char brand[50]; int year;};
int main(){
    struct Car car = {"Toyoda", 2020};
    struct Car *ptr = &car;
    printf("Brand: %s\n", ptr -> brand);
    printf("Year: %d\n", ptr -> year);
    return 0;
}
/*
Structs and pointers
- 구조체와 포인터를 함께 사용하면 코드의 효율성을 높일수 있습니다
- 특히 구조체를 함수에 전달하거나 구조체의 값을 변경 할때 유용합니다
*/