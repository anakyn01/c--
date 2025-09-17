#include <stdio.h>

int main(){
    int myNumbers[4] = {25,50,75,100};
    int i;

    for(i=0; i < 4; i++){
        printf("%p\n", &myNumbers[i]);
    }
//%z size_t 타입전용 unsigned decimal (부호없는 10진수)
    printf("%zu", sizeof(myNumbers));

    return 0;
}