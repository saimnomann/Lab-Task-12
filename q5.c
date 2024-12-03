#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int i,n,len;
	char *ptr,firstName[20],lastName[20],std_id[20],N;
	puts("Enter First Name: ");gets(firstName);
	puts("Enter Last Name: ");gets(lastName);
	printf("Enter total number of characters in User Name: ");scanf("%d",&n);
	ptr=(char *)malloc(n*sizeof(char));
	if(ptr==NULL){
		printf("Dynamic Memory Allocation Failed.\n");
	}
	else{
		sprintf(ptr,"%s %s",firstName,lastName);
//		printf("%s",ptr);
	}
printf("Enter new size of array ");
scanf("%d",&N);
printf("Enter student Id ");
scanf("%s",std_id);
ptr=realloc(ptr,(N*sizeof(char)));
strcat(std_id," ");
strcat(std_id,ptr);
strcpy(ptr,std_id);
printf("Dynamic Array: %s",ptr);
free(ptr);
}
	