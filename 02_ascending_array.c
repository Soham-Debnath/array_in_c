#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5};
    int n= sizeof(a)/4;
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    // Ascending the array
    for(int i=0;i<n;i++){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }

        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}