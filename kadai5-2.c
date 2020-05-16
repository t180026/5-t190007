#include <stdio.h>
#include <math.h>

int main() {
    double a=1.0,b,inf=INFINITY;
    while(a<inf){
        a*=2;
        if(a<inf) {
            b=a;
        }
    }
    printf("%e\n",b);
}
