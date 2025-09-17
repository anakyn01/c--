#include <stdio.h>

struct myStructure{
    int myNum;
    char myLetter;
    char myString[30];
};

/*
복사 구조 copy structures
*/
int main(){
    struct myStructure s1 = {13, 'B', "some text"};
    struct myStructure s2;

    s2 = s1;
    printf("%d %c %s \n", s1.myNum, s1.myLetter, s1.myString);
    printf("=========================================\n ");
    printf("%d %c %s \n", s2.myNum, s2.myLetter, s2.myString);
    return 0;
}