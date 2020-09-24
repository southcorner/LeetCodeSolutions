#include <stdio.h>
#include<math.h>
int main(){
int n =16;
for(int i =0 ; i < sqrt(n); i++) {
    for(int j =0; j< sqrt(n); j++) {
        if(i == 0 || j == sqrt(n)-1 || i == sqrt(n)-1){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}
return 0;
}