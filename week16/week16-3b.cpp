//week16-3b.cpp SOIT_ADVANCE_002B
#include<stdio.h>
int main(){
    int a, b, c;
    int m,n;
    scanf("%d %d %d", &a, &b, &c);
    if(a<b){
        n = a;
        a = b;
        b = n;
    }
    if(a<c){
        n = a;
        a = c;
        c = n;
    }
    if(b<c){
        n = b;
        b = c;
        c = n;
    }
    m=a*100+b*10+c+1;
    printf("%d",m);
}
