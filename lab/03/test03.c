//programmer:Laiba Zia
//date:19th sep 2023
//Question:A Fat Brain pipsquigz is on sale for 20% off the original price. The original price is Rs. 1500. Using scratch calculate and print the sale price.

#include<stdio.h>
int main() { //start of main
     
    float sale_per=20.0, originalPrice=1500.0, calculate=0, salePrice=0; //declaraing and initializing
    calculate=originalPrice*(sale_per/100); //calculating saved price
    salePrice=originalPrice-calculate;      //calculating saleprice
    printf("the sale price is:\t%f",salePrice); //output saleprice
    return 0;
} //end main