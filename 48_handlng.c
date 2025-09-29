#include <stdio.h> //perror errno(전역오류코드변수)
#include <stdlib.h>

int main(){
    FILE *f = fopen("none.txt", "r");
    if(f==NULL){
        perror("파일을 열수 없음");
        //인자로 준 문자열이 먼저출력 그다음 시스템 메세지가 붙는다
        exit(EXIT_FAILURE);//비정상적인 종료
    }
    fclose(f);
    return EXIT_SUCCESS;//정상적인 종료
}