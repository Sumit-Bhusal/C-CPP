#include <iostream>
using namespace std;
class Matrix {
    int row, col;
    int **mat;
public:
    Matrix(int r, int c) {
        row = r;
        col = c;
        mat = new int*[row];
        for (int i = 0; i < row; i++) {
            mat[i] = new int[col];
        }}
    void read() {
        cout << "Enter the matrix elements:"<<endl;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cin >> mat[i][j];
            }}}
    void show() {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << mat[i][j] << " ";
            }
            cout<<endl;
        }}
    Matrix operator+(Matrix &m) {
        Matrix temp(row, col);
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                temp.mat[i][j] = mat[i][j] + m.mat[i][j];
            }}
        return temp;
    }
    Matrix operator*(Matrix &m) {
        Matrix temp(row, m.col);
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < m.col; j++) {
                temp.mat[i][j] = 0;
                for (int k = 0; k < col; k++) {
                    temp.mat[i][j] += mat[i][k] * m.mat[k][j];
                }}}
        return temp;
    }};
int main() {
    int r1, c1, r2, c2;
    cout<<"Enter the number of rows and columns of matrix 1:\n";
	cin >> r1 >>c1;
	Matrix m1(r1, c1);
    m1.read();
    cout<< "Enter the number of rows and columns of matrix 2:\n";    
	cin >> r2 >>c2;
    Matrix m2(r2, c2);
    m2.read();
    if (r1 == r2 && c1 == c2) {
        Matrix sum = m1 + m2;
        cout<<"Sum of matrices:"<<endl;
        sum.show();
    } else {
        cout<<"Matrices cannot be added"<<endl;
    }
    if (c1 == r2) {
        Matrix product = m1 * m2;
        cout<<"Product of matrices:"<<endl;
        product.show();
    } else {
        cout<<"Matrices cannot be multiplied"<<endl;
    }
   return 0;
}

