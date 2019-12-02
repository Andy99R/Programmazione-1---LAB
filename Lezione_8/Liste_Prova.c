//Esercizio utile a capire le liste
#include <stdio.h>
#include <malloc.h>

struct elemento{ //Dichiaro l'elemento di listra
	int inf; //Valore del elemento
	struct elemento *pun; // Valore puntanto dall'elelemnto
};
struct elemento *crea_lista(); //prototipo delle funzione di creazione
void visualizza_lista(struct elemento *); //prototipo della funzione di stampa

int main(){
	struct elemento *lista; //puntatore della lista
    lista=crea_lista();// crea la lista
    visualizza_lista(lista); //stampo la lista
}	

struct elemento *crea_lista(){
	struct elemento *p, *punt; 
	int i,n;
	printf("Specificare il numero di elementi:");
    scanf("%d",&n);
	 if(n==0){ 
	   p=NULL; //lista vuota 
}
	 else{
	   p=(struct elemento*)malloc(sizeof(struct elemento)); //Creo il primo elemento
  	    printf("Inserisci il primo valore:");
	    scanf("%d",&p->inf);//passo a inf di p il valore in input
	    punt = p; //punt prendere il valore di p
	for(i=2; i<=n;i++){ //Creo elemento successivi
		punt->pun=(struct elemeto*)malloc(sizeof(struct elemento)); //Creo un nuovo elemento puntato dal precedente
		punt=punt->pun; 
		printf("\n Inserisci il %d elemento:",i);
		scanf("%d",&punt->inf);
	}
	punt->pun=NULL; //marcatore di fine lista
    }
	return (p); //chiudo la funzione
}
void visualizza_lista(struct elemento *p){
	printf("nlista->");
	while(p!=NULL){ //Finchè p non punta a NULL cioè fine lista
		printf("%d",p->inf); //stampa il valore puntato
		printf(" -> ");
		p=p->pun; //scorre di un elemento
	}
	printf("NULL");
}

