 int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    
    
    int primarydiagonal=0;
    int secondarydiagonal=0;
    int absolutediff=0;
    
    for (int i = 0; i < arr_rows; i++) {
        primarydiagonal += arr[i][i];
    }

    for (int i = 0; i < arr_rows; i++) {
        secondarydiagonal += arr[i][arr_rows - 1 - i];
    }
    absolutediff = abs(primarydiagonal - secondarydiagonal);
    return absolutediff;
   
   

}

/*
Given a square matrix, calculate the absolute difference between the sums of its diagonals.

Input (stdin)
3
11 2 4
4 5 6
10 8 -12

Expected Output
15

Your Output (stdout)
15

*/