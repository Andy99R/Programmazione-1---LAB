main(){
	int A[10],i,k=1;
	for(i=0;i<10;i++){
		scanf("%d",&A[i]);
	}
	for(i=0;i<9;i++){
		int cmd= A[i+1]-A[i-1];
		if(A[i] == cmd){
			printf("%d",i);
			i=10;
			k=1;
		}
		else k=-1;
		}
		if(k==-1){
			printf("%d",k);
	}
}