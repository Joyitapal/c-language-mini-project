#include <stdio.h>

int main()
{
    float x,y;
    char ch;
    printf("** WELCOME TO ATM ** \n");
    printf("Enter initial amount:");
    scanf("%f",&x);
    printf("Enter \n C for credit \n D for debit \n B for balance \n ");
    scanf("\n%c",&ch);
    switch(ch)
    {
    case 'C':
        printf("enter credit amount: \n");
        scanf("%f",&y);
        x=x+y;
        printf("net amount=%f",x);
        break;
    case 'D':
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
    case 'B':
      printf("\n Your balance is= %f ", x);
      break;
    default:
        printf("INVALID");
    }
        printf( "\n*** THANKS FOR COMING!!!! *** \n");

    return 0;
}
