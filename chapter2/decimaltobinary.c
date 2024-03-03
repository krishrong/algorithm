#include<stdio.h>
int main(){
    int a[32], num, n, power;
    for(int i=0;i<32;i++)
        a[i]=0;

    scanf("%d",&num);
    while(num>0){
        power=1;n=0;
        while(1){
            power*=2;
            n++;
            if(num<power){
                power/=2;
                n--;
                break;
            }
        }
        a[n]=1;
        num-=power;
        if(num==1)
            a[0]=1;
        printf("loop\n");
    }

    for(int i=31;i>=0;i--)
        printf("%d",a[i]);
}