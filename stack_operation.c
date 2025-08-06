#include<stdio.h>
#include<stdlib.h>
#define max 5
int st[max],top=-1;

void push(int st[],int value){
	if(top==max-1){
		printf("\n STACK OVERFLAW");
	}
	else{
		top++;
		st[top]=value;
	}
}

int pop(int st[]){
	int value;
	if(top==-1){
		printf("\n stack underflow:");
		return -1;
	}
	else{
		value=st[top];
		top--;
		return value;
	}
}
int peek(int st[]){
	if(top==-1){
		printf("\n stack is empty");
		return -1;
	}
	else{
		return (st[top]);
	}
}
void display(int st[]){
	int i;
	if(top==-1){
		printf("stack is empty");
	}
	else{
		for(i=top;i>0;i--){
			printf("%3d",st[i]);
		}
	}	
}
int main(){
	int value,option;
	do{
		printf("\n*****MANUE*****");
		printf("\n1)PUSH");
		printf("\n2)pop");
		printf("\n3)peek");
		printf("\n4)display");
		printf("\n5)exit");
		printf("\nenter your choice:");
		scanf("%d",&option);
		switch(option){
			case 1:
				printf("\nenter the number to be pushed on stack: ");
				scanf("%d",&value);
				push(st,value);
				break;
			case 2:
				value=pop(st);
				if(value!=-1)
				printf("the value deleated from stack is : %d",value);
				break;
			case 3:
				value=peek(st);
				if(value != -1)
				printf("\nthe value stored at the top of the stack is %d :",value);
				break;
			case 4:
				display(st);
				break;
				
		}
		
	}while(option!=5);
	return 0;
}
