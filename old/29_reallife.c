#include <stdio.h>

struct Car{ //defi
    char brand[50];
    char model[50];
    int year;
};

int main(){
    struct Car car1 = {"BMW","X6", 1999};
    struct Car car2 = {"Ford","Mustang", 1999};
    struct Car car3 = {"Kia","카니발", 1999};

    printf("%s %s %d \n", car1.brand, car1.model, car1.year);
printf("%s %s %d \n", car2.brand, car2.model, car2.year);
printf("%s %s %d \n", car3.brand, car3.model, car3.year);
    return 0;
}