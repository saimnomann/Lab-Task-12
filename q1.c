#include<Stdio.h>
int Sum(int *ptr);
int main(){
	int arr[5],*ptr;
	ptr=arr;
	for(int i=0;i<5;i++){
		printf("Enter element at %d: ",i+1);
		scanf("%d",ptr+i);
	}
	int res=Sum(arr);
	printf("%d",res);
	
}
int Sum(int *ptr){
	int Sum=0;
	for(int i=0;i<5;i++){
		Sum +=*(ptr+i);
	}
	return Sum;
}
