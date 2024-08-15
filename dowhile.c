#include <stdio.h>

int main(){
    int price, sum=0;
    char chioce;
    do{
        printf("Enter price : ");
        scanf("%d", &price);
        sum+=price;
        printf("sum = %d\n", sum);
        printf("More?? (y/n) : ");
        scanf(" %c", &chioce);
    }while(chioce=='y');

    printf("Summation = %d\n", sum);
}