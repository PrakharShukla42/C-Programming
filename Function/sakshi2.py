import numpy as np
rows = int(input("Enter the number of rows: "))
cols = int(input("Enter the number of columns: "))
matrix1 = np.empty((rows, cols))
matrix2 = np.empty((rows, cols))
print("Enter the elements of the first matrix:")
for i in range(rows):
    for j in range(cols):
        matrix1[i][j] = int(input("Enter element Of Matrix  : "))
print("Enter the elements of the second matrix:")
for i in range(rows):
    for j in range(cols):
        matrix2[i][j] = int(input(f"Enter element of Matrix : "))
result = np.add(matrix1, matrix2)
print("Result of addition:")
print(result)
