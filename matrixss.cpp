#include <iostream>
using namespace std;
class Matrix
{
private:
    int a[2][2];
    int m;
    int n;

public:
    Matrix(int a[2][2], int m, int n)
    {

        for (int i = 0; i <= m - 1; i++)
            for (int j = 0; j <= n - 1; j++)
                this->a[i][j] = a[i][j];
        this->m = m;
        this->n = n;
    }
    Matrix operator*(Matrix);
    Matrix operator+(Matrix);
    Matrix operator-(Matrix);
    ostream& operator<<(ostream& o)
    {
return o;
    }
    void print()
    {
        cout << "\nOutput" << endl;
        for (int i = 0; i <= m - 1; i++)
        {
            for (int j = 0; j <= n - 1; j++)

                cout << a[i][j] << "\t";

            cout << endl;
        }
    }
};
Matrix Matrix ::operator*(Matrix a)
{
    int result[2][2] = {0};
    for (int i = 0; i <= m - 1; i++)
        for (int j = 0; j <= n - 1; j++)
            for (int k = 0; k <= m - 1; k++)
                result[i][k] += this->a[i][j] + a.a[j][k];
    Matrix mx(result, m, n);
    return mx;
}
Matrix Matrix ::operator+(Matrix a)
{
    int result[2][2] = {0};
    for (int i = 0; i <= m - 1; i++)
        for (int j = 0; j <= n - 1; j++)
            result[i][j] += this->a[i][j] + a.a[i][j];
    Matrix mx(result, m, n);
    return mx;
}
Matrix Matrix ::operator-(Matrix a)
{
    int result[2][2] = {0};
    for (int i = 0; i <= m - 1; i++)
        for (int j = 0; j <= n - 1; j++)
            result[i][j] += this->a[i][j] - a.a[i][j];
    Matrix mx(result, m, n);
    return mx;
}
int main()
{

    int a[2][2] = {{1, 2}, {3, 4}};
    Matrix m1(a, 2, 2);
    m1.print();
    int b[2][2] = {{2, 4}, {4, 2}};
    Matrix m2(b, 2, 2);
    Matrix m3(b,2,2);
    m2 = m3 + m3;
    m2.print();
    m2 = m3 * m3;
    m2.print();
    m2 = m3 - m3;
    cout<<m1;
    return 0;
}