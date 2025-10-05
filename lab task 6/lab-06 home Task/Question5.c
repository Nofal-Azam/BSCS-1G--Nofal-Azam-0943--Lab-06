#include <stdio.h>

int main(){
    int num,sum;
    sum = 0;
    printf("Enter a Number: ");
    scanf("%d",&num);
    if(num > 0){
        for(int i=1; i <= num;i++ ){
            if (num % i == 0){
                sum += i;
            }
        }
        if(num == sum) printf("THE NUMBER YOU ENTERED IS A PERFECT NUMBER");
        else printf("THE NUMBER YOU ENTERED IS NOT A PERFECT NUMBER");
    }
    else printf("THE NUMBER YOU ENTERED IS NOT A PERFECT NUMBER BECAUSE IT IS NOT POSITIVE");
    
    return 0;
}