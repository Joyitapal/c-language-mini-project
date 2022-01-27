#include <stdio.h>

int main()
{
    float x,y;
    char ch;
    printf("enter initial amount:");
    scanf("%f",&x);
    printf("enter \n c for credit \n d for debit \n");
    scanf("\n%c",&ch);
    switch(ch)
    {

    case 'c':
        printf("enter credit amount: \n");
        scanf("%f",&y);
        x=x+y;
        printf("net amount=%f",x);
        break;
    case 'd':
        printf("enter debit amount: \n");
        scanf("%f",&y);
        if(x>=y)
        {
        x=x-y;
        printf("net amount=%f",x);
        }
        else
        {
        printf("insufficient amount=%f",x);
        }
        break; 
    default:
        printf("choose correct option for operation");
    }
    return 0;
}
