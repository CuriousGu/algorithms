#include <vector>

using namespace std; 

vector<int> sort(vector<int> arr){
    int j = 0; 

    while (j < arr.size() - 1){
        int i, index_lower; 
        i = index_lower = j; 

        while (i < arr.size()){
            if (arr[i] < arr[index_lower]){
                index_lower = i;
            }
            i++; 
        }
        
        int temp = arr[j]; 
        arr[j] = arr[index_lower]; 
        arr[index_lower] = temp; 
        j++; 
    }
    
    return arr;
}
