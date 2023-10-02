#include<iostream>
using namespace std;
signed main(){
    int n,m;
    cin>> n >> m;

    int a[n][m];

    for(int i=0; i<n; i++)
    {
        for ( int j=0;j<m;j++)
        cin>>a[i][j];
    }
    //spiral order print
    int row_start = 0,row_end = n-1,column_start = 0, column_end = m-1;
    while(row_start <= row_end && column_start <= column_end)
    {
        //for row_start
        for(int column = column_start; column<= column_end; column++)
        {
            cout << a[row_start][column] <<" ";
        }
        row_start++;
        //for column_end
        for(int row = row_start; row <= row_end; row++)
        cout << a[row][column_end] <<" ";
        column_end--;
        //for row_end
        for(int column = column_end; column>= column_start; column--)
            cout<< a[row_end][column] <<" ";
            row_end--;
            //for column_start
            for(int row = row_end; row >= row_start; row--)
            {
                cout<<a[row][column_start] <<" ";
            }
            column_start++;
    }
    return 0;
}