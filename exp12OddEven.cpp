// #include<iostream>
// int main()
// {
//     FILE *f1,*f2,*f3;
//     int number,i;

//     printf("Contents of DATA file\n\n");
//     f1 = fopen("DATA.txt","w");  /* create a data file */
//     for(i=1;i<=5;i++)
//     {
//         scanf("%d",&number);
//         if(number==-1)break;
//         putw(number,f1);
//     }
//     fclose(f1);

//     f1 = fopen("DATA.txt","r");
//     f2 = fopen("ODD.txt","w");
//     f3 = fopen("EVEN.txt","w");

//     while((number = getw(f1)) != EOF) /* Read from Data file */

//     {
//         if(number%2==0)
//             putw(number,f3);
//         else
//             putw(number,f2);
//     }
//     fclose(f1);
//     fclose(f2);
//     fclose(f3);

//     f2 = fopen("ODD.txt","r");
//     f3 = fopen("EVEN.txt","r");

//     printf("\n\nContents of ODD file \n\n");
//     while((number = getw(f2)) != EOF)
//         printf("%4d",number);

//     printf("\n\nContents of EVEN file \n\n");
//     while((number = getw(f3)) != EOF)
//         printf("%4d",number);

//     fclose(f2);
//     fclose(f3);
// }


// #include<iostream>
// int main()
// {
//     FILE *fp1,*fp2,*fp3;
//     int n;
//     fp1=fopen("numbers.txt","r");
//     fp2=fopen("even.txt","w");
//     fp3=fopen("odd.txt","w");
    
//     while((n=getw(fp1))!=EOF)
//     {
//         if(n%2==0)
//         {
//             putw(n,fp2);
//         }
//         else 
//         {
//             putw(n,fp3);
//         }
//         // n=getw(fp1);
//     }
//     fclose(fp1);
//     fclose(fp2);
//     fclose(fp3);
//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    FILE *fptr1, *fptr2, *fptr3;
    int n, i, num;
    cout<<"Enter number of values : ";
    cin>>n;
    cout<<"\nEnter the values : ";
    fptr1 = fopen("NUMBERS.txt", "w");
    for(i = 0 ; i < n ; i++)
    {
        cin>>num;
        putw(num, fptr1);
    }
    fclose(fptr1);
    fptr1 = fopen("NUMBERS.txt", "r");
    fptr2 = fopen("ODD.txt", "w");
    fptr3 = fopen("EVEN.txt", "w");
    while((num = getw(fptr1)) != EOF)
    {
        if(num % 2 == 0){
            putw(num, fptr3) ;
        } else{
            putw(num, fptr2) ;
        }
    }
    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);
    fptr2 = fopen("ODD.txt", "r");
    fptr3 = fopen("EVEN.txt", "r");
    cout<<"\nContents of ODD file is : ";
    while((num = getw(fptr2)) != EOF){
       cout<<num<<" ";
    }
    cout<<"\n\nContents of EVEN file is : ";
    while((num = getw(fptr3)) != EOF){
        cout<<num<<" ";
    }
    fclose(fptr2);
    fclose(fptr3);
}