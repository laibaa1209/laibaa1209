/* Programmer:Laiba Bint-e-Zia
* Date: 05/12/23
* Descrption: Company employee management system using structs
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct{ 
	char Name[50];
	char Role[50];
	int Communication;
	int Teamwork;
	int Creativity;

}data;

typedef struct{ 

	char depart[50];
	data person[5];

}dep;

int main(){


	printf("\nName:Laiba Bint-e-Zia\nRoll Number:23K-0006\n\n");

	dep arr[4];//array for department names

	int x,y;//variables for random functions

	int max=-10000;//for best deoartment testb
	int Sum=0;
	int best;

	//all pools of names and roles
	char roles[][15]={"Director","Executive","Manager","Employee","Trainee"};
	int buffer[20]={-1};
	char Depname[][40]={"HR","Finance","Marketing","Logistics"};
	char names[][20]={"anya","bilal","amna","arwa","arela",
					"aizal","mahd","izhan","irha","hamdan","sherry",
					"brian","yameen","aira","zia","tariq","taha","azwa","salar"};



	//loops for random assignmnets
	for (int i = 0; i < 4; i++)
	{

		strcpy(arr[i].depart,Depname[i]);

		for (int j = 0; j < 5; j++)
		{
			
			do{
				x=rand()%20;

			}while(buffer[x] == -2);

			buffer[x]= -2;

			strcpy(arr[i].person[j].Name,names[x]);
			strcpy(arr[i].person[j].Role,roles[j]);

			y = rand()%100+1;
			arr[i].person[j].Creativity=y;

			y = rand()%100+1;
			arr[i].person[j].Teamwork=y;

			y = rand()%100+1;
			arr[i].person[j].Communication=y;
		}
	}


	//checking best deparment award
	for (int i = 0; i < 4; ++i)
	{
		for(int j = 0; j < 5; ++j)
		{
			Sum = arr[i].person[j].Creativity + arr[i].person[j].Teamwork + arr[i].person[j].Communication;

		}


		printf("Sum for departement %s is %d\n", Depname[i], Sum);
		if(Sum > max){

			max=Sum;

			best=i;
		}
	}

	printf("Best departement is: %s\n", Depname[best] );
	printf("|%*s| %*s| %13s| %11s| %9s|\n", 16, "Employee Name", 16, "Employee Role", "Communication", "Creativity", "Teamwork");
	for (int i = 0; i < 5; ++i)
	{
		printf("|%*s| %*s| %13d| %11d| %9d|\n",16, arr[best].person[i].Name, 16, arr[best].person[i].Role, arr[best].person[i].Communication, arr[best].person[i].Creativity, arr[best].person[i].Teamwork);
	}

    return 0;
}