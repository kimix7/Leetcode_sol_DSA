// minimun maximum elevent in array

#include<iostream>
using namespace std;

int getMax(int arr[], int n){

     int max = INT8_MIN;

    for (int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[], int n){

     int min = INT8_MAX;

    for (int i=0; i<n; i++){ 
    // never leave the interation variable blank alwaya initialize it to something appropriate

        // mini = min(mini , arr[i]);
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
     int arr[50];
     int size;
     cout<<"Enter size of array"<<endl;
     cin>>size;

     for(int i; i<size; i++){
        cin>>arr[i];
     }

     int a;
     a = getMax(arr, size);
     cout<<"Value in a "<< a << endl;

     cout<<"Max no in array is "<< getMax(arr, size) << endl;

     cout<<"Min no in array is "<< getMin(arr, size) << endl;

    return 0;
}