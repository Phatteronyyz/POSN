#include <bits/stdc++.h>
using namespace std;
char stk[20000]={0},a[200];
int main(){
    int i,n,top=-1;
    scanf("%d\n",&n);
	for(i=0;i<n;i++){
		gets(a);
		if(isalnum(a[0])!=0)
			printf("%s ",a);
		else if(a[0]=='('){
			top++;
			stk[top]='(';
		}
		else if(a[0]==')'){      
			while(1){
				if(stk[top]=='(')
					break;      
				else{
					printf("%c ",stk[top]);
					top--;
				}
			} 
			top--;      
		}
		else{
			if(a[0]=='^'){
				while(1){
					if(top==-1||stk[top]=='+'||stk[top]=='-'||stk[top]=='*'||stk[top]=='/'||stk[top]=='('){
						top++;
						stk[top]=a[0];
						break;                                                 
					}else{
						printf("%c ",stk[top]);    
						top--;                                  
					}
				}
			}
			if(a[0]=='*'||a[0]=='/'){
				while(1){
					if(top==-1||stk[top]=='+'||stk[top]=='-'||stk[top]=='('){
						top++;
						stk[top]=a[0];
						break;                                                 
					}else{
						printf("%c ",stk[top]);    
						top--;
					}
				}
			}
			if(a[0]=='+'||a[0]=='-'){
				while(1){
					if(top==-1||stk[top]=='('){
						top++;
						stk[top]=a[0];
						break;                                                 
					}else{
						printf("%c ",stk[top]);
						top--;                     
					}
				}  
			}
		}
	}
	while(top>=0){
		if(stk[top]!='(')
			printf("%c ",stk[top]);
		top--;
	}
	printf("\n");
	return 0;
}
