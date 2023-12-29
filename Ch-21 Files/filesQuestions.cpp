#include <iostream>
#include<fstream>

// This is called output stream where stream is the flow of data and requires a fstream header file.
/*Writing data on the datafile:
 *  keyboard → memory → hard disk/ storage device
 *  This is called output stream where stream is the flow of data and requires an
    ofstream.h header file
*/
/*Reading data from datafile:
 * datafile → memory → output device (screen) or external storage device (hard disk/storage device)
 * This is called input stream and requires ifstream.h header file. If both input
   stream and output stream are used in the same program then header file
   fstream.h is required*/
/*Opening a file ( 2 ways )
 * using constructor function of a class or using the member function open ( ) of the class. */
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
