int findMedian(int arr_count, int* arr) {
    
    for (int i = 0; i < arr_count - 1; i++) {
        for (int j = 0; j < arr_count - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    if (arr_count % 2 != 0) {
        return arr[arr_count / 2];
    } else {
        int mid1 = arr[(arr_count - 1) / 2];
        int mid2 = arr[arr_count / 2];
        return (mid1 + mid2) / 2;
    }
 
}




find median of unsorted array

EX
arr = 5 3 1 2 4 
sorted arr = 1 2 3 4 5
median is 3