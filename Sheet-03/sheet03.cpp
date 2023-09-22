#include <iostream>
#include <string>
#include <math.h>
#include <climits>
#include <iomanip>
//int factorial (int );
using namespace std;
/*int factorial (int fac)
{
    for (int i = 1 ; i < fac; i++)
    {
       fac = fac * i ;
    }
    
    return fac;

}
*/

int main()
{  /*1) For the following program segment:*/
    //frst to call : 55
    //second :100
    //last value :72

 /*   int i,j;
    for ( i=0; i<10; ++i)
 {
    for(j=0; j<i; j++)
    {
        cout << i*j;
        
        cout << endl;
        cout << "good luck"<< endl;
    }
 }*/

 /*-------------------------------------------------------------------------*/

    /*int x,i{0},n, count =0;
    cin >> x;

   do
   {
       while (i<n)
       {
           i++;
       }
        ++count;
   } while (x==i);*/

   /*---------------------------------------------------*/
    /*Write a program in C++ to calculate the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n).*/
    /*
    cout << "please enter limit" <<endl;
    int n;
    int sum{0};
    cin>>n;

   for (int i = 1; i <= n; i++)
   {
       sum = sum + (i*i);
     cout << i << "*" << i << " = " << i * i << endl;
   }
   
    cout <<  sum  << endl;*/
  /*---------------------------------------------------------------------*/

    /* 
    cout << " please enter the n limt : " ;
    double n;
    cin >>n;
    double sum{0};
    double i = 1;

    for ( n ; n>= i; n--)
    {
        sum += i/n ;
        cout << " the summations of n limit " << i << " / " << n << " = " << i/n << endl ;

    }
    cout << sum << endl;*/
    /*---------------------------------------------------------------------*/
    
    /*cout << " please enter the limit n : " ;
    double n ;
    cin>> n;
    double sum;
    int count{1};
    
    for (int i=1 ; i<=n ; i+=2)
    {
        sum += (i/pow(count,2)) ;

        cout << " the multiply: " << i << " / " << pow(count,2) << " = " << ((2*i)-1)/pow(count,2) <<endl;
        count++;
    }
    cout << sum <<endl;*/
    /*---------------------------------------------------------------------*/
 /*
    cout << "enter the n limit: ";
    double n;
    cin>>n;
    cout << "enter the k constant: ";
    double k;
    cin>> k;
    double sum;

    for (int i = 1 ; i <n ; i++)
    {
        sum+= i*k;
        cout << "the multiply of " << i << " * " << k << " = "<< i*k << endl;

    }
    cout << sum <<endl;*/

 /*---------------------------------------------------------------------------------------------------*/
   
   /* cout << "enter the A and the B to achevie the formula 1/a + 1/a+b + 1/a+2b .... ";
    double a,b;
    cin >>a>>b ;
    cout << "enter the n number : ";
    int n;
    cin >> n;
    double sum;

    for (int i=0 ; i <=n ; i++)
    {
        sum+= (1/(a+(i*b)));
        cout << " the a is: " << a << " + " << " i*b is " << i*b << " the formula is : " << (1/(a+(i*b))) <<endl;
    }
    cout << "the sum of formula is : " <<sum <<endl;*/

    /*---------------------------------------------------------------------------------------------------------------------*/

    /*cout << " plese enter the x at the first : ";
    double x;
    cin >>x;
    cout << "enter the n limit: " ;
    int n;
    cin >>n;
    double total;
    int sign = 1;

    for (int i = 1; i <n ; i+=2) //i for facorial
    {
        total = total + sign * pow (x,i) / factorial(i);

        sign *= -1;

    }
    cout << total <<endl;*/

    //5 trace 3456

    /*---------------------------------------------------------------------------------------------------------------------*/
    /* 
    cout << "enter num1 : ";
    int num1;
    cin >> num1;
    cout << "enter num2 : ";
    int num2;
    cin >> num2;
    double sum {0};

    for ( int i =1 ; i>=num1 && i<= num2; i++)
    {
        sum += i;

    }
    cout << "the sum and division by 2 is " << sum/2 <<endl;
    cout << "the sum and division by 3 is " << sum/3 <<endl;
    */
    // 7) Write a program to read a collection of exam scores ranging in values from 1 to100. Your program finds and prints the average, the maximum, and the minimumscores.
   
   /* double sum {0} ;
    double max{0};
    double min {100};
    double avrage{0};
    double grade;


    for(int i =1 ; i<=10; i++)
    {
        cout << " enter the "<< i << "st grade : ";
        cin >> grade;

        if (grade >10 || grade <1)
        {
            do
            {
            cout << "enter a valid number: ";
            cin >> grade;
            } while ( grade > 10 || grade < 1);
        }
        sum += grade;

        avrage = sum/10;
        if (grade> max)
        {
            max= grade;
        }
        if (grade < min)
        {
            min = grade;
        }
        
        

    }

    cout << " the avrage is : " << avrage <<endl;
    cout << " the max is : " << max <<endl;
    cout << " the min is : " << min <<endl;*/
    /*--------------------------------------------------------------------------------------------*/
    //Write a program that counts characters and words entered by the user. The program terminates when the user presses the enter key.
    /*
    cout << " please enter the pharse which u want to count its characters and words: " << endl;

    char current_cahr;
    char Prev_char;

    Prev_char=current_cahr;
    bool anyspce = false;
    int count_cahr {0};
    int count_word{1};

    current_cahr = getchar();
    while  (current_cahr != '\n')
    {
     Prev_char=current_cahr;
        if (current_cahr != ' ')
        {
            anyspce==true;
        }
        else 
        {
            count_cahr--;
        }
        count_cahr++;
        current_cahr = getchar();
        if (current_cahr == ' ' && Prev_char != ' ')
        {
            count_word++;
        }
        

    }
    if (count_word==1 && !anyspce)
    {
        count_word = 0;
    }
    if (Prev_char == ' ')count_word--;
        
    cout << "numbers of cahrs is: " << count_cahr<<endl;
    cout << "numbers of words is: " << count_word<<endl;


    /*--------------------------------------------------------------------------------------------*/
   /* int i,fact=1,number;    
    cout<<"Enter any Number: ";    
    cin>>number;    
    for(i=1;i<=number;i++)
    {    
      fact=fact*i;    
    }    
    cout<<"Factorial of " <<number<<" is: "<<fact<<endl;  
    /*--------------------------------------------------------------------------------------------*/
   


  return 0;  
}

