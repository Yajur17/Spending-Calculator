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

    if(tsp>tin && tsv>0){
         printf("Warning: You have now spent from your Savings. Slow DOWN ON EXPENSES .\n");
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
    worth= inc+tsv-tsp;
    cash_in_hand= inc-tsp;
    if(cash_in_hand<0 && cash_in_hand<tsv && tsp-tsv>0){
       printf("Your worth: %d\n\nYou earned:%d\nYou Spent: %d\nYou Saved: %d (now remaining %d)\nCash In hand: BROKE \n\n", worth,inc,tsp,tsv,tsv+tin-tsp);
    }
    else{
    printf("Your worth: %d\n\nYou earned:%d\nYou Spent: %d\nYou Saved: %d\nCash In hand:%d\n\n", worth,inc,tsp,tsv,cash_in_hand);
}

float pspnt, psv;

pspnt=(float)tsp/inc*100;
psv=(float)tsv/inc*100;

printf("You spent %.2f%% of your Income and saved %.2f%% of your Income\n\n", pspnt,psv);

}

int main()
{
    int income, spendings, savings, n;
    
    printf("Enter your income and savings: ");
    scanf("%d %d", &income, &savings);

    tin=income;
    tsv=tsv+savings;
    
    while(1){
        
        printf("1. Spendings 2. Savings 3. Balance Sheet  0. Exit\n");
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
