#include<stdio.h>
#include<errno.h>
#include<string.h>

int main(){
    FILE *f = fopen("no.txt","r");
    if(f == NULL){//영문이어서 내스타일로 바꿈
        if(errno == ENOENT){
printf("원래 잘나오는데 안나오네 약오르지!\n");
        }else{
printf("뭔가 문제는 있는데 뭔지 모름");
        }
        exit(1);//비정상 종료
    }
    fclose(f);
    return 0;
}
/*
perror() 오류에 대한 메세지 인쇄
strerror(errno) 오류메세지를 문자열로 가져옴
errno 마지막 실패한 작업의 오류코드 저장
ENOENT 파일을 찾을수 없음
ENOMEM 메모리 부족
*/
/*
일반적인 종료 상태코드
0 정상종료
1 비정상종료(오류문제가발생)
EXIT_SUCCESS 0
EXIT_FAILURE 1
*/

/*
유닉스 1969 ~ 1971 어셈블리어
72년에 c언어로 다시작성

비슷하게 만든것이 리눅스

유닉스와 리눅스[설치] 커널은 c로 만들었음

c에 일반적인 오류 코드 오류 상수
<errno.h> errno오류 상수를 비교하여 특정문제를 감지 할수 있습니다

1) ENOENT  No such file or directory 해당파일이나 디렉토리가 없습니다

2) EACCES 허가가 거부됨[파일이나 디렉토리에 접근 권한이 없을때] 
"Permission denied"

3) ENOMERM "Out of memory" 메모리가 부족합니다
4) EEINVAL "Invalid argument" 잘못된 인수
*/