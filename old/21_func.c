#include <stdio.h>
int calculateSum(int x, int y){
    return x + y;
}
int main(){
int result1 = calculateSum(5,3);
int result2 = calculateSum(6,3);
int result3 = calculateSum(15,3);
printf(" 결과1에 값은 : %d\n", result1);
printf(" 결과2에 값은 : %d\n", result2);
printf(" 결과3에 값은 : %d\n", result3);
    return 0;
}