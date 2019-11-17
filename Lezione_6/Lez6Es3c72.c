#include <stdio.h>
void min_azzerra(int a[10]);
main(){
	int a[10],i;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	min_azzerra(a);
}
void min_azzerra(int x[10]){
	int i,min=x[0], *p;
	p=x;
	for(i=0;i<10;i++){
		if(p[i]<=min)
		   min=p[i];
		if(i%2!=0)
		   p[i]=0;
    printf("%d\n",p[i]);
	}
	printf("%d",min);
}
