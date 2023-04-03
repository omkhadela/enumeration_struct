#include<stdio.h>

struct stud{
	char name[10],cou[10],city[10],scl[10];
	int id,age,std;
};
main(){
	struct stud s;
	int n,i;
	printf("How many Student's data did you want to insert :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the name of student : ");
		scanf("%s",&s.name);
		
		printf("Enter the course : ");
		scanf("%s",s.cou);
		
		printf("Enter the city : ");
		scanf("%s",s.city);
		
		printf("Enter the school : ");
		scanf("%s",s.scl);
		
		printf("Enter the id : ");
		scanf("%d",&s.id);
		
		printf("Enter the age : ");
		scanf("%d",&s.age);
		
		printf("Enter the standard : ");
		scanf("%d",&s.std);
		
		printf("\n========================\n");
		
		printf("The name of the student :%s\n",s.name);
		printf("The course of the student :%s\n",s.cou);
		printf("The city of the student :%s\n",s.city);
		printf("The school of the student :%s\n",s.cou);
		printf("The id of student :%d\n",s.id);
		printf("The age of student :%d\n",s.age);
		printf("The standard of student :%d",s.std);
		printf("\n====================================\n");
	}
	
}
