#include <stdio.h>

int main(){
    int num,even,odd;
    even =0;
    odd =0;
    for(int i=0; i < 10; i++){
        printf("Enter a Number: ");
        scanf("%d",&num);
        if(num%2 == 0) even += 1;
        else odd += 1;
    }
    printf("the number of odd numbers entered is %d\n",odd);
    printf("the number of even numbers entered is %d",even);
    return 0;
}