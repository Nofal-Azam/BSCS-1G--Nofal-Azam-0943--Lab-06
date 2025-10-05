#include <stdio.h>

int main(){
    int n,f1,f2,count,temp;
    count =1;
    f1 = 0;
    f2 = 1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i = 1; i<= n;i++){
        for(int j=1;j <= f2;j++){
            printf("%d ",count);
            count += 1;
        }
        printf("\n");
        temp =f2;
        f2 = f1+f2;
        f1 = temp;    
    }
    return 0;
}