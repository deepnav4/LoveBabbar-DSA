#include <iostream>
using namespace std;

int pivotEl(int arr[],int size){
    int totalsum = 0;
    int leftSum = 0;
    int rightSum = 0;
    int sumArray[size];
    for(int i=0; i<size; i++){
        totalsum += arr[i];
    }
    for(int i=0; i<size; i++){
        rightSum = totalsum - leftSum - arr[i];
        if(leftSum == rightSum)
            return i;
        else
            leftSum = leftSum + arr[i];
    }
    return -1;
}

int main(){
    int arr[] = {2,1,-1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int result = pivotEl(arr,size);
    result != -1 ? (cout<<"The Pivot Index of Given Array is : " <<pivotEl(arr,size)):cout<<"No Pivot Index Exist";
}
