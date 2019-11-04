
int main(){
int x,y,z,m;
scanf("%d %d %d,",&x,&y,&z);
if(x>y && x>z )
m=x;
else if(y>z)
m=y;
else 
m=z;
printf("%d\n",m);
}