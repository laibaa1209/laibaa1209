//programmer:Laiba Zia
//date:19th sep 2023
//Question:A bus leaves the university to take students on a field trip. The bus travels 10 kilometers south, 10 kilometers west, another 5 kilometers south and 15 kilometers north with the fuel consumption of 2 liters/km. Using scratch calculate how many kilometers it has covered and how much fuel it has consumed on a field trip?

#include<stdio.h>
int main() { //start of main function

    //varaibles declaration and initilization
    int d1=10, d2=10, d3=5, d4=15, totalDistance=0, consumedFuel=0, fuelPERdistance=2;
    
    totalDistance=10+10+5+15; //calculating total distance bus has covered
    
    printf("the total distance that bus has covered is: %d\n",totalDistance);  //output total distance
    
    consumedFuel=fuelPERdistance*totalDistance; //calculating consumed fuel by bus in the trip
    
    printf("the consumed fuel is: %d",consumedFuel);  //output consumed fuel
    
    return 0;
} //end of main function