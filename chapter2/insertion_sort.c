#include<stdio.h>
int main(){
    int a[6]={31, 41, 49, 26, 41, 58}, key, j;
    for(int i=1;i<=5;i++){
        key=a[i];
        j=i-1;
        while(j>=0&&a[j]<key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    for(int i=0;i<6;i++)
        printf("%d ",a[i]);
}