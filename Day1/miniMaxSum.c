/*
Given five positive integers, find the minimum and maximum values that can be calculated by summing 
exactly four of the five integers. Then print the respective minimum and maximum values as a single 
line of two space-separated long integers.

Example
arr= 1 3 5 7  9
The minimum sum is 1+3+5+7=16 and the maximum sum is 3+5+7+9. The function prints 16 24
*/

void miniMaxSum(int arr_count, int* arr) {
    int newarr[arr_count];

    for (int i = 0; i < arr_count; i++) {
        int total = 0; 
        for (int j = 0; j < arr_count; j++) {
            if (i != j) {
                total += arr[j];
            }
        }
        newarr[i] = total; 
    }
    
    int largest = newarr[0];
    int smallest = newarr[0]; 
    
    for (int i = 0; i < arr_count; i++) {
        if (newarr[i] > largest) {
            largest = newarr[i];
        }
        if (newarr[i] < smallest) {
            smallest = newarr[i];  
        }
    }
    printf("%d ", smallest); 
    printf("%d ", largest);

}



void miniMaxSum(int arr_count, int* arr) {
   long long totalSum = 0;
   
    for (int i = 0; i < arr_count - 1; i++) {
        for (int j = 0; j < arr_count - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < arr_count; i++) {
        totalSum += arr[i];
    }

    long long minSum = totalSum - arr[arr_count - 1];
    long long maxSum = totalSum - arr[0];

    printf("%lld %lld\n", minSum, maxSum);

}