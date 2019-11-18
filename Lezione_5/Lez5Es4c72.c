#include <stdio.h>
int M_C_D(int x,int y){
while(x!=y){
    if(x>y)
        x=x-y;
    else
        y=y-x;
} 
return x;
}
int mcm(int z,int k){
  return (z*k)/M_C_D(z,k);
	
}
main(){
	int n,m;
	scanf("%d %d",&n,&m);
	printf("%d\n",M_C_D(n,m));
	printf("%d",mcm(n,m));
}