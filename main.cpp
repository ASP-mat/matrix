#include <iostream>
#include <iomanip>
using namespace std;

const int MAX=100;
void input(int mat[][MAX], int m, int n);
void write(int mat[][MAX], int m, int n);

int main()
{
    int A[MAX][MAX], B[MAX][MAX], m, n;
    cout<<"Broj redaka: ";
    cin>>m;
    cout<<"Broj stupaca: ";
    cin>>n;
    input(A,m,n);
    write(A,m,n);
    return 0;
}

void input(int mat[][MAX], int m, int n)
{
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
            cin>>mat[i][j];
    }
}

void write(int mat[][MAX], int m, int n)
{
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
            cout<<setw(5)<<mat[i][j];
        cout<<endl;
    }
}
