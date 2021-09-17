#include<stdio.h>
#include<iostream>
using namespace std;

bool issafe(int **arr,int x, int y, int n){
    if(x<n && y<n && arr[x][y]==1 ){
        return true;
    }
    return false;
}

bool ratinmaze(int **arr,int x,int y,int n, int** Solarr){
    if(x==(n-1) && y==(n-1)){
        Solarr[x][y]=1;
        return true;
    }


    if(issafe(arr,x,y,n)){
        Solarr[x][y]=1;
        if(ratinmaze(arr,x+1,y,n,Solarr)){
            return true;
        }
        if(ratinmaze(arr,x,y+1,n,Solarr)){
            return true;
        }
        Solarr[x][y]=0;
        return false;
    }
    return false;

}
int main(){
    int n;
    cin>>n;



    int** arr[]= new int*[n];
    for(int i=0;i<n;i++){
        int arr[i]=new int[n];
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int** Solarr[]= new int*[n];
    for(int i=0;i<n;i++){
        int Solarr[i]=new int[n];
        for(int j=0;j<n;j++){
            Solarr[i][j]=0;
        }
    }



    if(ratinmaze(arr,0,0,n,Solarr)){
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cout<<Solarr[i][j];
        }
    }
    }

}