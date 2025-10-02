#include <stdio.h>

int main(){
    int num,lastdigit,firstdigit;
    printf("Enter a nuber: ");
    scanf("%d",&num);
    lastdigit = num % 10;
    while(num > 10){
        num = num / 10;
    }
    firstdigit = num %10;
    printf("the sum of last and first digit is %d",lastdigit+firstdigit);
    return 0;
}