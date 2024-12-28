// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    int arr[5] = {-2,-3,3,3,4};
    int max= INT_MIN , min =INT_MAX;
    int max_index =0 , min_index=0;
    
    for(int i=0; i < 5 ; i++){
        if(arr[i] > max){
            max = arr[i];
            max_index =i;
        }
        if(arr[i] < min){
            min = arr[i];
            min_index =i;
        }
    }
    
    swap(arr[max_index] ,arr[min_index]);
    
    for(int i =0; i<5; i++){
        
        cout<<arr[i] << ",";
    }

    return 0;
}