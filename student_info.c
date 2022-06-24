#include<stdio.h>
 int ID;
 double GPA;
 float score;
int main(){
    printf("Enter ID:");
    scanf("%d",&ID);
    printf("My ID is: %d\n",ID);

    printf("Enter GPA:");
    scanf("%lf",&GPA);
    printf("My GPA is: %.1lf\n",GPA);

    printf("Enter score:");
    scanf("%f",&score);
    printf("My score is: %.2f\n",score);
    
    char sex;
    printf("Enter the sex: ");
    scanf("%c",&sex);
    sex = getchar();
    printf("My sex is: %c\n",sex);

    return 0;
}