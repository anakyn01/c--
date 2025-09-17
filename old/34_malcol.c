#include <stdio.h>
#include <stdlib.h>//동적메모리 할당

int main(){
    int *students;
    //정수형 포인터 변수선언 학생수만큼의 정수 배열을 동적 할당
    int numStudents = 12; //학생수를 12명으로 지정
    
    //동적메모리 할당함수
    students = calloc(numStudents, sizeof(*students));
    
    //총48바이트 확보
    printf("%d", numStudents * sizeof(*students));

    //동적메모리 할당은 프로그램종료시 오류와 여유메모리를 확인해야 됩니다
    
    return 0;//프로그램정상종료
}
//표준 유틸리티 함수들을 선언해 둔 헤더
/*
메모리관리 malloc, calloc, realloc, free
프로그램종료 exit, abort
문자열 숫자변환 atoi, atof, atol, strtol, strtod
난수생성 rand, srand
정렬탐색 qsort, bsearch
*/

/*
malloc(size); 
calloc(amount[할당할 항목의 양을 지정], size)
적합한 양의 메모리를 할당하는 가장 좋은 방법은
sizeof 연산자를 사용하는것 입니다
*/