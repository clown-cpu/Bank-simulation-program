#include<stdio.h>
#include<stdlib.h>
char user[10],type;
int blc,number; 

void menu()
{
    printf("*******BANK ACCOUNT SIMULATION*******\n");
    printf("1. Initialize Account\n");
    printf("2. Deposit Amount in account\n");
    printf("3. Withdraw Amount from account\n");
    printf("4. Display Account details\n");
    printf("0. Exit the program.\n");

}
void initializeAccount()
{   
    printf("enter the name of the user\n");
    scanf("%s",user);
    printf("account balance\n");
    scanf("%d",&blc);
    printf("account number of the user\n");
    scanf("%d",&number);
}
int deposit(int amount)
{
    if(amount>0)
    {
        blc = blc + amount;
        printf("you have successully credited %d and your new balance is %d",amount,blc);
        return 1;
    }
    return 0;
}
int withdraw(int amount)
{
    if(blc>amount)
    {
        blc = blc - amount;
        printf("you have successfully debited %d and your  new balance is %d \n",amount,blc);
        return 1;
    }
    printf("you have low balance;can't withdraw \n");
    return 0;
}
void display()
{
    printf("\t\tAccount Details \t\t\t\t \nAccount Holder's Name: %s  \nAccount Number:  %d  \nBalance in Account :  %d \n",user,number,blc );

}
void main()
{
    int ch,exit,amount;
    exit = 0;
    do   
    {
        menu();
        printf("enter you choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            initializeAccount();
            break;
            case 2:
            printf("enter the amount you want to deposit\n");
            scanf("%d",&amount);
            deposit(amount);
            break;
            case 3:
            printf("enter the amount you want to withdraw\n");
            scanf("%d",&amount);
            withdraw(amount);
            break;
            case 4:
            display();
            break;
            case 0:
            exit = 1;
            break;
        }

    }while(exit!=1);

}