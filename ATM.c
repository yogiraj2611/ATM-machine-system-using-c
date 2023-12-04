#include <stdio.h>
 
unsigned long amount=1000, deposit, withdraw;
int choice, pin=1520,newpin=1520,i=0,j=0, k;
char transaction ='y';
 
void main()
{
	do
	{
		system("cls");
		printf("******** WELCOME TO ATM SERVICE **************\n");
		printf("1. CHECK BALANCE\n");
		printf("2. WITHDRAW CASH\n");
		printf("3. DEPOSIT CASH\n");
        printf("4. CHANGE YOUR PIN\n");
		printf("5. QUIT\n");
		printf("***********************************************\n\n");
		printf("ENTER YOUR CHOICE : ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
		    while(j!=pin)
				{
				   printf(" ENTER YOUR PIN TO CONFIRM : ");
				   scanf("%d",&j);
				   if(j==pin)
				   {
				     printf("\n YOUR CURRENT BALANCE IS : %lu", amount);
					 j=0;
					 break;
				   }
				   else
				   {
					 printf(" YOUR PIN IS INCORRECT PLEASE TRY AGAIN\n");
				   }
				}
			break;
		case 2:
			printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
			scanf("%lu", &withdraw);
			if (withdraw % 100 != 0)
			{
				printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
			}
			else if (withdraw > amount)
			{
				printf("\n INSUFFICENT BALANCE");
			}
			else
			{
				while(j!=pin)
				{
				   printf(" ENTER YOUR PIN TO CONFIRM YOUR TRACSACTION : ");
				   scanf("%d",&j);
				   if(j==pin)
				   {
				     amount = amount - withdraw;
				     printf("\n\n PLEASE COLLECT CASH");
				     printf("\n YOUR CURRENT BALANCE IS : %lu", amount);
					 j=0;
					 break;
				   }
				   else
				   {
					 printf(" YOUR PIN IS INCORRECT PLEASE TRY AGAIN\n");
				   }
				}
			}
			break;
		case 3:
			printf("\n ENTER THE AMOUNT TO DEPOSIT : ");
			scanf("%lu", &deposit);
            amount = amount + deposit;
			printf(" YOUR BALANCE IS : %lu", amount);
			break;
		case 4:
			 while(i!=pin)
            {
                printf(" ENTER YOUR OLD PIN : ");
                scanf("%d",&i);
                if(i!=pin)
                {
                    printf(" YOUR PIN IS INCORRECT PLEASE TRY AGAIN\n");
                }
				else
				{
				printf(" ENTER YOUR NEW PIN : ");
                scanf("%d",&newpin);
				pin=newpin;
				break;
				}
			}
            printf("\n YOUR PIN IS CHANGED SUCCESSFULLY \n");
			break;
         case 5:
             printf("\n THANK YOU FOR USING ATM");
			 break;  
		 default:
			printf("\n INVALID CHOICE");
		}
		printf("\n\n\n DO YOU WISH TO HAVE ANOTHER TRANSCATION?(y/n): ");
		fflush(stdin);
		scanf("%c", &transaction);
		if (transaction == 'n'|| transaction == 'N')
            k = 1;
	} while (!k);
	printf("\n\n THANKS FOR USING OUR ATM SERVICE\n\n");
	printf(" TO PREVENT YOURSELF FROM ANY KIND OF SCAM AND FRAUDS KEEP THE FOLLOWING POINTS IN MIND \n\n");
	printf(" 1. DO NOT SHARE YOUR CARD DETAILS,OTP OR CVV TO ANYONE\n");
	printf(" 2. DO NOT CLICK ANY LINK FROM ANY UNKNOWN NUMBER\n");
	printf(" 3. BANK DO NOT CALLS YOU AND ASK FOR YOUR ACCOUNT DETAILS AND PERSONAL INFORMATIONS");
}
