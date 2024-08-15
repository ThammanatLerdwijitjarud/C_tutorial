#include <stdio.h>

int main(){
    int money,price,change;
    printf("Enter your money = ");
    scanf("%d", &money);
    printf("Price = ");
    scanf("%d", &price);
    change = money-price;

    printf("Change = %d\n", change);

    if(change>100){
        printf("hundred = %d\n", change/100);
        change = change%100;
        // printf("current change = %d\n", change);
    }
    if(change>50){
        printf("fifty = %d\n", change/50);
        change = change%50;
        // printf("current change = %d\n", change);
    }
    if(change>20){
        printf("fifty = %d\n", change/20);
        change = change%20;
    }
    if(change<20 && change>0){
        printf("coins = %d\n", change);
    }


}