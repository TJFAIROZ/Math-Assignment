#include<iostream>
using namespace std;
 int main()
 {

    int m;
    bool symmetric=true;
    cout<<"number of row and column"<<endl;
    cin>>m;

    cout<<"elements of metrix a"<<endl;
    int a[m][m];

     for(int i=0;i<m;i++)
     {  for(int j=0;j<m;j++)
       {
           cin>>a[i][j];
       }

     }

     for(int i=0;i<m;i++)
     {
         for(int j=i+1;j<m;j++)
         {
             if(a[i][j]!=a[j][i])
             {
                 symmetric=false;
                 break;
             }
             if(!symmetric)
             break;
         }
     }
     if (symmetric)
        cout << "The matrix is symmetric" << endl;
    else
        cout << "The matrix is not symmetric" << endl;


return 0;
 }
