main(){
char x;
unsigned int y;
unsigned char m;

//read input
scanf("%c",&x);
printf("x:%c",x);

//set mask to 00...01
m=~(~0<<1);
printf("%c",m);

//shigt x by 4 bits
x=x>>4;
printf("x after shift:%c",x);

//AND x and m
y=x&m;
printf("y:%d\n",y);


}
