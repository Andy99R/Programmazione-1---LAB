#include <stdio.h>
#include <stdlib.h>

struct elemento{ //Dichiaro l'elemento della lista
	int info;
	struct elemento *next;
};
typedef struct elemento ElementoDiLista; //Definisco ElementoDiLista come nodo della lista
typedef ElementoDiLista* ListaDiElementi; //Definisco ListaDiElementi come lista di nodi

void aggiungi_testa(ListaDiElementi *testa, int x){ //Questa funzione aggiunge un elemento in testa
	ListaDiElementi nuovo=malloc(sizeof(ElementoDiLista)); //Tramite malloc riesco ad allocare spazio per l'elemento nuovo
	nuovo->next=*testa; //Nuovo prende il valore puntato da testa
	nuovo->info=x; //Nuovo prendo il valore di x passato dal main tramite valore
	*testa=nuovo; //nuovo diventa la nuova testa
}
void cancella_testa(ListaDiElementi *testa){//Questa funzione cancella l'elemento in testa
	ListaDiElementi aux=*testa; //aux mi prende il valore puntato dalla testa
	if(*testa!=NULL){ //Se testa è Null non faccio nulla altrimenti procedo all'eliminazione
		*testa=(*testa)->next;//Testa prende il del elemento che segue
		free(aux);//Libero aux
	}
}
void stampa_lista(ListaDiElementi testa){ //Questa funzione mi stampa la lista
	ListaDiElementi x = testa; //x prende il valore della mia lista
	while(x!=NULL){ //Se la lista non è vuota stampo
		printf("%d\n",x->info); //Stampo il valore dell'elemento
		x=x->next;//Scorro al prossimo elemento
	}
}

int main(){
	ListaDiElementi lista=NULL; //Dichiaro una lista inizialmente vuota
	int n;
	int cmd=0;
	while(cmd==0){ //Finche la variabile di comodo è uguale a 0
		scanf("%d",&n); //Inserisco un valore
		if(n>0) //Controllo che il valore inserito sia maggiore di zero
		   aggiungi_testa(&lista,n); //Se è maggiore di zero lo aggiungo in testa
		else if(n==0) //Se il valore inserito è 0 elimino l'elemento in testa
		   cancella_testa(&lista); 
		else{
		   stampa_lista(lista);//Alla fine stampo la lista per valori negativi
		   cmd=1;//Chiudo il ciclo
		} 
	}
	return 0;
}