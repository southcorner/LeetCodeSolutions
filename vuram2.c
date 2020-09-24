#include<stdio.h>
int main(){
    int n,rows;
    scanf("%d %d",&n,&rows);
    int arr[rows*rows];
    arr[0] = n;
    arr[1] = 0;
    int l=0, r=2, count, rw = 0;
    while(rw < rows){
        count = 1;
        while(arr[l]!=0)
        { 
            if(arr[l] == arr[l+1]){
                        count++;
            }
            else {
                arr[r] = count;
                r++;
                count = 1;
                arr[r] = arr[l];
                r++;
            }
            l++;
        }
        arr[r] = 0;
        r++;
        rw++;
        l++;
    }
    for(int i = 0; i<r-1; i++){
        if(arr[i] == 0){
            printf("\n");
        }
        else{
            printf("%d",arr[i]);
        }
    }    
}