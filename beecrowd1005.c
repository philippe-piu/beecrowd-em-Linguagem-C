#include<stdio.h>

//beecrowd1005
int main(){
	double a, b, media;
	a = 0.0;
	b = 0.0;
	media = 0.0;
	
	scanf("%lf", &a);
	scanf("%lf", &b);
	
	media = ((a * 3.5 + b * 7.5) / 11);
	
	printf("MEDIA = %.5lf\n",media);
	
	return(0);
}