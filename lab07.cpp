#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{

    // get the filepath
    string filePath = "myFile.txt";

    // Open the file using ifstream
    ifstream file(filePath);

    // confirm file opening
    if (!file.is_open()) {
        // print error message and return
        cerr << "Failed to open file: " << filePath << endl;

        return 1;
    }

 

   int arr[16];

   for (int i = 0; i < 16; ++i) {

         file >> arr[i];

   }


    file.close();

    return 0;
}