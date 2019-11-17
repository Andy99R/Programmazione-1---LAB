#include <stdio.h>
main(){
	int m1[4][3],m2[4][3],i,j;
	for(i=0;i<4;i++){
		for(j=0;j<3;j++)
		scanf("%d",&m1[i][j]);
}
	for(i=0;i<4;i++){
		for(j=0;j<3;j++)
		scanf("%d",&m2[i][j]);
}
	for(i=0;i<4;i++){
		for(j=0;j<3;j++)
	  printf("%d ",m1[i][j]+m2[i][j]);
	  printf("\n");
}
}