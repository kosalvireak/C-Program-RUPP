// #include<stdio.h>
//  int ID;
//  double GPA;
//  float score;
//  char sex = 'M';
// int main(){
//     printf("Enter ID:");
//     scanf("%d",&ID);
//     printf("My ID is: %d\n",ID);

//     printf("Enter GPA:");
//     scanf("%lf",&GPA);
//     printf("My GPA is: %lf\n",GPA);

//     printf("Enter score:");
//     scanf("%f",&score);
//     printf("My score is: %f\n",score);
    
//     //printf("Enter sex:");
//     //scanf("%c",&sex);
//     printf("My sex is: %c\n",sex);

//     return 0;
// }
#include<stdio.h>
#include<math.h>
int my_age;
int your_age, dis_age;
double square_root;
char year;

int main(){
  //switchcases
  printf("Choose any math operator(+,-,*,/,^,s for square root:");
  year = getchar();
  switch(year){
    case '+':
      printf("You can do addtion:\n");
      printf("Input your first num:");
      scanf("%d",&my_age);
      printf("Input your second num:");
      scanf("%d",&your_age);
      printf("The result is:%d",dis_age =my_age + your_age);
      break;
    case '-':
      printf("You can do subtraction:\n");
      printf("Input your num:");
      scanf("%d",&my_age);
      printf("Input your second num:");
      scanf("%d",&your_age);
      printf("The result is:%d",dis_age =my_age - your_age);
      break;
    case '*':
      printf("You can do multiplication:\n");
      printf("Input your num:");
      scanf("%d",&my_age);
      printf("Input your second num:");
      scanf("%d",&your_age);
      printf("The result is:%d",dis_age =my_age * your_age);
      break;
    case '/':
      printf("You can do devision:\n");
      printf("Input your num:");
      scanf("%d",&my_age);
      printf("Input your second num:");
      scanf("%d",&your_age);
      printf("The result is:%d",dis_age =my_age / your_age);
      break;
    case '^':
      printf("You can do ស្វ័យគុណ:\n");
      printf("Input your num:");
      scanf("%d",&my_age);
      printf("Input your second num:");
      scanf("%d",&your_age);
      printf("The result is:%d",dis_age =pow(my_age,your_age));
    case 's':
      printf("You can do find square root:\n");
      printf("Input your num:");
      scanf("%lf",&square_root);
      printf("The result is:%lf",sqrt(square_root));
      break;
  }
  //----------------------
  // year = getchar();
  // switch(year){
  //   case 'A':
  //     printf("Excellent");
  //     break;
  //   case 'B':
  //     printf("superb");
  //     break;
  //   default:
  //     printf("NO");
  // }
  
//-----------------------------------------------------------
  
  // printf("Enter your age:");
  // scanf("%d",&my_age);
  // if (my_age % 2 == 1)
  //   {
  //     printf("Yours age is odd");
  //   }
  // else{printf("Your age is even");}

//-----------------------------------------------------------
  
    // printf("Input my age:");
    // scanf("%d/n",&my_age);
    // printf("Input your age:");
    // scanf("%d",&your_age);
    // if (my_age > your_age){
    //     dis_age = my_age -your_age;
    //     printf("I am %d, you are %d, so I am older then you %d year",my_age,your_age,dis_age);
    //     }
    // else{
    //     dis_age = your_age - my_age;
    //     printf("I am younger then you %d year",dis_age);
    // }
    return 0;
}
