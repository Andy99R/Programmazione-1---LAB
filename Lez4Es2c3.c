main(){
int n,f;
scanf("%d",&n);
f=n;
while(n>1){
	f=f*(n-1);
	n--;
}
printf("%d",f);
}