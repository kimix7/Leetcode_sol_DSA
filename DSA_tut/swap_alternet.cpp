#include<iostream>
using namespace std;

void printArr(int arr[], int s){

    for (int i = 0; i < s; i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlt(int arr[], int size){


    for(int i = 0; i < size; i+=2){ 
        // i+=2 will increment the loop where as i=+2 will assign +2 value to var i
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }

}

int main(){
    int even [10] = {1,2,3,4,5,6,7,8,9,0};
    int odd [7] = {1,2,3,4,5,6,7};  

    cout << "Original even array: ";
    printArr(even, 10);
  
    cout << "Original odd array: ";
    printArr(odd, 7);

    swapAlt(even, 10);
    cout << "Swaped even array: ";
    printArr(even, 10);

    swapAlt(odd, 7);
    cout << "Swaped odd array: ";
    printArr(odd, 7);
    
    return 0;
}