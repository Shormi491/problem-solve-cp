#include<stdio.h>
int main(){
    int X,Y;
    scanf("%d %d",&X,&Y);
    int A = X-Y;
    if(A>=18){
        printf("RCB\n");
    }
    else{
        printf("CSK\n");
    }
    return 0;


}
