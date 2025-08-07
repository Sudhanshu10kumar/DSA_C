#include<stdio.h>
#include<string.h>
#define max 10
int st[max];
int top=-1;
int pop(){
	if(top==-1){
		printf("STACK IS EMPTY");
	}	
	else{
		return st[top--];
	}
}
void push(char c){
	if(top==max-1){
		printf("STACK IS OVERFLOW");
	}
	else{
		top=top+1;
		st[top]=c;
	}
}
int main(){
	char exp[max],temp;
	int i,flag=1;
	printf("ENTER AN EXPRESSION:");
	gets(exp);
	for(i=0;i<strlen(exp);i++){
		if(exp[i]=='('||exp[i]=='{'||exp[i]=='['){
			push(exp[i]);
		}
		if(exp[i]==')'||exp[i]=='}'||exp[i]==']'){
			if(top==-1) 
				flag=0;
			else{
				temp=pop();
				if(exp[i]==')'&&(temp=='{'||temp=='['))
					flag=0;
				if(exp[i]=='}'&&(temp=='('||temp=='[')) 
					flag=0;
				if(exp[i]==']'&&(temp=='{'||temp=='(')) 
					flag=0;
			}
		}
	}
	if(top>=0) flag=0;
	if(flag==1){
		printf("\nValid expression");
	}
	else{
		printf("\nInvalid expression");
	}
	return 0;
}

	

