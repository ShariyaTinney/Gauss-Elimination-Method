
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Enter the order of the matrix: ";
    cin >> n;

    // Define augmented matrix A of size n x (n+1)
    vector<vector<float>> A(n, vector<float>(n + 1));
    vector<float> x(n);  // To store the solution
    float sum = 0.0f;

    cout << "\nEnter the elements of the augmented matrix row-wise:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= n; ++j) {
            cout << "A[" << i + 1 << "][" << j + 1 << "] : ";
            cin >> A[i][j];
        }
    }

    // Forward elimination to convert matrix to upper triangular form
    for (int j = 0; j < n; ++j) {
        for (int i = j + 1; i < n; ++i) {
            float factor = A[i][j] / A[j][j];
            for (int k = 0; k <= n; ++k) {
                A[i][k] -= factor * A[j][k];
            }
        }
    }

    // Backward substitution
    x[n - 1] = A[n - 1][n] / A[n - 1][n - 1];
    for (int i = n - 2; i >= 0; --i) {
        sum = 0;
        for (int j = i + 1; j < n; ++j) {
            sum += A[i][j] * x[j];
        }
        x[i] = (A[i][n] - sum) / A[i][i];
    }

    // Output the solution
    cout << "\nThe solution is:\n";
    cout << fixed << setprecision(6);
    for (int i = 0; i < n; ++i) {
        cout << "x" << i + 1 << " = " << x[i] << endl;
    }

    return 0;
}


