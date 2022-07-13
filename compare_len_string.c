#include <stdio.h>
#include <string.h>
char address1[100];
char address2[100];
void main()
{
    printf("string 1: ");
    scanf("%s", &address1);
    printf("string 2: ");
    scanf("%s", &address2);

    int m = 100, count1 = 1, count2 = 1;

    // my way
    for (int i = 1; i <= m; i++)
    {
        if (address1[i] != '\0')
        {
            count1 = count1 + 1;
        }

        if (address2[i] != '\0')
        {
            count2 = count2 + 1;
        }
    }
    printf("address1 len :%d \n", count1);
    printf("addresse len :%d \n", count2);
    if (count1 > count2)
    {
        printf("address1 longer than address2\n");
    }
    else
    {

        printf("address2 longer than address1\n");
    }
    int lenaddress1, lenaddress2;
    lenaddress1 = strlen(address1);
    lenaddress2 = strlen(address2);
    printf("%d & %d", lenaddress1, lenaddress2);
    // short way
    for (int i = 0; address1[i] != '\0'; i++)
    {
        count1++;
    }
    printf("hehe: %d", count1);
}