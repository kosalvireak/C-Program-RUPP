#include<stdio.h>
int main(){
    float price;
    printf("Enter the price:");
    scanf("%f",&price);
    if(price<200){
        printf("No discount");
    }
    if(price>200){
        if(price>200 && price<=399){
            printf("You got 2%% discount.\nyour remain balance is:%.2f",price = price - (price*0.02));
        }
        if(price>400 && price<=799){
            printf("You got 5%% discount.\nyour remain balance is:%.2f",price = price - (price*0.05));
        }   
        if(price>800 && price<=999){
            printf("You got 10%% discount.\nyour remain balance is:%.2f",price = price - (price*0.1));
        }
        if(price>1000){
            printf("You got 15%% discount.\nyour remain balance is:%.2f",price = price - (price*0.15));
        }
    }
}