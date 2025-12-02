#include<iostream>
using namespace std;
int main()
{
     int m;
    cout<<"number of row and column"<<endl;
    cin>>m;
    cout<<"elements of matrix a"<<endl;
    int a[m][m];

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    cout<<"transpose matrix of a"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
