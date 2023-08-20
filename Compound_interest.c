#include<stdio.h>
#include<math.h>
int main(){
    double p,r,t,ci,a;
    scanf("%lf%lf%lf",&p,&r,&t);
    
    a=pow(1+r/100.0,t);
    ci=a*p;
    printf("%.2lf",ci);
    
}