#include<iostream>
#include<climits>
using namespace std;
int main()
{
    cout<<"***************1D ARRAY ******************"<<endl;
    // 1D array
   /*
    int n;
    cout<< max(34,56);

    cout<<"enter lengh:"<<endl;
    cin>>n;

    int array[n];

    for (int i = 0; i < n ; i++)
    {
        cin>> array[i];
    }

     for (int i = 0; i < n ; i++)
    {
        cout<< array[i]<<" ";
    }*/


    //2D array

    cout<<"**************2D ARRAY ***************"<<endl;
    //input
    int n,m;
    cout<<"enter the order of matrix [i][j]\n";
    cin>> n>> m;

    int arr[n][m];

    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < m ; j++)
        {
           cin>>arr[i][j];
        }
        
    }
    
    
    //output
    cout<<"2D matrix array :\n";
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < m ; j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    /*
    //searching in array
    cout<<"enter the value : ";
    int val;
    cin>>val;

    bool flag=false;

    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < m ; j++)
        {
            if (arr[i][j]==val)
            {
                flag=true;
            }
    
        }
        
    }

    if (flag==true)
    {
        cout<<"element found";
    }
    else
    {
        cout<<"element not found";
    }
    */
   

    //spiral order print
    cout<<endl;
    cout<<"******************\n";
    cout<<" spiral order \n";

    int row_start = 0 , row_end = n-1 , column_start = 0 , column_end = m-1 ; 

    while ( row_start<= row_end && column_start<=column_end )
    {
        // top left to right 

        for (int col = column_start; col <= column_end ; col++ )
        {
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;

        //from top to bottom (last column)

        for (int row = row_start; row<= row_end; row++ )
        {
            cout<<arr[row][column_end]<<" ";
        }
        column_end--;
        
        //from right to left (bottom)

        for (int col = column_end; col>=column_start  ;col--)
        {
            cout<<arr[row_end][col]<<" ";
        }
        row_end--;

        //from bottom to top (first column)

        for (int row =row_end ; row >= row_start ; row--)
        {
            cout<<arr[row][column_start]<<" ";
        }
        column_start++;
    
    }
    
    //matrix transpose
    cout<<endl<<"\n";
    cout<<"******************\n";
    cout<<"Transpose";
    for (int i = 0; i < n ; i++)
    {
        for (int j = i; j < m ; j++)
        {
            int temp = arr[i][j];
            arr[i][j]=arr[j][i] ;
            arr[j][i]=temp ;
        }
        cout<<endl;
    }

    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < m ; j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }

    //matrix multiplication 
    cout<<"*************************\n";
    int a1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int a2[3][4]={{1,2,3,4},{5,6,7,8},{4,5,6,7}};

    int ans[3][3];

    int sum ;

    cout<<"matrix multiplication \n";
    cout<<endl ;
    cout<<"matrix 1 :"<<endl;
    for (int i = 0; i < 3 ; i++)
    {
        for (int j = 0; j < 3 ; j++)
        {
           cout<<a1[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<<"matrix 2 :"<<endl;
    for (int i = 0; i <3 ; i++)
    {
        for (int j = 0; j <4 ; j++)
        {
           cout<<a2[i][j]<<" ";
        }
        cout<<endl;
        
    }

    cout<<"multiplication :"<<endl;

    for (int i = 0; i < 3 ; i++)
    {
        for (int j = 0; j < 4 ; j++)
        {
            ans[i][j]= 0 ;
        }
        
    }
    

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                ans[i][j]+= a1[i][k]*a2[k][j];
            }
        }
        
    }

    for (int i = 0; i < 3 ; i++)
    {
        for (int j = 0; j < 4 ; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    //matrix search (matrix in ascending order)
    cout<<"*********************matrix search ***********"<<endl;
    cout<<"matrix"<<endl;

    int asc[4][4]={{1,4,7,11},{2,5,8,12},{3,6,9,16},{10,13,14,17}};

    for (int i = 0; i < 4 ; i++)
    {
        for (int j = 0; j < 4 ; j++)
        {
            cout<<asc[i][j]<<" ";
        }
        cout<<endl;
        
    }

    int element;
    cout<<"emter the element to find : ";
    cin>>element;
/*
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (asc[i][j]== element)
            {
                cout<<"element found "<<endl;
            }
            
            
           
        }
        
     
    }*/
    
    return 0;
}
