#include<stdio.h>
void ascending(int arr[]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5 ;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
      for (int k=0;k<5;k++){
        printf("%d ",arr[k]);
       }
    return;
}
int main(){
    int arr[5] = {5,6,3,8,4};
    ascending(arr);
    return 0;
}