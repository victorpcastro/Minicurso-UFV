#include <stdio.h>

int soma(int a, int b){
	int c;
	c=a+b;
	return c;
}
int subtracao(int a, int b){
	int c;
	c=a-b;
	return c;
}
int multiplicacao(int a, int b){
	int c;
	c=a*b;
	return c;
}
int divisao(int a, int b){
	int c;
	c=a/b;
	return c;
}

int main(){
	
	int a,b,c,d;
	c= soma(5,2);
	printf("a soma eh: %d\n",c);
	d=subtracao(5,2);
	printf("%d\n",d);
	a=multiplicacao(5,2);
	printf("%d\n",a);
	b=divisao(6,2);
	printf("%d\n",b);
	return 0;
}
