#include <stdio.h>
#include <math.h>
float sq;
int num,new_num;
char student1[5],name_fu;

int main(void){
    printf("Enter the number: ");
    scanf("%d",&num);
    new_num = squ(num);
    printf("The number is %d",new_num);
    name_fu = name();
    printf("%c",name());
}
int squ(n){
    sq = pow(n,2);
    return sq;
}
char name(){
    printf("Enter name:");
    scanf("%s",&student1);
    printf("%s",student1);
}
