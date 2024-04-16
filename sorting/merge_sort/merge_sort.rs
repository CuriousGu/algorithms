use std::ops::Div;


fn sort(arr: &mut Vec<i32>) -> &mut Vec<i32> {
    if arr.len() > 1 {
        let half = (arr.len()).div(2);

        let mut first =  arr[..half].to_vec();
        let mut second =  arr[half..].to_vec();        
        
        let first = sort(&mut first); 
        let second = sort(&mut second);

        let (mut i, mut j, mut k) = (0, 0, 0);

        while i < first.len() && j < second.len(){
            if first[i] <= second[j]{
                arr[k] = first[i]; 
                i += 1; 
            }else{
                arr[k] = second[j]; 
                j += 1; 
            }
            k += 1; 
        }

        while i < first.len() {
            arr[k] = first[i];
            i += 1;
            k += 1;
        }

        while j < second.len() {
            arr[k] = second[j];
            j += 1;
            k += 1;
        }
 
    }
    return arr;
}
