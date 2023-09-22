#include <iostream>
#include <string>
#include <math.h>
#include <climits>
#include <iomanip>

using namespace std;

int main()
{ /*1) Find the value of x for each of the following program segments*/
    // first : 3
    // second : 13
    /*------------------------------------------------------------------------------------------------*/
 //2 What is the value which assigned to x when y=12.0 and y=5.02
  //first y = 12 ----- X = 15
  //second y= 5 ------ X = 25
    /*------------------------------------------------------------------------------------------------*/
  //3) Write a program to determine whether an integer is even or odd.
  /*int num;
  cout << "please enter the number to determine whether the integer is even or odd." << endl;
    cin >> num;
    if (num % 2 == 0)
    cout << " the number is even "<<endl;
    else if (num%2 ==1 )
    cout << " the number is odd" << endl;
    else
    cout << "please enter a valid number" <<endl;*/
    /*------------------------------------------------------------------------------------------------*/
    //4) What is y after the following switch statement is executed?
  /* int x = 3;
   int y = 3;
    switch(x+3)
    { 
    case 6: y = 1;
    default: y += 1; // y =2 as there is no break
    }*/
   /*5) Use a switch statement to rewrite the following if statement
   int a;
   int x;
   switch (a)
   {
    case 1 :
    x+=5;
    break;
    
    case 2:
    x+=10;
    break;

    case 3 :
    x+=16;
    break;
    
    case 4:
    x+=34;
    break;
    }*/
   //6) Write a program that will sort 3 integers. The integers are entered from the keyboard and sorted in variables num1, num2, and num3 respectively. The program sorts the numbers so that num1 <= num2 <= num3.
    /*double num1;
    double num2;
    double num3;

    cout << "please enter ur 3 numbers separted by space "<< endl;
    cin >> num1 >> num2 >> num3 ;

    if (num1 > num2 && num1 > num3)
    {
        if (num2 > num3)
        cout << "the sequence of the numbers from the smallest to biggest is :  " << num3 << " then " << num2 << " then " << num1 <<endl;
        else
        cout << "the sequence of the numbers from the smallest to biggest is :  " << num2 << " then " << num3 << " then " << num1 <<endl;

    }
    else if(num2 > num1 && num2 > num3)
    {
        if (num1 > num3)
        cout << "the sequence of the numbers from the smallest to biggest is :  " << num3 << " then " << num1 << " then " << num2 <<endl;
        else
        cout << "the sequence of the numbers from the smallest to biggest is :  " << num1 << " then " << num3 << " then " << num2 <<endl;

    }
    else if(num3 > num2 && num3 > num1)
    {
        if (num1 > num2)
        cout << "the sequence of the numbers from the smallest to biggest is :  " << num2 << " then " << num1 << " then " << num3 <<endl;
        else
        cout << "the sequence of the numbers from the smallest to biggest is :  " << num2 << " then " << num1 << " then " << num3 <<endl;

    }*/
 // pb 7, 8 aasignment pb9 المعيد حلها

    return 0;
}