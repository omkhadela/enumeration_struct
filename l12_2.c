#include<stdio.h>

struct emp{
	char name[10],role[10],city[10],c_name[10];
	int id,age,experience;
};
main(){
	struct emp e;
	int n,i;
	printf("How many Employee's data did you want to insert :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the name of emp : ");
		scanf("%s",&e.name);
		
		printf("Enter the role : ");
		scanf("%s",e.role);
		
		printf("Enter the city : ");
		scanf("%s",e.city);
		
		printf("Enter the c_name : ");
		scanf("%s",e.c_name);
		
		printf("Enter the id : ");
		scanf("%d",&e.id);
		
		printf("Enter the age : ");
		scanf("%d",&e.age);
		
		printf("Enter the experience : ");
		scanf("%d",&e.experience);
		
		printf("\n===========================\n");
		
		
		printf("The name of the employee :%s\n",e.name);
		printf("The role of the employee :%s\n",e.role);
		printf("The city of the employee :%s\n",e.city);
		printf("The name of the company :%s\n",e.c_name);
		printf("The id of employee :%d\n",e.id);
		printf("The age of employee :%d\n",e.age);
		printf("The experience of employee :%d",e.experience);
		printf("\n===========================\n");
	}

}
