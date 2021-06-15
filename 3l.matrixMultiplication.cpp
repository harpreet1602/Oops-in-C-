#include<iostream>
using namespace std;
void multiplication(int arr1[][10],int arr2[][10],int m,int n,int p,int q)
{
    int c[m][q];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            c[i][j]=0;
            for(int k=0;k<n;k++)
            {
            c[i][j]=c[i][j]+arr1[i][k]*arr2[k][j];
            }
        }
    }
    cout<<"\nMatrix after multiplication:\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void input(int arr[][10],int r,int c)
{
    cout<<"\nEnter the elements of a matrix:\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
}
int main()
{   
    int m,n,p,q;
    cout<<"\nEnter the dimensions of matrix 1: ";
    cin>>m>>n;
    cout<<"\nEnter the dimensions of matrix 2: ";
    cin>>p>>q;
    int mat1[10][10];
    int mat2[10][10];
    while(n!=p)
    {
    cout<<"\nError:The no. of rows of first matrix should be equal to no. of columns of second matrix"; 
    cout<<"\nEnter the dimensions of matrix 1: ";
    cin>>m>>n;
    cout<<"\nEnter the dimensions of matrix 2: ";
    cin>>p>>q;
    }
    input(mat1,m,n);
    input(mat2,p,q);
    multiplication(mat1,mat2,m,n,p,q);
    return 0;
}