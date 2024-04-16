#include <iostream>
#include <vector>

using namespace std; 


vector<int> sort(vector<int>& arr) {
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr.size(); j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j]; 
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    return arr; 
}
