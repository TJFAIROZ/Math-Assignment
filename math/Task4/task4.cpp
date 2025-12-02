#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"number of rows and columns"<<endl;
    cin>>m>>n;

    int a[m][n], b[m][n];
    cout<<"elements of matrix a"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"elements of matrix b"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>b[i][j];
        }
    }


    int s[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            s[i][j] = a[i][j] + b[i][j];
        }
    }

    cout<<"addition of matrices:"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }


    int M[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            M[i][j] = a[i][j] - b[i][j];
        }
    }

    cout<<"subtraction of matrices:"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }


    int mul[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            mul[i][j] = 0;
            for(int k=0;k<n;k++)
            {
                mul[i][j] = mul[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    cout<<"Multiplication of matrices:"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
