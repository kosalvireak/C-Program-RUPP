#include<stdio.h>
#include<math.h>

char choise;
int a,b,m;
int main()
{
    
    printf("\nThis is the avalible table for exchange:\n");
    back_goto :
    printf("\n------------------------------------------\n");
    printf("1. KH riels to USD\n");
    printf("2. USD to KH riels\n");
    printf("3. Thai baht to KH riels\n");
    printf("4. KH riels to Thai baht\n");
    printf("------------------------------------------\n");
    printf("Please choose any number for your choice: ");
    choise = getchar();
    switch (choise)
    {
    case '1':
        printf("Please Enter the amount: ");
        scanf("%d",&a);
        printf("%d riels= %d USD\n",a,b=a/4000);
        
        break;
    case '2':
        printf("Please Enter the amount: ");
        scanf("%d",&a);
        printf("%d USD= %d riels\n",a,b=4000*a);
        break;
    case '3':
        printf("Please Enter the amount: ");
        scanf("%d",&a);
        printf("%d baht= %d riels\n",a,b=a*100);
        break;
    case '4':
        printf("Please Enter the amount: ");
        scanf("%d",&a);
        printf("%d riels= %d baht\n",a,b=a/1000);
        break;
    
    
    default:
        goto back_goto;
    }
}