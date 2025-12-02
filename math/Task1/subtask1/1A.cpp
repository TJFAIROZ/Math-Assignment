#include<iostream>
using namespace std;
int main()
{

    int m,n;
    cout<<"number of row and column"<<endl;
    cin>>m>>n;

    cout<<"elements of metrix a"<<endl;
    int a[m][n];

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }

    }

    int c[n][m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            c[j][i]=a[i][j];
        }
    }

    cout<<"transpose metrix of a"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
