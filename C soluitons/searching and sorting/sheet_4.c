#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d", &n);
    float x= pow(n, 0.5);
    int count=0;
    for(int i=0; i<x; i++){
        count++;
    }
    printf("%d", count-1);
}