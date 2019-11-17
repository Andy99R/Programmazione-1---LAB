#include <stdio.h>
void diff_abs(float,float);
main(){
	float x,y;
	scanf("%f %f",&x,&y);
	diff_abs(x,y);
}
diff_abs(float a, float b){
	float x=a-b;
	float y=b-a;
	printf("%.2f\n%.2f",x,y);
}