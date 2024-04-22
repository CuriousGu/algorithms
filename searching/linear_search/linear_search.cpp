#include <vector>
using namespace std; 


// The array does not need to be sorted
int search(vector<int> arr, int target){

    for (int i = 0; i < arr.size(); i++){
        if (arr[i] == target){
            return i; 
        }
    }
    return -1; 
}
