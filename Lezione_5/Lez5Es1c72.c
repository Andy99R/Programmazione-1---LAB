#include <stdio.h>
void media(int v[10],float *med,int k){
	int i,j=0;
	for(i=0;i<10;i++){
		if(k>0 && v[i]>0){
		   *med+=v[i];
		   j++;
	}
		else if(k<0 && v[i]<0){
		   *med+=v[i];
		   j++;
	}
	}
	*med/=j;
}
main(){
 int v[10],i,k=-1;
 float m;
 v[9]=666;
 for(i=0;i<10;i++){
	do{
 	scanf("%d",&v[i]);
	}while(v[9]==0);
 	if(i==9 && v[i]>0)
 	 k=1;
 }
 media(v,&m,k);
 printf("%.2f",m);
 return 0;
}