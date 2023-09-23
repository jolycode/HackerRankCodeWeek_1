int flippingMatrix(int matrix_rows, int matrix_columns, int** matrix) {

  int quadrant_size = matrix_rows / 2;
  int sum = 0;
  for (int i = 0; i < quadrant_size; i++) {
    for (int j = 0; j < quadrant_size; j++) {
      int max_element = matrix[i][j];
      if (matrix[i][matrix_columns - 1 - j] > max_element) {
        max_element = matrix[i][matrix_columns - 1 - j];
      }
      if (matrix[matrix_rows - 1 - i][j] > max_element) {
        max_element = matrix[matrix_rows - 1 - i][j];
      }
      if (matrix[matrix_rows - 1 - i][matrix_columns - 1 - j] > max_element) {
        max_element = matrix[matrix_rows - 1 - i][matrix_columns - 1 - j];
      }
      sum += max_element;
    }
  }
  return sum;
}

