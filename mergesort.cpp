//mergesort
//TC- 
//SC-

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void merge(int *arr, int start,int end,int mid){
    
    int len1=mid-start+1;
    int len2=end-mid;
    
    int mainArrIndex = start;
    int *first = new int[len1];
    int *second =new int[len2];
    
    //copy values
    for(int i =0; i<len1; i++){
        first[i]=arr[mainArrIndex++];
    }
    mainArrIndex=mid+1;
    for(int i =0; i<len2; i++){
        second[i]=arr[mainArrIndex++];
    }
    
    //merge two sorted array logic
    int idx1=0;
    int idx2=0;
    mainArrIndex =start;
    while(idx1<len1 && idx2<len2){
        if(first[idx1]<second[idx2]){
            arr[mainArrIndex++]=first[idx1++];
        }
        else{
            arr[mainArrIndex++]=second[idx2++];
        }
    }
    
    while(idx1<len1){
         arr[mainArrIndex++]=first[idx1++];
    }
    while(idx2<len2){
         arr[mainArrIndex++]=second[idx2++];
    }
    
}

void MergeSort(int *arr, int start,int end){
    //base case
    if(start>=end){
        return;
    }
    int mid =start+(end-start)/2;
    //left arr
    MergeSort(arr,start,mid);
    MergeSort(arr,mid+1,end);
    //merge them
    
    merge(arr,start,end,mid);
}
int main() {
   int arr[]={5,6,3,1,8,55,77};
   int start=0;
   int end =sizeof(arr)/sizeof(arr[0])-1;
   MergeSort(arr,start,end);
 for(int i =0; i<end; i++){
     cout<<arr[i]<<" ";
 }
   

    return 0;
}