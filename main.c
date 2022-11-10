#include <stdio.h>
#include <stdlib.h>

int main()
{
for(int i=0;i<10;i++){
    for(int j=10;j>i;j--){
        printf(" ");
    }
    for(int k=0;k<=(2*i);k++){
        printf("*");
    }
    printf("\n");
}

}
