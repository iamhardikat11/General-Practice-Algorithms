//A C++ Program to Implement the rotation of a Matrix in clockwise manner
#include <bits/stdc++.h>
using namespace std;
#define R 4
#define C 4

//A Function to Rotate the matrix in clockwise fashion where m denotes the number of rows and n denotes the number of coulumns
void rotatematrix(int arr[][],int m,int n)
{
  int row=0,col=0;
  int prev,curr;
  
  /*
  row: starting row index
  col: starting column index
  prev: 
  curr: 
  */
  while(row<m && col<n)
  {
    if(row+1==m || col+1==n)
      break;
    //If the matrix is a Row Matrix or a Column Matrix we break the loop as there is no meaning of rotating that clockwise.
    //Store the element of the next row and the column into a variablee as it would replce the element of the current row
    prev=arr[row+1][col];
    
    /* Move element of first row from the remaining row*/
    for(int i=0;i<col;i++)
    {
      curr=arr[row][i];
      
      
      
      
    }
      
  }
  
  
  //Printing the Matrix using Nested Loops
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  return;
}
int main(void)
{
  int arr[][]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
  rotatematrix(arr,R,C);
  return 0;
}
