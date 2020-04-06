/*
Program name:C++ Files
Editor:Shen Po Heng
Date:02.05.2020 
goal:Files

The fstream library allows us to work with files.
ofstream	Creates and writes to files
ifstream	Reads from files
fstream		A combination of ofstream and ifstream: creates, reads, and writes to files
Ref:W3C School
*/

#include <iostream>
#include <fstream>
using namespace std;

int main () {
  // Create a text file
  ofstream file("file.txt");

  // Write to the file
  file << "Hello World!";
 
  // Close the file
  file.close();

  // Create a text string, which is used to output the text file
  string text;

  // Read from the text file
  ifstream file_2("file.txt");

  // Use a while loop together with the getline() function to read the file line by line
  while (getline (file_2,text)) {
    // Output the text from the file
    cout << text;
  }

  // Close the file
  file_2.close();
}

