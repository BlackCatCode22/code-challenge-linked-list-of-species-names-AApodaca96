#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

  fstream myFile;
  myFile.open("animalNames.txt");

  if(myFile.is_open()) {

    string line;
    while(getline(myFile, line)) {

      // Convert to lowercase
      transform(line.begin(), line.end(), line.begin(), ::tolower);

      // Check each line
      if(line.find("hyena") != string::npos) {
        cout << "Found hyena!" << endl;
      }
      else if(line.find("lion") != string::npos) {
        cout << "Found lion!" << endl;
      }
      //...check for other animals

    }

    myFile.close();

  } else {
    cout << "Unable to open file";
  }

  return 0;
}
