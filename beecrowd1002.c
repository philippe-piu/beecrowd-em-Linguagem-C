#include<stdio.h>

//beecrowd1002
int main(){
	
	double n, area, raio;
	n = 3.14159;
	area = 0.0;
	raio = 0.0;
	
	scanf("%lf", &raio);
	
	area = n * (raio * raio);
	
	printf("A=%.4lf\n",area);
	
	return(0);
}