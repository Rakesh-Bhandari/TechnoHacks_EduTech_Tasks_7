#include<stdio.h>

void check_balance(int balance)
{
	printf("Your current balance is: %dRs\n",balance);	
}

int deposite(int balance)
{
	int deposite_amount;
	printf("Enter deposite amount: ");
	scanf("%d",&deposite_amount);
	if (deposite_amount>0)
	{
		printf("Successfully deposited %dRs\n",deposite_amount);
		balance+=deposite_amount;
	}
	else
	    printf("Invalid deposite amount.\n");
	    
	return balance;
}

int withdraw(int balance)
{
	int withdraw_amount;
	printf("Enter withdrawal amount: ");
	scanf("%d",&withdraw_amount);
	if (withdraw_amount>0 &&withdraw_amount<=balance)
	{
		printf("Successfully withdrawn %dRs\n",withdraw_amount);
		balance-=withdraw_amount;
	}
	else if (withdraw_amount>balance)
	{
		printf("Insufficient balance.\n");
	}
	else
	    printf("Invalid withdrawal amount.\n");
	return balance;
}

int main()
{
	int ch,balance=1000;
	while(true)
	{
		printf("\n\t__ATM Simulator__\n");
		printf("1.Check balance\n2.Deposit\n3.Withdraw\n4.Exit\n");
		printf("Enter Your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				check_balance(balance);
				break;
			case 2:
				balance=deposite(balance);
				break;
			case 3:
				balance=withdraw(balance);
				break;
			case 4:
				printf("\nThankYou...\n");
			default:
				printf("\nInvalid choice...\n");
		}
	}
	return 0;
}
