#include <stdio.h>
 void sum_pow(int num,float x1, float *p){
 	int i=0;
 	for(i=0;i<=num;i++){
 		*p+=pow(x1,i);
	 }
 }
main(){
	int n;
	float x,s;
	scanf("%d",&n);
	do{
		scanf("%f",&x);
	}while(x<=0);
	sum_pow(n,x,&s);
	printf("%.2f",s);
}