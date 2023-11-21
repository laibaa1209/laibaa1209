#include<stdio.h>

struct employee {
	char name[5];
	int salary;
	int time;
};

int main() {
	
	
	struct employee data1 = {"blah", 5000, 9};
	struct employee data2 = {"bleh", 6000, 10}; 
	struct employee data3 = {"blih", 7000, 11}; 
	struct employee data4 = {"bloh" ,8000, 12}; 
	struct employee data5 = {"blrh", 9000, 13}; 
	struct employee data6 = {"bljh", 3000, 7}; 
	struct employee data7 = {"blkh", 2000, 6}; 
	struct employee data8 = {"bllh", 1500, 5};
	struct employee data9 = {"blsh", 200, 1};
	struct employee data10 = {'blyh', 3000, 7};
	

	if (data1.time==8)
	{
		data1.salary+=50;
	} else if (data1.time==10) {
		data1.salary+=100;
	} else if(data1.time>12) {
		data1.salary+=150;
	}
    
    if (data2.time==8) {
	data2.salary+=50;
	} else if (data2.time==10) {
	data2.salary+=100; 
    } else if(data2.time>12) {
	data2.salary+=150;
	} 
		 
    if (data3.time==8) {
	data3.salary+=50; 
     } else if (data3.time==10) { 
		data1.salary+=100; 
		  } else if(data3.time>12) {
		   data3.salary+=150;
		    }
			
			
			 if (data4.time==8) { data4.salary+=50; 
			 } else if (data4.time==10) {
			  data4.salary+=100; 
			  } else if(data4.time>12) { 
			  data4.salary+=150; 
			  } 
			  
			  if (data5.time==8) {
			   data5.salary+=50; 
			   } else if (data5.time==10) { data5.salary+=100; 
			   } else if(data5.time>12) {
			    data5.salary+=150; 
				} 
				
				if (data6.time==8) { data6.salary+=50; 
				} else if (data6.time==10) {
				 data6.salary+=100;
				  } else if(data6.time>12) { 
				  data6.salary+=150; }
				  
				  
				   if (data7.time==8) { 
				   data7.salary+=50;
				    } else if (data7.time==10) {
					 data7.salary+=100;
					  } else if(data1.time>12) { 
					  data7.salary+=150; 
					  } 
					  
					  if (data8.time==8) {
					   data8.salary+=50;
					    } else if (data8.time==10) { 
						data8.salary+=100;
						 } else if(data8.time>12) { 
						 data8.salary+=150; 
						 }
						  
			if (data9.time==8) {
			 data9.salary+=50; 
			 } else if (data9.time==10) { 
			 data9.salary+=100;
			  } else if(data9.time>12) { 
			  data9.salary+=150;
			   } 
			   
			   
	    if (data10.time==8) { 
		 data10.salary+=50; 
	 } else if (data10.time==10) {
	     data10.salary+=100; 
	 } else if(data10.time>12) {
		 data10.salary+=150;
		 }
	
	
	printf("name= %s, salary= %d\n", data1.name, data1.salary);
	printf("name= %s, salary= %d\n", data2.name, data2.salary); 
	printf("name= %s, salary= %d\n", data3.name, data3.salary); 
	printf("name= %s, salary= %d\n", data4.name, data4.salary);
	printf("name= %s, salary= %d\n", data5.name, data5.salary);
    printf("name= %s, salary= %d\n", data6.name, data6.salary);
	printf("name= %s, salary= %d\n", data7.name, data7.salary);
    printf("name= %s, salary= %d\n", data8.name, data8.salary);
	printf("name= %s, salary= %d\n", data9.name, data9.salary);
	printf("name= %s, salary= %d\n", data10.name, data10.salary);
	
	
	return 0;
	return 0;
}
