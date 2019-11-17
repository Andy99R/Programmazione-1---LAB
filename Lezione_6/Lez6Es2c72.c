#include <stdio.h>
void ordered_swap(int,int,int);
main(){
	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	ordered_swap(x,y,z);
	return 0;
}

ordered_swap(int a,int b,int c){
	int cmd;
	if(b<a && b<c){
	   cmd=a;
	   a=b;
	   b=cmd;
}
    if(c<a && c<b){
    	cmd=a;
    	a=c;
    	c=cmd;
	}
	if(b>c && b>a){
		cmd=b;
		b=c;
		c=cmd;
	}
     printf("%d\n%d\n%d",a,b,c);
}