#include <iostream>
// #include <boost/lexical_cast.hpp>   // for lexical_cast
#include <bits/stdc++.h>
#include <string>
#include <sstream> // for string streams
using namespace std;
int main()
{
    #include "../fileio.h"

    const char *strf = "1234.5";    // we ca use int d, float f, double lf
    float xf;
    sscanf(strf, "%f", &xf);
    printf("\nThe value of xf : %f", xf);


    string str1 = "45";
    string str2 = "3.14159";
    string str3 = "31337 geek";

    int myint1 = stoi(str1);
    int myint2 = stoi(str2);
    int myint3 = stoi(str3);

// to i, l, ll, f
    cout << "stoi(\"" << str1 << "\") is "
         << myint1 << '\n';
    cout << "stoi(\"" << str2 << "\") is "
         << myint2 << '\n';
    cout << "stoi(\"" << str3 << "\") is "
         << myint3 << '\n';

    char* str11 = "45";
    char* str22 = "3.14159";
    char* str33 = "31337 geek";
    int num1 = atoi(str11);
    int num2 = atoi(str22);
    int num3 = atoi(str33);

    cout << "atoi(\"" << str1 << "\") is " << num1 << '\n';
    cout << "atoi(\"" << str2 << "\") is " << num2 << '\n';
    cout << "atoi(\"" << str3 << "\") is " << num3 << '\n';

    /*================================================================================================
    ================================================================================================*/

    // METHOD-1
    string str = "5";
    string str1 = "6.5";

    // Initializing f_value with casted float
    // f_value is 6.5
    float f_value = boost::lexical_cast<float>(str1);

    // Initializing i_value with casted int
    // i_value is 5
    int i_value = boost::lexical_cast<int>(str);

    //Displaying casted values
    cout << "The float value after casting is : ";
    cout << f_value << endl;
    cout << "The int value after casting is : ";
    cout << i_value << endl;



    // METHOD-2
    // Declaring float
    float ff_val = 10.5;

    // Declaring int
    int ii_val = 17;

    // lexical_cast() converts a float into string
    string strf = boost::lexical_cast<string>(ff_val);

    // lexical_cast() converts a int into string
    string stri = boost::lexical_cast<string>(ii_val);

    // Displaying string converted numbers
    cout << "The float value in string is : ";
    cout << strf << endl;
    cout << "The int value in string is : ";
    cout << stri << endl;

    /*================================================================================================
    ================================================================================================*/
    // METHOD-1
    int num = 2016;

    // declaring output string stream
    ostringstream str1;

    // Sending a number as a stream into output
    // string
    str1 << num;

    // the str() converts number into string
    string geek = str1.str();

    // Displaying the string
    cout << "The newly formed string from number is : ";
    cout << geek << endl;



    // METHOD-2
    string s = "12345";

    // object from the class stringstream
    stringstream geek(s);

    // The object has the value 12345 and stream
    // it to the integer x
    int x = 0;
    geek >> x;

    // Now the variable x holds the value 12345
    cout << "Value of x : " << x;

    /*================================================================================================
    ================================================================================================*/

    // Declaring integer
    int i_val = 20;

    // Declaring float
    float f_val = 30.50;

    // Conversion of int into string using
    // to_string()
    string stri = to_string(i_val);

    // Conversion of float into string using
    // to_string()
    string strf = to_string(f_val);

    // Displaying the converted strings
    cout << "The integer in string is : ";
    cout << stri << endl;
    cout << "The float in string is : ";
    cout << strf << endl;

    /*================================================================================================
    ================================================================================================*/



    return 0;
}