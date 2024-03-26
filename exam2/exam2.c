#include<stdio.h>
#include<stdlib.h>
int main(){
    int i;
    int j;
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            if(i>=j){
                printf("%d*%d=%d ",i,j,i*j);
            }
            else{
                printf("\n");
                break;
            }
        }
    }
    printf("\n");
    system("pause");
    return 0;
}