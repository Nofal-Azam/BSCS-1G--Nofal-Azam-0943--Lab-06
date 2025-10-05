#include <stdio.h>

int main(){
    int num,reversednum,newnum;
    reversednum = 0;
    printf("Enter a Number: ");
    scanf("%d",&num);
    newnum = num;
    while (newnum != 0){
        reversednum = reversednum *10 + (newnum % 10);
        newnum = newnum/10;
    } 
    if(reversednum==num) printf("The number is a palindrome.");
    else printf("The number is not a palindrome.");
    return 0;
}