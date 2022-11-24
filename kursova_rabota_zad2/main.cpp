#include <iostream>

using namespace std;

int main()
{
    int n=0;
    cout<<"Enter matrix(n X n) size: ";
    cin>>n;
    int matrix[n][n];
    cout<<"Enter "<<n*n<<" elements: "<<"\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }

    int counter=0;
    int times=n-1;
    bool isZero=true;
    int flag=1;
    for(int k=0;k<n-1;k++)
    {       //За диагонали над обратния диагонал
        for(int i=times-1,j=0;i>=0,j<=times-1;i--,j++)
        {
            if(matrix[i][j]!=0)
            {
                isZero=false;
            }
        }
        if(isZero)
        {
            counter++;
        }
        isZero=true;
        times--;
        //За диагонали под обратния диагонал
        for(int i=n-1,j=flag;i>=flag,j<=n-1;i--,j++)
        {
            cout<<matrix[i][j]<<" ";//del
            if(matrix[i][j]!=0)
            {
                isZero=false;
            }
        }
        cout<<" ";//del
        if(isZero)
        {
            counter++;
        }
        isZero=true;
        flag++;
    }
    cout<<"\n"<<"The count of diagonals with zeroes, parallel to the reverse diagonal is: "<<counter<<"\n";


    return 0;
}
