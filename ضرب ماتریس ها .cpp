#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;

void multiplication(int**, int**, int, int, int );
int main()
{
    int n, m, k, i, j, **A, **B;
    cin >> n >> m >> k;
    A = new int* [n];
    for (i = 0; i < n; i++)
    {
        A[i] = new int[m];
        for (j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }
    B = new int* [m];
    for (i = 0; i < m; i++)
    {
        B[i] = new int[k];
        for (j = 0; j < k; j++)
        {
            cin >> B[i][j];
        }
    }
    multiplication(A, B, n, m, k);
}
void multiplication(int** A, int** B, int n, int m, int k)
{
    int i, j, w, ** C;
    C = new int* [n];
    for (i = 0; i < n; i++)
    {
        C[i] = new int[k];
        for (j = 0; j < k; j++)
        {
            C[i][j] = 0;
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < k; j++)
        {
            for (w = 0; w < m; w++)
            {
                C[i][j] += A[i][w] * B[w][j];
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < k; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}
