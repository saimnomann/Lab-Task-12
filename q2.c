#include<stdio.h>
void swaped(int *aPtr, int *bPtr, int *cPtr);
int main(){
	int num1,num2,num3;
	printf("Enter number 1: ");scanf("%d",&num1);
	printf("Enter number 2: ");scanf("%d",&num2);
	printf("Enter number 3: ");scanf("%d",&num3);
	swaped(&num1,&num2,&num3);
	printf("num1: %d\nnum2: %d\nnum3: %d",num1,num2,num3);
}
void swaped(int *aPtr, int *bPtr, int *cPtr){
	int temp;
temp=*bPtr;
*bPtr=*aPtr;
*aPtr=*cPtr;
*cPtr=temp;

}