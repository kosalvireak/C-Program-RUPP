#include<stdio.h>
 int ID;
 double GPA;
 float score;
 char sex;
int main(){
    printf("Enter ID:");
    scanf("%d",&ID);
    printf("My ID is: %d",ID);

    printf("Enter GPA:");
    scanf("%lf",&GPA);
    printf("My GPA is: %lf",GPA);

    printf("Enter score:");
    scanf("%f",&score);
    printf("My score is: %f",score);

    printf("Enter you sex:");
    scanf("%c",&sex);
    printf("My sex is: %c ",sex);


    return 0;
}