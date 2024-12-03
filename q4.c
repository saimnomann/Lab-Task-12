#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int i,n,len;
	char *ptr,firstName[20],lastName[20];
	puts("Enter First Name: ");gets(firstName);
	puts("Enter Last Name: ");gets(lastName);
	printf("Enter total number of characters in User Name: ");scanf("%d",&n);
	ptr=(char *)malloc(n*sizeof(char));
	if(ptr==NULL){
		printf("Dynamic Memory Allocation Failed.\n");
	}
	else{
		sprintf(ptr,"%s %s",firstName,lastName);
		printf("%s",ptr);
	}
	free(ptr);

	}
	