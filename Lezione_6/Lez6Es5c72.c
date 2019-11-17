#include <stdio.h>
void verifica(int x[], int y[], int *pointer);
int main(){
	int a[3],b[3],i;
	int p=0;
	for(i=0;i<3;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++){
		scanf("%d",&b[i]);
	}
	verifica(a,b,&p); //la variabile p è l'indirizzo di un pointer
	if(p==1)
	printf("TRUE");
	else 
	printf("FALSE");
	return 0;
}

void verifica(int x[3],int y[3],int *pointer){
	int i,j,cmd=1;
	for(i=0;i<3;i++){ //ciclo che scorre primo array
		for(j=0;j<3;j++){ //ciclo che scorre secondo array
			if(x[i]>y[j]){ //se c'è un elemento maggiore
				cmd=0; //imposta variabile di comodo a 0
				j=3; //termina il ciclo per j
			}
		}
		if(cmd==1)
		 *pointer=1;
	}
}