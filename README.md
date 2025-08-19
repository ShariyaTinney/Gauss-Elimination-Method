
📐 Gauss Elimination Method in C++ 

📌 Overview
This project implements the "Gauss Elimination Method" in "C++" using 'std::vector', a safer and more flexible alternative to static arrays.
The "Gauss Elimination Method" is a direct technique for solving systems of linear equations. It converts the augmented matrix into an upper triangular matrix, followed by "backward substitution" to find the values of the unknowns.



🧮 Equation Format
A linear system:
a₁₁x₁ + a₁₂x₂ + ... + a₁ₙxₙ = b₁
a₂₁x₁ + a₂₂x₂ + ... + a₂ₙxₙ = b₂
...
aₙ₁x₁ + aₙ₂x₂ + ... + aₙₙxₙ = bₙ

is represented as an "augmented matrix" [A].[B], and the solution is found by transforming this matrix to "upper triangular form" and then solving the equations from bottom to top.


🎯 Features
✅ Solves linear systems using Gauss Elimination
✅ Uses dynamic memory allocation via 'std::vector'
✅ Performs forward elimination and backward substitution
✅ Accepts user input for matrix of any order
✅ Outputs results with 6 decimal precision
✅ Clean, readable, and modern C++ code



🛠 Requirements
To compile and run this program, you’ll need:
✅A "C++ compiler" (e.g., g++, clang++)
✅Any "C++ IDE" or code editor (optional):
  VS Code, CLion, Code::Blocks, etc.


🚀 How to Run

1.Clone the repository or download the code:
   git clone https://github.com/YOUR_USERNAME/gauss-elimination-vector-cpp.git
   cd gauss-elimination-vector-cpp
  

2.Compile the code:
   g++ main.cpp -o gauss_vector
 

3.Run the executable:
   ./gauss_vector
  



🧠 How It Works
1. The user inputs the order 'n' of the matrix.
2. The program takes an augmented matrix of size 'n x (n+1)'.
3."Forward Elimination" transforms the matrix into upper triangular form.
4."Backward Substitution" calculates the values of the unknowns starting from the last equation.


📁 File Structure
gauss-elimination-vector-cpp/
├── main.cpp      // C++ source code using vector
└── README.md     // Project documentation



📤 Sample Output

Input:
Enter the order of the matrix: 3

Enter the elements of the augmented matrix row-wise:
A[1][1] : 2
A[1][2] : -1
A[1][3] : 3
A[1][4] : 9
A[2][1] : 1
A[2][2] : 1
A[2][3] : 1
A[2][4] : 6
A[3][1] : 3
A[3][2] : -1
A[3][3] : -1
A[3][4] : 2


Output:
The solution is:
x1 = 1.000000
x2 = 2.000000
x3 = 3.000000




🔧 Customization
You can easily customize:
✅ The number of equations (n)
✅ The values of the augmented matrix
✅ The precision of output (using setprecision)



🤝 Contributions
Contributions are welcome!
To contribute:
1. Fork the repository
2. Create a new branch
3. Make your changes
4. Submit a Pull Request 


📧 Contact
For questions or suggestions, feel free to reach out:
"Shariya Tinney"— \[[shariyatinney.gmail@example.com](mailto:shariyatinney.gmail@example.com)]

> ⚠️ Don't forget to replace "YOUR_USERNAME", "Your Name", and "your.email@example.com" with your actual information before uploading to GitHub.


📚 Resources
[Gaussian Elimination – Wikipedia](https://en.wikipedia.org/wiki/Gaussian_elimination)
[C++ Vectors – cplusplus.com](https://cplusplus.com/reference/vector/vector/)
[Numerical Methods Notes – NPTEL](https://nptel.ac.in/courses/111/107/111107105/)



🧩 Language
![C++](https://img.shields.io/badge/C%2B%2B-100%25-blue)


💡 Future Enhancements
* Add "partial pivoting" to handle zero pivots
* Allow "file input" instead of interactive mode
* Extend to solve systems with "complex numbers"

