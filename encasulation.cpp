/*

using the concept of encapsulation.

write an c++ program that can capture and dispaly program details.

i.e: name, registration number and program_code

*/

#include <iostream>
#include <string>
using namespace std;

class ProgramDetails {
private:
    string name;
    string regNumber;
    int programCode;

public:
    // Setter methods to set the details
    void setName(string newName) {
        name = newName;
    }

    void setRegNumber(string newRegNumber) {
        regNumber = newRegNumber;
    }

    void setProgramCode(int newProgramCode) {
        programCode = newProgramCode;
    }

    // Getter methods to display the details
    void displayDetails() {
        cout << "Program Name: " << name << endl;
        cout << "Registration Number: " << regNumber << endl;
        cout << "Program Code: " << programCode << endl;
    }
};

int main() {
    ProgramDetails myProgram;

    // Setting program details using setters
    myProgram.setName("Computer Science");
    myProgram.setRegNumber("CS1234");
    myProgram.setProgramCode(5678);

    // Displaying program details using getter
    myProgram.displayDetails();

    return 0;
}
