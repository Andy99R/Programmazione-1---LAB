#include <stdio.h>
main(){
 int x[5],y[5],i;
for(i=0;i<5;i++){
	scanf("%d",&x[i]);
}
for(i=0;i<5;i++){
	scanf("%d",&y[i]);
}
printf("[");
for(i=0;i<4;i++)
printf("%d,",x[i]);
printf("%d",x[4]);
printf("]\n");
printf("[");
for(i=0;i<4;i++)
printf("%d,",y[i]);
printf("%d",y[4]);
printf("]\n");
printf("[");
for(i=0;i<4;i++)
	printf("%d,",x[i]+y[i]);
	printf("%d",x[4]+y[4]);
printf("]\n");
}