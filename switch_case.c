#include<stdio.h>
int main(){
    char year;
    printf("Enter the grade: ");
    year = getchar();
    switch (year)
    {
    case 'A':
        printf("Excellent");
        break;
    case 'B':
        printf("Very good");
        break;
    case 'C':
        printf("Good");
        break;
    case 'D':
        printf("Fair");
        break;
    case 'E':
        printf("Poor");
        break;
    default:
        printf("Fail");
        break;
    }
}