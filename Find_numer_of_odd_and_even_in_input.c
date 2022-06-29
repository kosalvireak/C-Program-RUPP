#include<stdio.h>

int i=1, odd=0, even=0,n;
void arrays(int(a))
{
    printf("Array of element is:%d\n",a);
}
int main()
{
    printf("Enter the num: ");
    scanf("%d",&n);

    while (i<n+1)
    {
        if (i%2==0)
        {
            even++;
        }
        else
        {
            odd ++;
        }
       
        arrays(i);
        i++;
    }

    
    printf("Number of odd is: %d\nNumber of even is:%d",odd,even);
}