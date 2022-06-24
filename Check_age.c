#include<stdio.h>
#include<math.h>
int my_age;
int your_age, dis_age;

int main(){
  
    printf("Input my age:");
    scanf("%d/n",&my_age);
    printf("Input your age:");
    scanf("%d",&your_age);
    if (my_age > your_age){
        dis_age = my_age -your_age;
        printf("I am %d, you are %d, so I am older then you %d year",my_age,your_age,dis_age);
        }
    else{
        dis_age = your_age - my_age;
        printf("I am younger then you %d years",dis_age);
    }
    return 0;
}

