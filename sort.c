#include <stdio.h>




void sort(float * t, int size){
    int tot=0,i = 1;
    while(tot<=size*size){
        if(t[i-1]>t[i]){
            float temp = t[i-1];
            t[i-1]=t[i];
            t[i]=temp;
        }
        if(i==size-1)
            i=0;
        i++;
        tot++;
    }    
}

void main(void){
    float t[]={12,2,7,4,10};
    sort(t,sizeof(t)/sizeof(float));
    printf("\n");
    for(int i=0;i<sizeof(t)/sizeof(float);i++){
        printf("%f ",t[i]);
    }
}