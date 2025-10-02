#include <stdio.h>

int main(){
    int n1,n2,operator,i,divisor,answer;
    divisor = 0;
    printf("Enter a number: ");
    scanf("%d",&n1);
    printf("Enter a number: ");
    scanf("%d",&n2);
    printf("you want to divide or multiply the numbers(1.Multiply 2.Divide): ");
    scanf("%d",&operator);
    if(operator ==1){
        for(i=1;i <= n2;i++){
            answer += n1;
        }
        printf("The answer is %d", answer);
    }
    else{
        if(n2 == 0){
            printf("divide by zero error");
        }
        else{
            while(n1 > 0){
                n1 -= n2;
                divisor += 1;
            }
            if (n1 != 0){
                printf("the two numbers cannot be perfectly divided together to give an integer answer.");
            }
            else printf("%d",divisor);
        }


    }
    return 0;
    
}