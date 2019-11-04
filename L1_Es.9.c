
int main(){
int i,j;
for(i=0;i<10;i++){
for(j=0;j<3;j++){
	if(j%2 && i!=0 && i!=9)
	printf("X");
	else
	printf("*");
}
printf("\n");
}
}
