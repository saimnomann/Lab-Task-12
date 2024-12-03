#include<Stdio.h>
#include<stdlib.h>
int main(){
	int *ptr,n,n2,high=-99;
	printf("Enter the number of elements: ");scanf("%d",&n);
	ptr=(int *)calloc(n,sizeof(int));
	for(int i=0;i<n;i++){
		printf("Enter element %d: ",i+1);scanf("%d",ptr+i);
	}

	printf("Enter new size: ");scanf("%d",&n2);
	realloc(ptr,n2*sizeof(int));
	for(int i=n;i<n2;i++){
		printf("Enter element %d: ",i+1);
		scanf("%d",ptr+i);
	}
	for(int i=0;i<n2;i++){
	if(*(ptr+i)>high){
		high=*(ptr+i);
	}
	
}
	printf("%d",high);
free(ptr);
}