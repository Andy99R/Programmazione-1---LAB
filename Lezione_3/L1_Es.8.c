main(){
	double a,b,ris;
	char c;
	scanf("%lf %lf %c",&a,&b,&c);
	int k=a;
	int j=b;
	
	switch(c){
		case '+':
			ris=a+b;
		break;
		case '-':
			ris=a-b;
		break;
		case '/':
		ris=a/b;
		break;    
	    case '%':
	    	ris=k%j;
	    break;
	}
	printf("%.1lf",ris);
}