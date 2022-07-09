#include <stdio.h>
#include<string.h>
int main()
{
int i,j;
char str[9];
memset(str, 'g', 8);
str[8] = '\0';
for (i = 1; i <= 10; i++)
 {
 for (j = 1; j <= i*2; j++)
 {
    printf("%5d",j);

memset(str, 'g', 8);
str[8] = '\0';
  printf ("%c",str);
//  if(i==j)
//  break;
 }
 printf ("\n");
 }
 return 0;
}