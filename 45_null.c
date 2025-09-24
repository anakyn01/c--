#include <stdio.h>

int main() {
    FILE *fptr = fopen("nothing.txt", "r");
    //fptr 파일이 정상적으로 열리면 해당 파일을 가르키는 포인터가 되고 null포인터가 됩니다
//
char myString[200];
fgets(myString, 200, fptr);
printf("%s", myString);
    if(fptr == NULL){
        printf("파일이 존재하지 않습니다");
        return 1;//비정상 프로그램 종료
    }

    fclose(fptr);

    return 0;

}

/*
NULL은 null포인터를 나타내는 특수한 값으로 
아무것도 가르키지 않는 포인터 입니다
비어 있거나 유효하지 않은 포인터 사용을 방지하는데 도움이 됩니다
아래에 예제에서는 존재하지 않는 파일을 열려고 함
실패한 경우 null포인터를 반환합니다

*/