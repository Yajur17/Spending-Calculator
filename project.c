#include <stdlib.h>
#include <stdio.h>

int worth=0;
int tsv=0, tsp=0, tin=0;


//you always spend on credit card.


int spent(){
     int sp;
     printf("You spent: ");
     scanf("%d", &sp);
     worth=worth-sp;
     tsp=tsp+sp;

    if(tsp>tin){
         printf("Warning: You have spent more than you earned.\n");
    }
     return tsp;
}


int save(){
     int sv;
     printf("You saved: ");
     scanf("%d", &sv);
     worth=worth+sv;
     tsv=tsv+sv;
     return tsv;
}

int balsheet(int inc, int saved){
    int cash_in_hand;
    worth= inc+saved+tsv-tsp;
    cash_in_hand= inc-tsp;
    if(cash_in_hand<0){
       printf("Your worth: %d\n\nYou earned:%d\nYou Spent: %d\nYou Saved: %d\nCash In hand: YOU ARE BROKE\n", worth,inc, tsp, tsv);

    }
    else{
    printf("Your worth: %d\n\nYou earned:%d\nYou Spent: %d\nYou Saved: %d\nCash In hand:%d\n", worth,inc, tsp, tsv,cash_in_hand);
}
}

int main()
{
    int income, spendings, savings, n;
    
    printf("Enter your initial income and savings: ");
    scanf("%d %d", &income, &savings);

    tin=income;
   
    
    while(1){
        
        printf("1. Spendings, 2. Savings, 3. Balance Sheet: \n");
        scanf("%d", &n);
    
    switch(n){
         case(1): spent();
         break;
         
         case(2): save();
         break;
         
         case (3): balsheet(income, savings);
         break;
         
         case(0): exit(1);
         
    }
    }

    return 0;
}
