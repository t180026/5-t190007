#include <stdio.h>

int main(){

    double a=1.0,b;
    while(a>0.0){
        a=a/(1.0+1.0);
        if(a>0.0){
            b=a;
        }    
    }
    printf("%e\n",b);
    
}
