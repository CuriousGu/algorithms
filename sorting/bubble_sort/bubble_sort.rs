fn sort(arr: &mut [i16]){
    let mut counter = 0; 
    
    'max_iter: loop{
        for index in 0..(arr.len()-1){
            if arr[index] > arr[index+1]{
                let temp: i16 = arr[index]; 
                arr[index] = arr[index+1]; 
                arr[index+1] = temp; 
            }
        }
    if counter == arr.len() - 1{
        break 'max_iter; 
        }
    else {counter += 1;}    
    }
}
