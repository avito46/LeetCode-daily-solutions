class Solution {
    int[][] arr;
    int row;
    int col;

    // Required by the judge system
    Solution() {
        // Empty
    }

    // Your style: constructor with rows and columns
    Solution(int r, int c) {
        row = r;
        col = c;
        arr = new int[row][col];
    }

    public int[][] transpose(int[][] matrix) {
        // Get row and col from input matrix
        row = matrix.length;
        col = matrix[0].length;

        // No need to assign/copy into arr unless required â directly use matrix
        int[][] transposed = new int[col][row];

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                transposed[j][i] = matrix[i][j];
            }
        }

        return transposed;
    }

    // For local testing only
    public static void main(String[] args) {
        Solution obj = new Solution();

        int[][] matrix = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };

        int[][] result = obj.transpose(matrix);

        for (int i = 0; i < result.length; i++) {
            for (int j = 0; j < result[0].length; j++) {
                System.out.print(result[i][j] + " ");
            }
            System.out.println();
        }
    }
}
