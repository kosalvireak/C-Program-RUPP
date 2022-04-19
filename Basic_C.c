#include<stdio.h>
 int ID;
 double GPA;
 float score;
 char sex = 'M';
int main(){
    printf("Enter ID:");
    scanf("%d",&ID);
    printf("My ID is: %d\n",ID);

    printf("Enter GPA:");
    scanf("%lf",&GPA);
    printf("My GPA is: %lf\n",GPA);

    printf("Enter score:");
    scanf("%f",&score);
    printf("My score is: %f\n",score);
    
    //printf("Enter sex:");
    //scanf("%c",&sex);
    printf("My sex is: %c\n",sex);

    return 0;
}