
// This program demonstrates how to read and write to a file using fstream objects
#include <fstream>
#include <iostream>

int main() {
  // Create an ofstream object to write to a file
  std::ofstream outfile;
  outfile.open("example.txt");

  // Write some data to the file
  outfile << "This is a test" << std::endl;

  // Close the file
  outfile.close();

  // Create an ifstream object to read from the same file
  std::ifstream infile;
  infile.open("example.txt");

  // Read data from the file and print it to the console
  std::string line;
  while (std::getline(infile, line)) {
    std::cout << line << std::endl;
  }

  return 0;
}