#include <stdlib.h>
#include <stdio.h>

int worth=0;
int tsv=0, tsp=0;


//you always spend on credit card.


int spent(){
     int sp;
     printf("You spent: ");
     scanf("%d", &sp);
     worth=worth-sp;
     tsp=tsp+sp;
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
    worth= inc+saved+tsv-tsp;
    printf("Your worth: %d\nYou earned:%d\nYou Spent: %d\nYou Saved: %d\n", worth,inc, tsp, tsv);
}

int main()
{
    int income, spendings, savings, n;
    
    printf("Enter your initial income and savings: ");
    scanf("%d %d", &income, &savings);
   
    
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
