main() {
	int v[10],i;
	for(i=0;i<10;i++){
		scanf("%d",&v[i]);
	}
	for(i=0;i<10;i++){
	   if(v[i]>-1 && v[i]%2==0 || v[i]<0 && v[i+1]>=0 && i!=9)
		  printf("%d\n",v[i]);
	}
}