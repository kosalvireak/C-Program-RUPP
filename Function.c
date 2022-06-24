#include <stdio.h>
#include <math.h>
float sq;
int num,new_num;
int main(void){
    printf("Enter the number: ");
    scanf("%d",&num);
    new_num = squ(num);
    printf("The number is %d",new_num);
}
int squ(n){
    sq = pow(n,2);
    return sq;
}