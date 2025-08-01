#include<iostream>
using namespace std;
//Identifying a parse matrix

int main()
{
    int row,col;
    int count=0;
    std::cout<<"Enter the row for the matrix:";
    std::cin>>row;

    std::cout<<"Enter the col for the matrix:";
    std::cin>>col;

    int  total_element=row*col;
    int parmatrix[row][col];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)                                   
        {
            cout<<"Enter element"<<"["<<i<<"]"<<"["<<j<<"]";                             // parmatrix = { {0,0,1,0},{2,1,0,0},{0,0,0,4}};
            cin>>parmatrix[i][j];
        }
    }


    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(parmatrix[i][j]==0)
            {
                count=count+1;
            }
        }
    }

    if(count>total_element/2)
    {
        std::cout<<"It is a Sparse matrix";
    }
    else{
        cout<<"It is not a sparce matrix";
    }
    return 0;
}