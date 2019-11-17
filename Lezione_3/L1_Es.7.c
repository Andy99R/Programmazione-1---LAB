main(){
	int s,m,h;
	scanf("%d",&s);
  if(s<60)
  m=0;
  else {
  m=s/60;
  s=s-(m*60);
}
  if(m<60)
  h=0;
  else{
  	h=m/60;
  	m=m-(h*60);
  }
	printf("%d h %d min %d s",h,m,s);
}