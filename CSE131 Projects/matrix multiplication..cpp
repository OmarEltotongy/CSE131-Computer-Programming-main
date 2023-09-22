#include <iostream>

using namespace std;

int main ()
{   
    int arr1[100][100] , arr2[100][100], multiarr[100][100]={0};

    int n , m , k , l ;
    //take the first array dim.
    cout << "please enter the first array row and col. max 100" <<endl;
    cin >> n >> m;

    //take the sec array dim.
    cout << "please enter the sec array row and col. max 100" <<endl;
    cin >> k >> l;

    if (m != k)
    {
        cout << "the multi can not be processed" <<endl;
    }
    else
    {
       //taking the elements of the first arr
       cout << "please enter the element of the first array" <<endl;
       for (int i = 0 ; i<n ; i++)
       {
           for (int j=0 ; j < m ; j++)
           {
               cin >> arr1[i][j];
           }
       }

        //taking the elements of the sec arr
       cout << "please enter the element of the sec array" <<endl;
       for (int i = 0 ; i<k ; i++)
       {
           for (int j=0 ; j < l ; j++)
           {
               cin >> arr2[i][j];
           }
       }

       //process of multi

       for (int i=0 ; i<n ; i++)
       {
           for (int j=0 ; j < l ; j++)
           {
               for (int cell=0 ; cell < m ; cell++)
               {
                   multiarr[i][j] += arr1 [i][cell] * arr2[cell][j];
               }
           }
       }

       // to output the multi arr 
       for (int i = 0 ; i<n ; i++)
       {
           for (int j=0 ; j <l  ; j++)
           {
               cout << multiarr [i][j] << "\t";
           }
            cout << endl;
       }
    }
    
    return 0;
}