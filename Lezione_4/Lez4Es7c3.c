#include <stdio.h>
main(){
	int h,l,i,j;
	scanf("%d %d",&h,&l);
for(i=0;i<h;i++){
	for(j=0;j<l;j++){
    if(i==0 || i==h-1 || j==0 || j==l-1)
     printf("*");
    else
    printf(" ");
}
printf("\n");
}
}