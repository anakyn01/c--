/*
1949 => 어셈블리어
1957 => Fortran
1959 => cobal
1960 => ALGOL
1970 => 파스칼
1972 => c[구조체]
1983 => c++[객체]
1991 => Python

1995 java(sun microsystem)
1995 javaScript(Netspcape)

2000년 이후
C#, Go, Rust, Kotlin 

2005sus  아두이노 => 사실상 c,c++

void setup(){
 pinMode(13, OUTPUT)
}

void loop() {
digitalWrite(13, HIGH) led켜기
delay(1000) 1초 대기
digitalWrite(13, LOW) led 끄기
delay(1000) 1초 대기
}
*/
#include <stdio.h>

int main(){
//카운트다운
int w;
for (w = 5; w > 0; w--){
    printf("%d\n", w);
}


//2의 배수
        int q;

        for(q = 0; q <= 10; q = q + 2){
        printf("%d\n", q);
        }




    int i;

    for (i=0; i <= 5; i++){
        printf("%d\n", i);        
    }

printf("개념상 최초프로그램 1940년대 에이다 러브레이스 실제프로그래밍 언어 어셈블리어 최초의 고급언어 포트란");   
return 0;
    
}