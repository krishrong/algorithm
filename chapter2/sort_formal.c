#include<stdio.h>
#include<time.h>
int main(){
    clock_t start, end;
    double cpu_time_used;

    start = clock();

    int a[6]={5,2,4,6,1,3}, key, i, j;
    //insert a[i] into the sorted subarray a[1] to a[i-1]
    for(int i=1;i<=5;i++){
        key=a[i];
        j=i-1;
        while(j>=0&&a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    for(int i=0;i<6;i++)
        printf("%d",a[i]);

    end = clock();
    cpu_time_used = ((double) (end-start))/CLOCKS_PER_SEC;
    printf("\n%.10f",cpu_time_used);
}