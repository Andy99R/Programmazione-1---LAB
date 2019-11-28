#include <stdio.h>
int i; 
struct dipendente{
	int codice;
	int stipendio;
	int mm; //mese di assunzione
	int aa; //anno di assunzione
};
void increment (struct dipendente d[], int p){ //funzione che incrementa lo stipendio
	for(i=0;i<2;i++){
		if(d[i].aa==2000 && d[i].mm<5) //se sono sopra il 2000 devo essere sotto il mese 5
		   d[i].stipendio+=((d[i].stipendio*p)/100);

    	else if(d[i].aa<2000) //se sono sotto i 2000 non me ne importa del mese
     	   d[i].stipendio+=((d[i].stipendio*p)/100);
}
}
int main(){
	struct dipendente dip[2]; //creo un array di struct
	int p;
	for(i=0;i<2;i++){ //Inizializzo i parametri dei dipendenti
		scanf("%d",&dip[i].codice);
		scanf("%d",&dip[i].mm);
		scanf("%d",&dip[i].aa);
		scanf("%d",&dip[i].stipendio);
	}
	scanf("%d",&p); //Inserisco la percentuale di aumento dello stipendio
	increment (dip,p); //chiamo la funzione passando i paramentri per valore (Per indirizzo ho fallito!)
	for(i=0;i<2;i++)
	 if(dip[i].stipendio>1200) 
	  printf("%d %d\n",dip[i].codice,dip[i].stipendio);
return 0;
}