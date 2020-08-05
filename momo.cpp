#include<stdio.h>
#include<conio.h>
int main()
{//clrscr();
float smilk,bmilk,ghee,curd;
char name[24];
float balance=5000;
int rupees;
int type;
int transaction=1;
printf("\n\t\t\t\tURLABARI MILK SUPPLIERS\n\n");
printf("\t\t\4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4\n");
printf("\t\t\4\t\t\t\t\t\t\4\n");
printf("\t\t\4\t\t\t\t\t\t\4\n");
printf("\t\t\4\tWELCOME To our DAIRY.\t\t\4\n");
printf("\t\t\4\t\t\t\t\t\t\4\n");
printf("\t\t\4\t\t\t\t\t\t\4\n");
printf("\t\t\4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4\n");
printf("Enter you name: ");
scanf("%s",&name);
printf("\nENTER YOUR CUSTOMER NUMBER: ");
scanf("%d",&type);
while(transaction == 1)
{
int option;
printf("\nchoose what you want to do\n");
printf("1 -Buy Milk.\n");
printf("2 - Buy Curd.\n");
printf("3 - Buy Ghee.\n");
printf("4 - Sell Milk.\n");
scanf("%d",&option);
switch(option)
{
case 1:
printf("\t\t\t*Buy Milk.*\n\n");
printf("How Much liter would you like to buy?\n=");
scanf("%f",&bmilk);
rupees=bmilk*70;
printf("\t\t\tDate:3/5/16\t   Time:10:20 Am\n");
printf("\t\t\t\tIt costs you Rs.%d\n",rupees);
break;
case 2:
printf("\n\t\t\t*Buy Curd.*\n\n");
printf("How much liter would you like to buy?:");
scanf("%f",&curd);/*
if(dep > 0 && dep<=20000)
{
printf("\nyour %.2fRs deposited in your account.\n\n",dep);
balance+=dep;
}
else if(dep>20000)
{
printf("\nyou can't deposit that much ammount in one time.\n\n");
}
else
{
printf("\ninvalid deposit amount\n");
}*/
break;
case 3:
printf("\n\t\t*Buy Ghee.*\n\n");
printf("How Much kilogram would you like to buy?:");
scanf("%f",&ghee);
/*if(draw<=balance && draw<=20000)
{
printf("\nyou just withdraw %.2fRs\n\n",draw);
balance-=draw;
}
else if(draw>20000)
{
printf("\nyou can't withdraw that much amount in one time.\n\n");
}
else
{
printf("\nyou dont have enough money\n\n");
}*/
break;
case 4:
printf("\t\t\tSell Milk.\n\n");
printf("\n\t\tHow much liter would you like to sell?: ");
scanf("%f",&smilk);
printf("\nhow much ammount?: ");
default:
printf("invalid transaction\n");
}
transaction=0;
while(transaction!=1 && transaction!=2)
{
printf("do you want to do another transaction?\n");
printf("1. yes 2. no\n");
scanf("%d",&transaction);
if(transaction!=1 && transaction!=2)
{printf("invalid no.\nchoose between 1 and 2 only\n");}}}
//scanf("%f",&transfer);/*
/*if(balance>=transfer)
{
printf("\nyour %.2fRs successfully transfered\n\n",transfer);
balance-=transfer;
}
else
{printf("\nyou do not have sufficient balance\n\n");}
break;
*/
//clrscr();
/*
printf("\n\t\t\t    -----------------------");
printf("\n\t\t\t\tURLABARI MILK SUPPLIERS.\n");
printf("\t\t\t    -----------------------\n\n");
printf("\t\t\tDate:3/5/16\t   Time:10:20 Am\n");
printf("\n\t\t\t\4 Your name: %s\n\n",name);
printf("\t\t\t\4 Your account no: %d\n\n",type);
if(dep >= 0 && dep < 20000)
{
printf("\t\t\t\4 You've deposited %.2fRs\n",dep);
}
else
{printf("\t\t\t\4 You've deposited 0Rs\n");}
if(draw>0 && draw<=20000 && draw<=balance)
{
printf("\t\t\t\4 You've withdraw %.2fRs\n",draw);
}
else
{printf("\t\t\t\4 You've withdraw 0Rs\n");}
if(transfer>0 && transfer<=20000 && transfer<=balance)
{
printf("\t\t\t\4 You've Transfered %.2fRs\n",transfer);}
else
{printf("\n ");}
printf("\n\t\t\t\t    Thank you! \n");
printf("\t\t\t   Welcome to Urlabri Dairy.\n");
printf("\t\t\t      www.urlabarimilksuppliers.com\n");*/

getch();
return(0);
}
