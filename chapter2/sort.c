#include<stdio.h>
#include<time.h>
int main(){
    clock_t start, end;
    double cpu_time_used;

    start = clock();
    int a[6]={5,2,4,6,1,3}, key;
    int loop=1;
    while(loop==1){
        loop=0;
        for(int i=0;i<6;i++)
            if(a[i]>a[i+1]){
                key=a[i];
                a[i]=a[i+1];
                a[i+1]=key;
                loop=1;
            }
    }
/*     int i,j;
    for(i=1;i<6;i++){
        key=a[i];
        j=i-1;
        while(j>=0&&a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    } */
    for(int i=0;i<6;i++)
        printf("%d",a[i]);

    end = clock();
    cpu_time_used = ((double) (end-start))/CLOCKS_PER_SEC;
    printf("\n%.10f",cpu_time_used);
}