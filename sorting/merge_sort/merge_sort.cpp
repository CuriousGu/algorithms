#include <vector>
using namespace std;


vector<int> sort(vector<int> arr){

    if(arr.size() > 1){
    
        int half = arr.size() / 2; 
        int i, j, k; 
        i = j = k = 0;  

        vector<int> first(arr.begin(), arr.begin() + half);
        vector<int> second(arr.begin() + half, arr.end());

        first = sort(first); 
        second = sort(second); 


        while(i < first.size() && j < second.size()){

            if(first[i] <= second[j]){
                arr[k] = first[i]; 
                i++; 
            }
            else{
                arr[k] = second[j]; 
                j++; 
            }
            k++; 
        }

        while(i < first.size()){
            arr[k] = first[i]; 
            i ++; 
            k ++;  
        }
        while(j < second.size()){
            arr[k] = second[j]; 
            j++; 
            k++; 
        }
    }
    return arr; 
}
