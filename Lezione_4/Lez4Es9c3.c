#include <stdio.h>
main(){
	int x[5],y[5],i;
for(i=0;i<5;i++){
	scanf("%d",&x[i]);
}
for(i=0;i<5;i++){
	scanf("%d",&y[i]);
}
for(i=0;i<5;i++)
printf("%d",x[i]);


for(i=0;i<5;i++)
printf("%d",y[i]);

for(i=0;i<5;i++)
	printf("%d",x[i]+y[i]);

}