/*
Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. 
Print the decimal value of each fraction on a new line with 6 places after the decimal.


Output Format

Print the following  lines, each to  decimals:

proportion of positive values
proportion of negative values
proportion of zeros

*/
void plusMinus(int arr_count, int* arr) {

    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;
    for (int i = 0; i < arr_count; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }
    
    printf("%f\n", (float)positiveCount / arr_count);
    printf("%f\n", (float)negativeCount / arr_count);
    printf("%f\n", (float)zeroCount / arr_count);

}
/*
Input (stdin)
6
-4 3 -9 0 4 1

Your Output (stdout)
0.500000
0.333333
0.166667

Expected Output
0.500000
0.333333
0.166667

*/