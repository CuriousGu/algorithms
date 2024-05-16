#include <vector>

using namespace std; 

vector<int> sort(vector<int> arr, int b=0, int e=-1){
    if (e == -1) {
        e = arr.size() - 1;
    }

    if (b < e) {
        int pivot = arr[e];
        int p = b; 

        for (int j = b; j < e; j++) {
            if (arr[j] <= pivot) {
                int temp = arr[p];
                arr[p] = arr[j]; 
                arr[j] = temp; 
                p++;
            }
        }
        int temp = arr[p]; 
        arr[p] = arr[e];
        arr[e] = temp;
    
        arr = sort(arr, b, p-1); 
        arr = sort(arr, p+1, e);
    }
    return arr;
}
