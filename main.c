#include <stdio.h>
#include <math.h>

void disp(int num){
    printf("%d\n",num);
}

int add(int a, int b){
    return a+b;
}

int main() {

    disp(55);
    disp(add(20,50));
    int a, b;
    a = 3;
    b = 5;

    if(a < b){
        printf("aはbより小さいです");
    }

    return 0;
}
