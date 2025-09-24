#include <stdio.h>

int main() {
//파일을 생성하려면 함수 내부의 w모드를 사용합니다
FILE *fptr;

//fptr = fopen("dongsu.txt", "w");
fptr = fopen("dongsu.txt", "a");

//add
//fprintf(fptr, "동수야 !!!");
fprintf(fptr, "\n동수야 밥 묵었냐? \n 아니 지금 먹으려고");

fclose(fptr);
    return 0;
}