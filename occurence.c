#include<stdio.h>
int main(){
    int d;
    scanf("%d",&d);
    int arr[d];

    for(int i=0;i<d;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<d;i++){
        printf("%d ",arr[i]);
    }
    int key;
    int count=0;
    scanf("%d",&key);
    int ret_ar[500][500];
    for(int i=0;i<d-1;i++){
        for(int j=i+1;j<d;j++){
            if(arr[i]==arr[j]){
              ret_ar[i][j]=arr[j];
            }
        }
        count++;
    }
    printf("%d\n",count);
    int counter[count];
    for(int i=0;i<d;i++){
        int ans=0;
        for(int j=0;j<d;j++){
            printf("%d ",ret_ar[i][j]);
            ans++;
        }
        counter[i]=ans;
    }

    for(int i=0;i<count;i++){
        printf("%d ",counter[i]);
    }
    return 0;
}