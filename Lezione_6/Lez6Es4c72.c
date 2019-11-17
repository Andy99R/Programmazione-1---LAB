#include <stdio.h>
void primoultimopari(int a[],int dim, int *p, int *u){
int i=0;
*p=-1;
*u=-1;
for(i=0;i<dim;i++){
	if(a[i]%2==0 && *p==-1){
	*p=i;
	*u=i;
}
	else if(a[i]%2==0 && *p!=-1)
	*u=i;
}
}
main(){
	int j,v[7],fp,lp;
	for(j=0;j<7;j++){
		scanf("%d",&v[j]);
	}
	primoultimopari(v,7,&fp,&lp); //ho perso 40minuti perchè ho dato dimensione al vettore
	printf("%d %d",fp,lp);//stampo valori di variabili int
	return 0;
}

