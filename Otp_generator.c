#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    /*Declare variable i and otp of type int*/
    int i,otp;
    /*Use srand function to get diffrent current time*/
    srand(time(NULL));
    int digits = 4;
    /*Initialize loop*/
    for(i=0;i< digits;i++) {
    
    /*Use rand() function to get diffrent numbers randomly*/
        otp = rand() % 10;
        printf("%d",otp);
    }
    return 0;
}