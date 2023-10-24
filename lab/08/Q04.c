#include<stdio.h>
#include<string.h>

int main(){
	
	char password[100];
	
	printf("Enter the password: ");
	scanf("%s",password);
	int check;
	if(strlen(password)>=8)
	{
	 check=(strcmp("secure123", password));
	  if(check==0)
	 {
	 	printf("login successfull, WELCOME!\n");
		 }	
	}
	else{
		printf("login failed, incorrect password");
	}
	
	return 0;
}
