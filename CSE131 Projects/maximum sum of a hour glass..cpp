#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main ()
{   
    //declaring the array //also we can use the vector library instead of this implement.
    int **arr = new int*[1000]; 
    for (int i = 0 ; i < 1000 ; i++) 
    arr[i] = new int[1000]; 
    
    int n , m ;
    //take the first array dim.
    cout << "please enter the first array row and col. max 1000" <<endl;
    cin >> n >> m;

    //to use the program repeatedly and random we will use srand() function to give a different value each time
    srand( time( 0 ) );

    //we will initialize the array with 0 at first
    for (int i = 0 ; i<1000 ; i++)
    {
        for (int j=0 ; j < 1000 ; j++)
        {
            arr[i][j]=0 ;
        }
    }

    // we will give to it a random number from 0 to 9
    for (int i = 0 ; i<n ; i++)
    {
        for (int j=0 ; j < m ; j++)
        {
            arr[i][j]=rand()%10 ;
        }
    }

    // printing the array
    for (int i = 0 ; i<n ; i++)
    {
        for (int j=0 ; j < m ; j++)
        {
            cout << arr[i][j] <<"\t";
        }
        cout << endl;
    }

    // now we want to find the max hour glass sum. Also, we must initialize the variable with zero to calculate the sum on it.
    //at first, we want to initialize tow variable to store the index of i and j at the maximum sum
    
    int result = 0 , sum , k ,l ;
    for (int i = 0 ; i<n ; i++)
    {
        sum = 0;
        for (int j=0 ; j < m ; j++)
        {

            sum = arr[i][j]+arr[i][j+1]+arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]; // the graphical representation of hour glass
            
            // now we will compare each hour glass with the pervious to have the largest sum
            result= max(result,sum);

            // here to save the index
            if (result == sum)
            {
                k = i;
                l=j ;
            }
        }
    }
    cout << endl;
    cout << "the max sum is: " << result << endl;

    // to print the graph of the max sum

    cout << arr[k][l] << "\t"<< arr[k][l+1] << "\t" <<arr[k][l+2] <<endl;
    cout << "\t" << arr[k+1][l+1] << endl;
    cout << arr[k+2][l] <<"\t"<<arr[k+2][l+1] <<"\t"<< arr[k+2][l+2] << endl;

    //Free each sub-array
    for(int i = 0; i < 1000; ++i) {
        delete[] arr[i];   
    }
    //Free the array of pointers
    delete[] arr;

    return 0;
}
