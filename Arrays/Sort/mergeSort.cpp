#include<bits/stdC++.h>
using namespace std;

//conquer Function

void conquer(int arr[],int si,int mid,int ei){
    int merged[(ei-si+1)];
    int startIndexOfFirstArray=si;
    int startIndexOfSecondArray=mid+1;
    int startIndexOfMergedArray=0;

    while(startIndexOfFirstArray<=mid && startIndexOfSecondArray<=ei){
        if(arr[startIndexOfFirstArray]<=arr[startIndexOfSecondArray]){
            merged[startIndexOfMergedArray]=arr[startIndexOfFirstArray];
            startIndexOfFirstArray++;
            startIndexOfMergedArray++;
        }
        else {
            merged[startIndexOfMergedArray]=arr[startIndexOfSecondArray];
            startIndexOfSecondArray++;
            startIndexOfMergedArray++;
        }
    }

}

//divide Function
void meregSortdivide(int arr[], int si, int ei){
    if(si>=ei){
        return;
    }
    int mid=si+(ei-si)/2;
    meregSortdivide(arr,si,mid);
    meregSortdivide(arr,mid+1,ei);
    conquer(arr,si,mid,ei);
}
int main(){
    int arr[]={5,1,4,3,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    meregSortdivide(arr,0,size-1);

    return 0;
}