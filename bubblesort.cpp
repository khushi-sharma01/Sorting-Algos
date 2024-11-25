//bubble sort 
//in each round we have to comapre adjust element and if they are not 
//in increasing order then swap them othewise ignnore it, eventually it leads to place the ith largest element at the right place , in each round

//USECASE
//
//Time Complexcity
//O(n^2)
//space complexcity 
//conatant O(1)
//to optimise the TC of Best case make a flag that if in any round no swap happened that means arr is now sorted no need to check further

#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n){
    
    int i =n-1;
    while(i>=0){
        bool swapped=false;
        for(int j=0; j<i; j++){
            if(arr[j]>arr[j+1]){
                //compare swap
                swap(arr[j], arr[j+1]);
                swapped=true;
            }
            
        } 
        if(swapped==false){
            break;
        }
        i--;
    }
}
int main (){
    int arr[]={78,4,23,99,44};
    int n =sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    //print sorted arr
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}