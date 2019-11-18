#include <stdio.h>
int count_larger(int x, int a[5]){
	int k=0,i;
	for(i=0;i<5;i++){
		if(a[i]>x)
		 k++;
	}
	return k;
}
main(){
	int n,i;
	scanf("%d",&n);
	int v[5];
	for(i=0;i<5;i++)
	scanf("%d",&v[i]);
	printf("%d",count_larger(n,v));
}