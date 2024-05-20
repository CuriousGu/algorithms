#include <vector>

using namespace std; 


vector<int> heapify(vector<int> arr, int n, int i){
    unsigned int largest = i; 
    unsigned int l_child = 2 * i + 1; 
    unsigned int r_child = 2 * i + 2; 

    if(l_child < n && arr[l_child] > arr[i]){
        largest = l_child; 
    }
    if(r_child < n && arr[r_child] > arr[largest]){
        largest = r_child; 
    }
    if(largest != i){
        int temp = arr[i]; 
        arr[i] = arr[largest]; 
        arr[largest] = temp;
        arr = heapify(arr, n, largest); 
    }

    return arr; 
}


vector<int> sort(vector<int> arr){
    unsigned int n = arr.size(); 

    for(int i = (n / 2) - 1; i >= 0; i--){
        arr = heapify(arr, n, i);
    }

    for(int i = n - 1; i > 0; i--){
        int temp = arr[i]; 
        arr[i] = arr[0]; 
        arr[0] = temp; 
        arr = heapify(arr, i, 0); 
    }

    return arr; 
}
