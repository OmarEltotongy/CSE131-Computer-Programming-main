#include <iostream>
#include <string>
#include <math.h>
#include <climits>
#include <iomanip>
using namespace std;

int main()
{
	// Identify and correct the invalid C++ statements. 
    
    //a. float bus#1;
    //Correction
    //float bus_1 ; // the only sign we can use is underscore ( _ )
    
    /*________________________________________________________________*/
    
    //b. char ch=’mxyz’ 
    //Correction
	/*char ch1= 'm' ;
    char ch2= 'x' ;
    char ch3= 'y' ;
    char ch4= 'z' ;
    // we can use just one Letter in char 
    
    // Another solution, we can use string to declere all Letters
    //string ch = "mxyz";
    /*________________________________________________________________*/
 
    // c. int 115LLX;
    //Correction
  //  int LLX115 ;
    // We must start the name of var. by a letter not a number

    /*________________________________________________________________*/
    // d. double sue’s=$155.75;
    //Correction
    //double sue_s=155.75; // we must use just ( _ ) insted of ' .Also, we cant use ($) as it is a char not int
    /*________________________________________________________________*/
   // Identify and correct the invalid C++ statements.
   // a. char c='d';
   //Correction
   /*char c = 'd'; //it is normal, have no errors */ 
    /*________________________________________________________________*/
    //b. char c=’100’;
    //Correction
    //int c= 100; // char can not store an integer number
    /*________________________________________________________________*/
   //c. double $x=15.0;
   // double x=15.0; // we cant use this sign for declering var.
    /*________________________________________________________________*/
    //d. int ah#1=$155;
    //int ah_1=155; //we must use just ( _ ) insted of ' .Also, we cant use ($) as it is a char not int
    /*________________________________________________________________*/
    //e. float 112ffx=100;
    //float ffx112=100; // We must start the name of var. by a letter not a number
    /*________________________________________________________________*/
    //3- Which of the following is a valid C++ constant? Identify the corresponding data type.
    //a. 15 (is a constant (int type))
    //b. 'xyz' (not valid as it string but in double qoute or char but every letter in separet var)
    //c. '*' is constant (char type)
    //d. $ is constant (char type)
    //e. 25.123 is constant double type 
    //f. 15.0 is cons. float type
    //g. -999 is cons. int type
    //h. .123 is cons. double type
    //i. ‘x’ is cons. char type
    //j. “x” is cons. string type
    // k. ‘True’ is cons. boolien type
    //l. ‘-5’ is cons. int type
    //m. 32e-4 is cons. double type
    //4- Which of the following is a valid C++ statement? Justify your answers.
    // a. Train=Bus; not valid nethier the type or the value
    //b. Balance=Balance-$155.55 not valid as $ not value its a char.
    //c. ++(n*m); its not valid as there is no var to store on it also the expresion can not be used as function
    //Compute the following expressions if x=3, y=4, and z=5:-
    // a. x>y||y<z (True)
    // b. x%y + 𝑧 == 𝑥+𝑧 (true 8==8 )
    //c. 𝑥/y+ ++z (0+6 =6) 
    //d. (int)sqrt(floor(fabs(-144.45)))+(int)ceil(48.55)%7>10 (OUTPUT = 1 )
    /*double y= (int)sqrt(floor(fabs(-144.45)))+(int)ceil(48.55)%7>10 ;
    cout << y << endl;*/
    //e. (double)(x/y)+z (5) (As (x/y) considered as )
    //f. (double) x/y+z  (5.75)
    // g. !(y<=2) &&x%2 ==0 (false as false and true )
    /*________________________________________________________________*/
   // 6- Write a C program to compute the following formula:- Ans=√ b+c- 2bc cos(xr), where xr=xd*𝜋/180.0, and 𝜋=3.14159.
  /*  double b;
    double c;
    double xd;
    double xr;
    double ans;
    cout << "please enter b , c and Xd"<<endl;
    cin >>b>>c>>xd ;
  xr = xd*3.14159/180 ;
  ans = sqrt((b+c)- (2*b*c*cos(xr)));
  cout << ans <<endl ;*/
    /*________________________________________________________________*/

    /*double x=12.5;
    double y=9.2;
    int m=5;
    int n=2;
    x/ (float)m; //2.5
   (double) m*n; //10
    (float)(m/n)+y; //11.2
    (double)n/m+y; //9.45*/
    /*________________________________________________________________*/

    //8- Write a program that takes the distance in feet then converts and prints it in meters, given that 1 foot = 0.3048 meter.
    /*float inch;
    float meter;
    cout << "please enter number of inches"<<endl;
    cin >>inch;
    meter = inch/0.3048 ;
    cout << " the equvilent numbers of meters is: " << meter <<endl ;*/
    /*________________________________________________________________*/
    //9- What is the result of the following expressions, if the values of x= 10, y=5, and z=20?
    /*int x= 10;
    int y=5;
    int z=20;*/
    //a. A=x+y-z/2;
   //int A =x+y-z/2; //5
  // int  A=x*(y%2); //10
  // int A=x++-y++; //5
   // int A=--z + z--; //37
    //float A=--y + ++z - y++ / x++; //25 as (y/x is zero)
    /*________________________________________________________________*/
    // 10- Write the expected output of the following program.  
    /*int x = 15; int y = 2; int z; float r; z = x/y; cout<<z<<endl; //7
    r = x/y ; cout<<r<<endl; r = x/float(y); cout<<r<<endl; r = x/(y * 1.0); cout<<r<<endl; //7 ,,7.5 ,,7.5*/
    /*________________________________________________________________*/
    //Evaluate each of the following expressions if a = 5, b = 10, c = 15 and flag is
  /*  int a = 5;
    int b = 10;
    int c = 15;
    int flag=0;
   /* c == a+b || !flag; // true
    cout << (c == a+b || !flag) << endl;*/

    //cout << (a!=7&& flag || c>=6) <<endl; //true

    //cout << (!(b<=12)&&a%2==0) <<endl ; //false

    //cout << (!(a>5||c<a+b)) <<endl ; //true*/

    /*________________________________________________________________*/

    //Write a program that prints the ASCII code (decimal and hexadecimal value) of any given characters. (Hint: use hex and dec directives)
    /*char ch;
    cout << " please enter a Character " << endl;
    cin >> ch ;
    cout << " The dec ASCII code for " << ch << " is: " << dec << ch <<endl;
    cout << " The hex ASCII code for " << ch << " is: " << hex << ch <<endl;*/

   // 13- Write a program that generates the following table: (use the function setw())

    int a =1990 , b = 1991 , c= 1992 , d = 1993 ;
    int e = 135 , f= 7290 , g= 11300 , h= 16200 ;

    cout << " First col.               Second col. \n";
    cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " <<endl ;
    
    cout << setw(10) << a << "          " << setw(8) <<e <<endl ;
    cout << setw(10) << b << "          " << setw(9) <<f <<endl ;
    cout << setw(10) << c << "          " << setw(10) <<g <<endl ;
    cout << setw(10) << d << "          " << setw(10) <<h <<endl ;

 
    return 0;
}
