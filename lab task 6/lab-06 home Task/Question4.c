#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i =1; i <= n;i++){
        printf("Multiplication table of %d\n",i);
        for(int j=1;j <= 10;j++){
            printf("%d times %d = %d \n",i,j,i*j);   
        }
    }
    return 0;
}