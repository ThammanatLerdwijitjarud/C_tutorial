#include <stdio.h>

int main()
{
    // int i=1;
    // while(i!=5){
    //     printf("%d ", i);
    //     i++;
    // }
    // printf("\n");

    float weight, sum=0.0;
    while(sum<1000){
        printf("Enter your weight: ");
        scanf("%f", &weight);
        sum += weight;
        printf("Overall weight = %.2f\n", sum);

    }
    printf("Weight exceed\n");
}