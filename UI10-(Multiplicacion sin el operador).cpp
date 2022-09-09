#include<stdio.h>
int mult(int a, int b);
int main(){
	int num, num2;
	scanf("%d",&num);
	printf("\n");
	scanf("%d",&num2);
	mult(num,num2);
	return 0;
}
int mult(int a, int b){
	int i, resul=0;
	for(i=1;i<=b;i++){
	resul=a+resul;
	}
	
	printf("%d",resul);
	return resul;
}
