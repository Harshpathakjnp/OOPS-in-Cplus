#include <iostream>
using namespace std;
class Matrix
{
    int m, n;
    int arr[2][2];

public:
    Matrix(int arr[2][2], int m, int n)
    {
        int i, j;
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
                this->arr[i][j] = arr[i][j];
        }
    }

public:
    void print()
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << arr[i][j] << "\t";
            }
            cout << endl;
        }
    }
    public:
    int determinant()
{
    int value;
    value=(this->arr[0][0]*this->arr[1][1]) - (this->arr[0][1]*this->arr[1][0]);
    return value;
} 

    Matrix operator*(Matrix);
    Matrix operator+(Matrix);
    Matrix operator-(Matrix);
    int operator==(Matrix);
    int operator>(Matrix);
    int operator<(Matrix);
    Matrix operator/(Matrix);

    friend ostream &operator<<(ostream &out, const Matrix &m1);
};

Matrix Matrix ::operator*(Matrix arr)
{
    int result[2][2] = {0};
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            for (int k = 0; k < 2; k++)
                result[i][k] += this->arr[i][j] + arr.arr[j][k];
    Matrix mx(result, 2, 2);
    return mx;
}
Matrix Matrix ::operator+(Matrix arr)
{
    int result[2][2] = {0};
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            result[i][j] += this->arr[i][j] + arr.arr[i][j];
    Matrix mx(result, 2, 2);
    return mx;
}
Matrix Matrix ::operator-(Matrix arr)
{
    int result[2][2] = {0};
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            result[i][j] += this->arr[i][j] - arr.arr[i][j];
    Matrix mx(result, 2, 2);
    return mx;
}
Matrix Matrix ::operator/(Matrix arr)
{
    int result[2][2] = {0};
    int t;
    t = arr.arr[0][0];
    arr.arr[0][0] = arr.arr[1][1];
    arr.arr[1][1] = t;

    arr.arr[0][1] = -arr.arr[0][1];
    arr.arr[1][0] = -arr.arr[1][0];
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            for (int k = 0; k < 2; k++)
                result[i][k] += this->arr[i][j] + arr.arr[j][k];
    Matrix mx(result, 2, 2);
    return mx;
}

int Matrix ::operator==(Matrix arr)
{
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
        {
            if (this->arr[i][j] != arr.arr[i][j])
            {
                return 0;
            }
        }
    return 1;
}

int Matrix ::operator>(Matrix arr)
{
   return (this->determinant()>arr.determinant());
    
}

int Matrix ::operator<(Matrix arr)
{
   return (this->determinant()<arr.determinant());
    
}

ostream &operator<<(ostream &out, const Matrix &m1)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            out << m1.arr[i][j] << "\t";
        }
        out << endl;
    }
    fflush(stdout);
    out << endl;
    return out;
}
void reversing(int arr[2][2])
{
    int t;
    t = arr[0][0];
    arr[0][0] = arr[1][1];
    arr[1][1] = t;

    arr[0][1] = -arr[0][1];
    arr[1][0] = -arr[1][0];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << "     ";
        }
        cout << endl;
    }
}



int main()
{
    int a[2][2] = {{1, 2}, {1, 4}};
    Matrix m1(a, 2, 2);
    cout << m1 << endl;
    int b[2][2] = {{1, 2}, {1, 4}};
    Matrix m2(b, 2, 2);
    cout << m2 << endl;
    m2 = m1 / m2;
    cout << m2 << endl;

    //reversing(b);
    if (m2 == m1)
    {
        cout << "matched"<<endl;
    }
    else
        cout << "Unmatched"<<endl;

    if (m2 > m1)
    {
        cout << "greater"<<endl;
    }
    else
        cout << "less"<<endl;

    if (m2 < m1)
    {
        cout << "greater"<<endl;
    }
    else
        cout << "less"<<endl;

}
