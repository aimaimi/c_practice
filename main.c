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
    int a, b,count;
    b = 5;
//    scanf("%d",&a);

    for(count = 0; count < 7;count++){
        printf("%d回目\n",count+1);
    }


//    switch(a){
//        case 1:
//            printf("aは1です");
//            break;
//        case 2:
//            printf("aは2です");
//            break;
//        default:
//            printf("どれにも当てはまりません");
//    }

//    a < b ? printf("aはbより小さいです") : printf("aはbより小さくないです");

    return 0;
}
