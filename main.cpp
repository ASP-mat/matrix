#include <iostream>
#include <iomanip>
using namespace std;

const int MAX=100;
void input(int mat[][MAX], int m, int n);
void write(int mat[][MAX], int m, int n);
void translate(int mat[][MAX], int &m, int &n);
void writeT(int mat[][MAX], int B[][MAX], int &m, int &n);

int main()
{
    int A[MAX][MAX], B[MAX][MAX], m, n;
    cout<<"Broj redaka: ";
    cin>>m;
    cout<<"Broj stupaca: ";
    cin>>n;
    input(A,m,n);
    cout<<"Matrica A -->\n";
    write(A,m,n);
    cout<<"Matrica B -->\n";
    writeT(A,B,m,n);
    cout<<"Matrica B -->\n";
    writeT(B,A,m,n);
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

void translate(int mat[][MAX], int B[][MAX], int &m, int &n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
            B[i][j]=mat[j][i];
    }
    int t;
    t=m;
    m=n;
    n=t;
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

void writeT(int mat[][MAX], int B[][MAX], int &m, int &n)
{
    translate(mat,B, m,n);
    write(B,m,n);
}
