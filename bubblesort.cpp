//********Bubble Sort*********//
//Needs improvement but works//

#include <iostream>

using namespace std;

void bubbleSort(int arr[],int n){
    for(int j=0; j<n-1; j++ ){
        for (int i = 0; i<n-j-1; i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i], arr[i+1]);
            }
        }

    }
    for(int i = 0;i<n;i++){
    cout<<arr[i]<<endl;
    }
}



int main(){
int arr[10] = {3,7,5,4,0,9,8,2,1,6};
int n = 10;
bubbleSort(arr,n);
}
