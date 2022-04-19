#include<stdio.h>
 int ID;
 double GPA;
 float score;
 char sex;
int main(){
    printf("Enter your ID: ");
    scanf("%i ",&ID );

    printf("Enter your GPA: ");
    scanf("%lf ",&GPA );
    
    printf("Enter your score: ");
    scanf("%f ",&score );
    
    printf("Enter your sex: ");
    scanf("%c ",&sex );

    printf("\n ID = %i \n GPA = %lf \n score = %f \n sex = %c",ID,GPA,score,sex);
    return 0;
}