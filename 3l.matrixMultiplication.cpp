// #include<iostream>
// using namespace std;
// void multiplication(int arr1[][10],int arr2[][10],int m,int n,int p,int q)
// {
//     int c[m][q];
//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<q;j++)
//         {
//             c[i][j]=0;
//             for(int k=0;k<n;k++)
//             {
//             c[i][j]=c[i][j]+arr1[i][k]*arr2[k][j];
//             }
//         }
//     }
//     cout<<"\nMatrix after multiplication:\n";
//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<q;j++)
//         {
//             cout<<c[i][j]<<" ";
//         }
//         cout<<"\n";
//     }
// }
// void input(int arr[][10],int r,int c)
// {
//     cout<<"\nEnter the elements of a matrix:\n";
//     for(int i=0;i<r;i++)
//     {
//         for(int j=0;j<c;j++)
//         {
//             cin>>arr[i][j];
//         }
//     }
// }
// int main()
// {   
//     int m,n,p,q;
//     cout<<"\nEnter the dimensions of matrix 1: ";
//     cin>>m>>n;
//     cout<<"\nEnter the dimensions of matrix 2: ";
//     cin>>p>>q;
//     int mat1[10][10];
//     int mat2[10][10];
//     while(n!=p)
//     {
//     cout<<"\nError:The no. of rows of first matrix should be equal to no. of columns of second matrix"; 
//     cout<<"\nEnter the dimensions of matrix 1: ";
//     cin>>m>>n;
//     cout<<"\nEnter the dimensions of matrix 2: ";
//     cin>>p>>q;
//     }
//     input(mat1,m,n);
//     input(mat2,p,q);
//     multiplication(mat1,mat2,m,n,p,q);
//     return 0;
// }

#include <iostream>
using namespace std;

class Matrix
{
    int a[10][10];
    int b[10][10];
    int c[10][10];
    int i,j,k;
    int m, n, p, q;
public:
    Matrix()
    {
        cout<<"\nEnter the dimensions of matrix 1: ";
        cin>>m>>n;
    
        cout<<"\nEnter the dimensions of matrix 2: ";
        cin>>p>>q;
    }
    void Mult();
    void InputMatrix();
    void OutputMatrix();
};

void Matrix::InputMatrix()
{
    cout << "\nEnter the values for the first matrix\n";
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "\nEnter the values for the second matrix\n";
    for (i=0; i<p; i++)
    {
        for (j=0; j<q; j++)
        {
            cin >> b[i][j];
        }
    }
}

void Matrix::Mult()
{
    if(n!=p)
    {
        cout<<"\nThe matrix multiplication is not possible\n";
        return;
    }

    for (i=0; i<m; i++)
    {
        for (j=0; j<q; j++)
        {
            c[i][j]=0;
            for (k=0; k<p; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void Matrix::OutputMatrix()
{
    cout << "\nThe Resultant Matrix is: \n";
    for (i=0; i<m; i++)
    {
        for (j=0; j<q; j++)
        {
            cout << c[i][j]<<" ";
        }
        cout << endl;
    }
}

int main()
{
    Matrix x;
    x.InputMatrix();
    x.Mult();
    x.OutputMatrix();
    return 0;
}