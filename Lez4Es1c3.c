main(){
	int i=0,v[10];
	for(i=0;i<10;i++){
		scanf("%d",&v[i]);
	}
	for(i=10-1;i>=0;i--){
	 if(v[i]%2==0)
	 v[i]=v[i]/2;
	 printf("%d\n",v[i]);
	}
}
