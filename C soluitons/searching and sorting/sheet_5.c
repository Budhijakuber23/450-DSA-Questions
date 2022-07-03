#include<stdio.h>
#include<math.h>

int max(int a, int b, int c){
    if(a>b){
        if(a>c){
            return a;
        }else{
            return c;
        }
    }else{
        if(b>c){
            return b;
        }else{
            return c;
        }
    }
}
int min(int a, int b, int c){
    if(a>b){
        if(c>b){
            return b;
        }else{
            return c;
        }
    }else{
        if(c>a){
            return a;
        }else{
            return c;
        }
    }
}
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int arr[3];
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    int x=max(a,b,c);
    int y=min(a,b,c);

    for(int i=0; i<3; i++){
        if (arr[i]<x && arr[i]>y){
            printf("%d",arr[i]);
        }
    }
}