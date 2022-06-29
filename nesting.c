// #include<stdio.h>
// int main(){
//     int row, cow;
//     for (row=1;row<=3;row++)
//     {
//         for(cow=1;cow<=row;cow++)
//         {
//             printf("%d\t",cow);
//         }
//         printf("\n");
//     }
// }
// #include<stdio.h>
// int main(){
//     int row, cow;
//     for (row=1;row<=8;row++)
//     {
//         for(cow=1;cow<=row;cow++)
//         {
//             printf("%d\t",row); //change cow to row : each row must have the same number
//         }
//         printf("\n");
//     } 
// }
#include<stdio.h>
int main(){
    int row, cow;
    int input;
    printf("Enter the number: ");
    scanf("%d",&input);
    for (row=1;row<=input;row++)
    {
        for(cow=1;cow<=input;cow++)
        {
            
            printf("%d\t",row*cow); 
            
        }
        printf("\n\n\n");
    }
}
