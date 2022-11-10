#include <stdio.h>
#include <stdlib.h>

int main()
{
//    for(int i=0;i<=10;i++){
//        for(int j=10;j>=i;j--){
//            printf("\t");
//        }
//       for(int k=1;k<=i;k++){
//        printf("+");
//       }
//        printf("\n");
//    }
for(int i=0;i<=10;i++){

    for(int j=10;j>i;j--){
        printf(" ");
    }
    for(int k=1;k<=i;k++){
        printf("$");
    }
    printf("\n");
}

for(int a=0;a<=10;a++){
    for(int b=1;b<=a;b++){
        printf(" ");
    }
    for(int c=10;c>a;c--){
        printf("$");
    }
    printf("\n");
}

}
