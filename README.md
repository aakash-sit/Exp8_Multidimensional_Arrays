# 🔢 Experiment 8: To Study and Implement C++ 2D Arrays – Matrices

## 🎯 Aim:
To study and implement operations on **2D arrays (matrices)** in C++, including initialization, traversal, basic arithmetic operations (addition, subtraction), and utility operations such as transpose and diagonal summation.

---

## 📘 Theory:

In C++, a 2D array is essentially an array of arrays. It allows data to be stored in a tabular form — ideal for matrix-related operations. Matrix manipulation is a core part of many scientific and engineering applications.

A 2D array is declared as:

```cpp
datatype arrayName[rows][columns];
```

### 🧠 Key Concepts:

- **Matrix Initialization**: Static or dynamic input of matrix elements.
- **Traversal**: Accessing all elements using nested loops.
- **Matrix Addition/Subtraction**: Element-wise operation between two matrices of the same size.
- **Transpose**: Flipping matrix elements over the diagonal.
- **Diagonal Sum**: Summing up elements on the primary and/or secondary diagonal.

---

## 🔨 Procedure:

1. Start with defining matrix dimensions.
2. Input elements from the user or use static initialization.
3. Perform required matrix operations using nested loops.
4. Display results in a structured matrix format.
5. Use conditional checks to validate operations (e.g., dimension match for addition).
6. Test your code for different matrix sizes and values.

---

## 💡 Implemented Examples:

### ✅ Example 1: Matrix Addition

**Operation**: Adds two matrices element by element.

📌 *Condition*: Both matrices must be of the same dimension.

```cpp
Input:
Matrix A:
1 2 3
4 5 6

Matrix B:
7 8 9
1 2 3

Output:
Sum:
8 10 12
5 7 9
```

---

### ✅ Example 2: Transpose of a Matrix

**Operation**: Interchanges rows and columns.

```cpp
Input:
Matrix:
1 2 3
4 5 6

Output:
Transpose:
1 4
2 5
3 6
```

---

### ✅ Example 3: Sum of Diagonals

**Operation**: Computes the sum of the main diagonal elements (and optionally the secondary diagonal).

```cpp
Input:
Matrix:
1 2 3
4 5 6
7 8 9

Output:
Primary Diagonal Sum = 1 + 5 + 9 = 15
Secondary Diagonal Sum = 3 + 5 + 7 = 15
```

---

## 📚 Concepts Covered:

- Declaration & initialization of 2D arrays
- Nested loop usage
- Element-wise operations
- Matrix traversal patterns
- Logical condition checks for dimensions
- Real-world application of matrices

---

## 🧠 Learning Outcomes:

By the end of this experiment, you will be able to:

- Declare and use 2D arrays effectively.
- Perform arithmetic and logical operations on matrices.
- Handle user input for 2D structures.
- Understand the concept of data storage in tabular format.
- Write modular and readable matrix-related C++ programs.

---

## 🚀 Bonus Tip:

You can extend this experiment further by implementing:

- Matrix multiplication
- Identity matrix check
- Row and column-wise summation
- Sparse matrix representation

---

> 🧾 **Note**: Always validate the matrix dimensions before performing operations like addition, subtraction, or multiplication to avoid logical errors.

---
