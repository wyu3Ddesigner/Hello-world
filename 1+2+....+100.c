#include<stdio.h>
int main(){
	int a = 1,b,c;
	for(c=1;c>100;c++){
		b = a*c +c*(c-1)/2;
		printf("%d/n",b);
	}
	
	return a;
}
