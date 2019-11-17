#include <stdio.h>
int fun(int m[4][3]);

int main(){
	int v[4][3],i,j;
	for(i=0;i<4;i++){
		for(j=0;j<3;j++)
		scanf("%d",&v[i][j]);
	}
	printf("%d",fun(v));
	return 0;
}
int fun(int m[4][3]){
	int i,j,cmd=1,k=-1;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(m[j][i]%3!=0){
			cmd=0;
			j=4;
		}
			else
			k=i;
		}
	}
	  return k;  
}