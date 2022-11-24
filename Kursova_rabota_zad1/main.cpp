#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    int maxEl = INT_MIN;
    int minEl = INT_MAX;
    int maxRow = 0;
    int minRow = 0;
    int matrix[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j]<<"  ";
        }
        cout<<"\n";
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]>maxEl)
            {
                maxEl = matrix[i][j];
                maxRow = i;
            }
            if(matrix[i][j]<minEl)
            {
                minEl = matrix[i][j];
                minRow = i;
            }
        }
    }
    cout<<"------------------\n";
    cout<<"min = "<<minEl<<"\n";
    cout<<"max = "<<maxEl<<"\n";
    for(int i=0;i<m;i++)
    {
        int t = matrix[maxRow][i];
        matrix[maxRow][i] = matrix[minRow][i];
        matrix[minRow][i]=t;
    }
    cout<<"------------------\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j]<<"  ";
        }
        cout<<"\n";
    }
    return 0;
}


