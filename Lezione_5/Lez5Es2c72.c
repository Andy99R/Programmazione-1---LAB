#include <stdio.h>

void multipli(int nu,int mu){
	int i;
	for(i=1;i<nu;i++){
		if(i%mu==0){
	     printf("%d\n",i);
	}
	}
}
main(){
	int n,m,i;
	scanf("%d %d",&n,&m);
	multipli(n,m);
	 return 0;
}