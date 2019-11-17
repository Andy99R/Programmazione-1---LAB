#include<stdio.h>
main(){
int fib,fib1=0,fib2=1,n,i=0;
scanf("%d",&n);
do{
	if(i==0)
	   fib=0;
	else if(i==1)
	fib=1;
	else{
	fib=fib1+fib2;
    fib1=fib2;
	fib2=fib; 	
}
i++;
printf("%d\n",fib);
}while(fib1+fib2<=n);
}

