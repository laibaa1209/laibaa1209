//programmer:Laiba Zia
//date:19th sep 2023
//Question: An online shopping store is providing discounts on the items due to the Eid. If the cost of items is more than 1999 it will give a discount upto 50%. If the cost of shopping is 2000 to 4000, a 20% discount will be applied. If the cost of shopping is 4001 to 6000, a 30% discount will be applied. If it's more than 6000 then 50% discount will be applied to the cost of shopping. Print the actual amount, saved amount and the amount after discount.

#include<stdio.h>
void main()  { //start of main function

     double saved_amount=0.0, pay=0.0,  discount=0.0,cost; //declaration of variable
     printf("enter the cost:\t"); //asking user for input
     scanf("%lf",&cost);
     if(cost>1999&&cost<2000){       //start of test condition 1
         discount=0.5;   //body of test condition to be executed if true
     }                  //end of test condition
     else if(cost>6000) {
         discount=0.5;
     }
     else if(cost>=2000&&cost<=4000){
         discount=0.2;
     }
     else if(cost>=4001&&cost<=6000){
         discount=0.3;
     }else {
        discount=0;
    }
    saved_amount=cost * discount;        //calculating saved amount
    pay=cost - saved_amount;            //calculating cost after discount
    printf("actual cost: %lf\n",cost); //output cost
    printf("saved amount: %lf\n",saved_amount);     //output saved amount 
    printf("the price after discount: %lf\n",pay); //output cost after discount
} //end of main
