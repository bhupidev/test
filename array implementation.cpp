#include<stdio.h>
#include<conio.h>
#define max 5
int a[max], top = -1;
void push();
void pop();
int main(){	
	int ch;
	printf("1.push operation\n");
	printf("2.pop operation\n");
	while(1){	
		printf("\n enter the choice");
		scanf("%d",&ch);
		switch(ch){	
			case 1:
			{	
				push();
				break;
				}		
			case 2:
			{	
				pop();
				break;
				}	
			default:
			{	
			printf("wrong choice");
			
			}
		}
	}
}	
	void push(){	
			int data;
			if(top==max-1){	
				printf("stack overflow\n");
				
			}	
				else
				{	
					printf("enter the push element\n");
					scanf("%d",&data);
					
					a[top]= data;
					top++;
				}
		}	
		void pop(){
			
				if(top==-1){	
					printf("stack underflow\n");
					
				}	
					else
					{	
						printf("popped element\n");
						scanf("%d",a[top]);
						top--;
					}
				}
			
