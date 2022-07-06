#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int i=1, sum, input,y;
int main(){
    srand(time(NULL));
    while ( i < 2)
    {
        printf("%d\n",y = rand() % 50 + 10 );
        // if (y > 50){
        //     break;
        // }
        i ++;
    }
    
    
}

// int sum_num(int u){
//     for (i=0;i<=u;i++){
//         sum = sum + i;
//     }
//     return sum;
// }
// int main (){
//     printf("Enter the number you want to sum : ");
//     scanf("%d",&input);
//     //call function
//     y = sum_num(input);
//     printf("%d",y);
// }
