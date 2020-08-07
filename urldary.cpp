#include<stdio.h>

// define for changing prices in near future 
// hardcoding in programming is bad practice and makes everything difficult
#define MILK_PRICE_PL 70
#define CURD_PRICE_PL 100
#define GHEE_PRICE_KG 750
#define SELLER_MILK_PRICE 60

// function definition
void top_header();
void bottom_footer();
void buyer(int);
void seller();

int main() {
   
        printf("\n\t\t\t\tURLABARI MILK SUPPLIERS\n\n");
    printf("\t\t\4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4\n");
    printf("\t\t\4\t\t\t\t\t\t\4\n");
    printf("\t\t\4\t\t\t\t\t\t\4\n");
    printf("\t\t\4\tWELCOME To our DAIRY.\t\t\4\n");
    printf("\t\t\4\t\t\t\t\t\t\4\n");
    printf("\t\t\4\t\t\t\t\t\t\4\n");
    printf("\t\t\4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4\n");
     top_header();
    bottom_footer();
}

// making different functions and calling them later makes easier for everyone and keeps code clean
void top_header() {
int options;
    printf("\nchoose what you want to do\n");
    printf("1 -Buy Milk.\n");
    printf("2 - Buy Curd.\n");
    printf("3 - Buy Ghee.\n");
    printf("4 - Sell Milk.\n");
    scanf("%d",&options);
    if(options <=3) {//if(options == 1 || 2 || 3) { ##this needs some debugging check yourself
        buyer(options);
    }
    else {//if(options == 4){
        seller();
    }

}

void bottom_footer() {
		int a=0;
while(a!=1 && a!=2){
			printf("\nwould you like to explore more?\n 1. Yes\t2.No");
	scanf("%d",&a);}
	if (a==1){
		
		top_header();
		bottom_footer();
		
	}
	
	
	else{
	
    printf("\n\t\t\t\t    Thank you! \n");
    printf("\t\t\t   Welcome to Urlabri Dairy.\n");
    printf("\t\t\t      www.urlabarimilksuppliers.com\n");
}}
// your previous program had some minor mistakes which compiler didn't notice take a look into that again
// i cant easily say what the problem was with segmentation fault (core dumped)
// but it was probably due to memory allocation and accessing memory which doesn't exist
// and about storing data in array it works fine now not much change but i found that you tried storing character in int array
// probably that was the error
// feature you can add
// print the bill properly in another function
// store seller details in another file permanently 

void buyer(int opt) {
    char b_name[50];
    float total, b_milk, b_ghee, b_curd;
    if(opt == 1) {
        printf("How much liter milk you want to buy?\n");
        scanf("%f", &b_milk);
        total = b_milk*MILK_PRICE_PL;
        printf("It will cost you %f", total);
    }

    else if(opt == 2) {
        printf("How much liter curd you want to buy?\n");
        scanf("%f", &b_curd);
        total = b_curd*CURD_PRICE_PL;
        printf("It will cost you %f", total);
    }

    else {
        printf("How much kg ghee you want to buy?\n");
        scanf("%f", &b_ghee);
        total = b_ghee*GHEE_PRICE_KG;
        printf("It will cost you %f", total);
    }
}

void seller() {
    int i = 0;
    char sellerName[100],sellerAddr[100];
    int sellerNumb[100];
    float sellerMilk[100], total;

    printf("Enter Your Name:\n");
    scanf("%s", &sellerName[i]);

    printf("Enter Your Address:\n");
    scanf("%s", &sellerAddr[i]);

    printf("Enter Your Phone:\n");
    scanf("%d", &sellerNumb[i]);

    printf("Enter amount of milk in litre you want to sell daily:\n");
    scanf("%f", &sellerMilk[i]);

    printf("Your data has been added to our database.\n");
    total = sellerMilk[i]*SELLER_MILK_PRICE;
    printf("You will be given %f per month at current rate %d for your uninterrupted milk supply.\n", total, SELLER_MILK_PRICE);

    int data = 0;
    printf("Do you want to see your data??\n 1: YES \n 2: NO \n");
    scanf("%d", &data);

    if(data == 1) {
        printf("Your Name is: %s\n",sellerName[i]);
printf("Your Adress:%s\n",sellerAddr[i]);
printf("Contact Number:%d\n",sellerNumb[i]);
printf("Milk Per Day:%f",sellerMilk[i]);
    }


}

