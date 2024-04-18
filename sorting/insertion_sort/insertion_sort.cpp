#include <vector>
using namespace std; 


vector<int> sort(vector<int> arr){

    for(int i=1; i < arr.size(); i++){
        int temp = arr[i]; 
        int j = i - 1; 
        
        while(j >= 0 && arr[j] > temp){
            arr[j+1] = arr[j]; 
            j--; 
        }
        arr[j+1] = temp; 
    }
    return arr; 
}
