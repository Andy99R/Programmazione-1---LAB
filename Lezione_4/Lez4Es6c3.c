#include <stdio.h>
main(){
	int i,j,n,k=2;
	scanf("%d",&n);
while(n>0){
	for(i=0;i<n;i++)
	printf("*");	
	n=n-k;
	printf("\n");
}
}