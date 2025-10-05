#include <stdio.h>

int main(){
    int num,sum;
    sum =0;
    printf("Enter a Number: ");
    scanf("%d",&num);
    while (num != 0){
        sum += (num % 10);
        num = num/10;
    } 
    printf("The sum of individual digits of the number is %d",sum);
    return 0;
}