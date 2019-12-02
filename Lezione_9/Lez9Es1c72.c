#include <stdio.h>
#include <stdlib.h>

int main(){
    int input[5];
    int el,n=5,i;      
    i=0;
  //Legge 5 numeri pari e li mette dentro input
while (i<n){      	
scanf("%d",&el);
    if (el%2==0) {
	input[i] = el;
	i++;
	}	
}
    for (i=0; i<n; i++)
	printf("%d\n",input[i]);
	printf("Risultato di ugualeASomma: %d\n", ugualeASomma(input,n));
return 0;
}

//ritorna vero se esiste un elemento pari alla somma di tutti gli altri
int ugualeASomma(int v[],int dim){
int trovato=0;
int i=0,j,sum=0;
while(!trovato && j<dim){
	sum=0; //somma deve tornare a 0 ogni volta
	for(i=0;i<dim;i++){
		if(i!=j)  
		  sum+=v[i];
}
	    if(v[j]==sum)
	      trovato=1;
	j++;
	}

return trovato;
}