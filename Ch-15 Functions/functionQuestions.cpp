#include <iostream>
#include <cstdlib> // abs ( )
#include <cstring> //  strcmp ( )
#include <cctype> // tolower ( )
#include<math.h> // sin ( ), cos ( ), etc
#include<conio.h> // clrscr ( )

using namespace std;

//program takes a character from the keyboard and prints it on the screen
void getCharQuestion() {
    char ch;
    ch = getchar();
    putchar(ch);
}

// statement gets a string and stores it in the variable A
void getCharQuestionTwo() {
    char a[100];
    cout << "Input  a String :\n" << endl;
    gets(a);
    puts(a);
}

// To count the number of characters and words in a sentence entered by the user
void charQuestionThree() {
    char ch;
    int charCount = 0;
    int wordCount = 0;
    while ((ch = getche()) != '\r') {
        if (ch == ' ')
            wordCount += 1;
        else
            charCount += 1;
    }
    cout << "No. of characters " << charCount << endl;
    cout << "No. of words " << wordCount;
}

// :: a represents the global variable. The symbol : : is called scope resolution operator
// The storage class of a variable determines which parts of a program can access
// it and how long it stays in existence. The storage class can be classified as (i)
// Automatic (ii) Register (iii) Static (iv) External.

/*Mathematical functions are defined in math.h file.
 Character functions require ctype.h file.
 String functions are present in the string.h file.
 Functions which do not return any value are known as void functions.
 The variables which supply the values to a calling function are called as actual
 parameters.
 Variables declared in a program are classified as local variable and global
 variable.
 Functions can be called using call by value or call by reference methods.
 Inline functions are used in the programs, to save the execution time*/

int main() {
//    getCharQuestion();
//    getCharQuestionTwo();
    charQuestionThree();
    return 0;
}
