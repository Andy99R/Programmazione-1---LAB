//Esercizio NON funzionante!
#include <stdio.h>
float approx_pi(int x){
	int i;
    float pi=0;
    for (i=1;i<=(2*x-1);i+=4){
        pi=pi+(float)4/i;
    }
    for (i=3;i<=(2*x-1);i+=4){
        pi=pi-(float)4/i;
    }
    return pi;
}
main(){
	int n;
	scanf("%d",&n);
	printf("%.6f",approx_pi(n));
	return 0;
}
