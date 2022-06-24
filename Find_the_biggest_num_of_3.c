#include<stdio.h>
int main(){
    int a, b,c,max=0;
    printf("Enter 3 num:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>max){
        max = a;
    }
    if(b>max){
        max = b;
    }
    if(c>max){
        max = c;
    }
    printf("The biggest value is %d",max);

}