#include<stdio.h>
int sum = 0, num =2 ,N;
int sam(int N){
while (num<=N)
    {
        
        sum = sum + num;
        num =num * 2;
    }
return sum;
}
int main(){
    scanf("%d",&N);
    sum = sam(N);
    printf("Total: %d\n",sum);
}
