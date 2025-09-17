#include <stdio.h>
//코드를 한줄씩 읽고 실행 => 인터프리터 방식 파이선
//한번에 기꼐어로 변환하여 실행파일 생성 (exe, class) => 컴파일 방식 c,c++, java

int main(){
//다차원 배열
int matrix[2][3] = {{1,4,2},{3,6,8}};
printf("%d\n", matrix[0][2]);
printf("%d\n", matrix[1][1]);

    //배열 크기 또는 길이 가져오기 length, len but sizeof 연산자를 사용합니다
    int Nums[] = {10, 25, 50, 75, 100};
    int length = sizeof(Nums) / sizeof(Nums[0]);
    printf("%d", length);
    //c에 유형은 일반적으로 4바이트 인데 bit(Binary Digit) 컴퓨터에서 가장 작은단위 bit 0, 1
    //8개비트가 모인단위가 Byte일반적으로 1바이트는 1문자를 저장할수 있음    
    //'A' -> 1byte -> 8bits (01000001)
    //인코딩 : 사람이 이해할수 있는 데이터를 컴튜터가 이해할수 잇게
    //기계어를 사람이 이해할수 있게 바꾸는 것이 디코딩
    printf("%zu\n", sizeof(Nums));
    printf("\n");
    //배열의 정의
    int myNumbers[4];//값을 4개 insert하겠다는 의미 //알빠노로 문자열쓰기
    myNumbers[0] = 25;
    myNumbers[1] = 50;
    myNumbers[2] = 75;
    myNumbers[3] = 100;

    int i;
    //반복해서 출력하기 위해 for문을 사용합니다
    for (i=0; i < 4; i++){
printf("%d\n", myNumbers[i]);
    }
    return 0;
}