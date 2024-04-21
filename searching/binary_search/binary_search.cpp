#include <vector>
using namespace std; 

int search(vector<int> arr, int target, int b = 0, int e = -1){

    e = (e == -1) ? arr.size() : e; 

    if (b <= e){
        
        int m = b + e; 
        if (arr[m] == target){
            return m; 
        }
        else if (arr[m] < target){
            return search(arr, target, m+1, e);
        }
        else{
            return search(arr, target, b, m-1); 
        }
    }
    return -1;    
}
