#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"number of row and column"<<endl;
    cin>>m;
    int a[m][m];
    cout<<"elements of matrix"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    bool skewsymmetric=true;
    for(int i=0;i<m;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            if(a[i][j]!=-a[j][i])
            {
                skewsymmetric=false;
                break;
            }

        } if(a[i][i]!=0)
          {skewsymmetric=false;
          break;}

          if(!skewsymmetric)
          break;
    }
    if(skewsymmetric)
        cout<<"The matrix is skew symmetric"<<endl;
    else
        cout<<"The matrix is not skew symmetric"<<endl;

    return 0;
}
