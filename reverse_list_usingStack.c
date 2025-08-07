#include<stdio.h>
int stk[10];
int top=-1;

int pop(){
	return stk[top--];
}

void push(int value){
	stk[++top]=value;
}

int main(){
	int value,n,i,arr[10];
	printf("enter the number of elements in the array:");
	scanf("%d",&n);
	printf("ENTER THE ELEMENT OF ARRAY:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		push(arr[i]);
	}
	for(i=0;i<n;i++){
		value=pop();
		arr[i]=value;
	}
	printf("\nTHE REVERSE OF THE ARRAY IS:");
	for(i=0;i<n;i++){
		printf("%3d",arr[i]);
	}
	return 0;
}
