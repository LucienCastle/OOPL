//============================================================================
// Name        : Assignment_02.cpp
// Author      : Sumit Patil
// Roll Number : 21172
// Description : Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class matrix{
    int m,n,mat[10][10];
public:
  matrix()
  {
    m=n=0;
  }
  void read(int x,int y)
    {
        m=x;n=y;
        cout<<"Enter the elements of matrix :\n";
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>mat[i][j];
            }
            cout<<"\n";
        }

    }
    void sumdiagonal()
    {
        if(m==n)
        {
            int sum=0;
            for(int i=0;i<m;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        if(i==j)
                        {
                            sum+=mat[i][j];
                        }
                    }
                    cout<<"\n";
                }
            cout<<"\nSum of diagonal elements is :"<<sum;
        }
        else
            cout<<"\nDiagonal doesn't exist";
    }
    void transpose()
    {
        cout<<"\nTranspose of given matrix is :\n";
        for(int i=0;i<n;i++)
                {
                    for(int j=0;j<m;j++)
                    {
                        cout<<mat[j][i]<<" ";
                    }
                    cout<<"\n";
                }
    }
    void check()
    {
        if(m==n)
        {
            int flag=0;
            for(int i=0;i<m;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        if(i>j)
                            {
                             if(mat[i][j]==0)
                               flag=1;
                             else
                                 {
                                   flag=0;
                                   break;
                                 }
                            }
                    }
                 }
            if(flag==1)
            {
             for(int i=0;i<m;i++)
             {
                 for(int j=0;j<n&&j>i;j++)
                 {
                     if(mat[i][j]!=0)
                     {
                         flag=1;
                         break;
                     }
                     else
                         flag=0;
                 }
             }
             if(flag==0)
                 cout<<"\nIt isnt upper triangular";
             else
                 cout<<"\nGiven matrix is upper triangular matrix";
            }
            else
                 cout<<"\nIt isnt upper triangular";
        }
        else
            cout<<"\nCan't be checked";
    }
    void saddle()
    {
        int small,sa=0,sb=0,flag=0;
        for(int i=0;i<m;i++)
        {
         small=mat[i][0];
         for(int j=0;j<n;j++)
            {
                if(mat[i][j]<small)
                {
                    small=mat[i][j];
                    sa=i;sb=j;
                }
            }
         for(int k=0;k<n;k++)
            {
                if(small<mat[k][sb])
                {
                    flag=1;
                    break;
                }
                else
                    flag=0;
            }
         if(flag==1)
                cout<<"\nSaddle point doesn't exist for row "<<i+1;
         else
                cout<<"\nSaddle point exists at ("<<sa<<","<<sb<<")";
        }
  }
    void add(matrix b)
    {
     if(m==b.m&&n==b.n)
      {
         int sum[m][n];
         for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                    sum[i][j]=b.mat[i][j]+mat[i][j];
                }
                cout<<"\n";
            }
         cout<<"\nSum of the 2 matrices is :\n";
         for(int i=0;i<m;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<sum[i][j]<<"|";
                    }
                    cout<<"\n";
                }
      }
     else
         cout<<"\nThe matrices cant be added";

  }
    void subtract(matrix b)
    {
     if(m==b.m&&n==b.n)
      {
         int diff[m][n];
         char ch;
         cout<<"\nFor 1st-2nd type A for 2nd-1st type B :";
         cin>>ch;
         switch(ch)
         {
         case 'A':for(int i=0;i<m;i++)
                  {
                   for(int j=0;j<n;j++)
                   {
                    diff[i][j]=mat[i][j]-b.mat[i][j];
                   }
                   cout<<"\n";
                  }
                  cout<<"\nDifference of the 2 matrices is :\n";
                  for(int i=0;i<m;i++)
                  {
                   for(int j=0;j<n;j++)
                   {
                    cout<<diff[i][j]<<"|";
                   }
                   cout<<"\n";
                  }
                  break;
         case 'B':for(int i=0;i<m;i++)
                  {
                   for(int j=0;j<n;j++)
                   {
                    diff[i][j]=b.mat[i][j]-mat[i][j];
                   }
                   cout<<"\n";
                  }
                  cout<<"\nDifference of the 2 matrices is :\n";
                  for(int i=0;i<m;i++)
                  {
                   for(int j=0;j<n;j++)
                   {
                    cout<<diff[i][j]<<"|";
                   }
                   cout<<"\n";
                  }
                  break;
         default :cout<<"\nYou have entered wrong option";
                  break;
        }
      }
     else
         cout<<"\nThe matrices cant be subtracted";
    }
    void multi(matrix b)
    {
     if(n==b.m)
      {
         int multi[m][n],sum;
         for(int i=0;i<m;i++)
                {
                    for(int j=0;j<b.n;j++)
                    {sum=0;
                        for(int k=0;k<n;k++)
                        {
                            sum+=mat[i][k]*b.mat[k][j];
                        }
                        multi[i][j]=sum;
                    }
                }
         cout<<"\nProduct of the 2 matrices is :\n";
         for(int i=0;i<m;i++)
               {
                     for(int j=0;j<b.n;j++)
                     {
                      cout<<multi[i][j]<<"|";
                     }
                     cout<<"\n";
               }
      }
     else
         cout<<"\nThe matrices cant be multiplied";
     }
};
int main()
{
    int n,x,y;
    char ch;
    matrix a,b;
    cout<<"\nShow menu?(y or n)";
    cin>>ch;
    while(ch=='y'||ch=='Y')
    {
      cout<<"\nMENU:\n1.Enter matrices\n2.Sum\n3.Difference\n4.Product\n5.Transpose\n6.Saddle point\n7.Sum of diagonal elements\n8.Check\n9.Exit";
      cin>>n;
        switch(n)
        {
      case 1:cout<<"\nEnter rows and columns of 1st matrix";
             cin>>x>>y;
             a.read(x,y);
             cout<<"\nEnter rows and columns of 2nd matrix";
             cin>>x>>y;
             b.read(x,y);
             break;
        case 2:a.add(b);
               break;
        case 3:a.subtract(b);
               break;
        case 4:a.multi(b);
               break;
        case 5:cout<<"\nEnter the matrix whose transpose you want (a or b)";
             cin>>ch;
             switch(ch)
             {
             case 'a':a.transpose();
                      break;
             case 'b':b.transpose();
                      break;
             default :cout<<"\nYou have entered wrong option";
                      break;
             }
             break;
      case 6:cout<<"\nEnter the matrix(a or b)";
             cin>>ch;
             switch(ch)
             {
              case 'a':a.saddle();
                       break;
              case 'b':b.saddle();
                       break;
              default :cout<<"\nYou have entered wrong option";
                       break;
             }
             break;
      case 7:cout<<"\nEnter the matrix(a or b)";
             cin>>ch;
             switch(ch)
             {
              case 'a':a.sumdiagonal();
                       break;
              case 'b':b.sumdiagonal();
                       break;
              default:cout<<"\nYou have entered wrong option";
                      break;
             }
             break;
      case 8:cout<<"\nEnter the matrix(a or b)";
             cin>>ch;
             switch(ch)
             {
              case 'a':a.check();
                       break;
              case 'b':b.check();
                       break;
              default :cout<<"\nYou have entered wrong option";
                       break;
             }
             break;
      case 9:break;
      default:cout<<"\nYou have entered wrong option";
              break;
        }
      cout<<"\nShow menu again?(y or n)";
      cin>>ch;
    }
    return 0;
}
