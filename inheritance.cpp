/*
write a program in C++ implementing:
                    a) multilevel inheritance
                    b) hierachical inheritance
                    c) hybrid inheritance

*/

//MULTILEVEL INHERITANCE

#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    Vehicle() {
        cout << "This is a Vehicle." << endl;
    }
};

// Intermediate class inheriting from Vehicle
class Car : public Vehicle {
public:
    Car() {
        cout << "This is a Car." << endl;
    }
};

// Derived class inheriting from Car
class SportsCar : public Car {
public:
    SportsCar() {
        cout << "This is a Sports Car." << endl;
    }
};

int main() {
    SportsCar mySportsCar;
    return 0;
}


//HIERARCHICAL INHERITANCE

#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    void display() {
        cout << "This is a Shape." << endl;
    }
};

// Derived class 1
class Rectangle : public Shape {
public:
    void displayRect() {
        cout << "This is a Rectangle." << endl;
    }
};

// Derived class 2
class Circle : public Shape {
public:
    void displayCircle() {
        cout << "This is a Circle." << endl;
    }
};

int main() {
    Rectangle rect;
    Circle circle;
    
    rect.display();
    rect.displayRect();
    
    circle.display();
    circle.displayCircle();
    
    return 0;
}

//HYBRID INHERITANCE


#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void display() {
        cout << "This is an Animal." << endl;
    }
};

// Intermediate class inheriting from Animal
class Mammal : public Animal {
public:
    void displayMammal() {
        cout << "This is a Mammal." << endl;
    }
};

// Intermediate class inheriting from Animal
class Bird : public Animal {
public:
    void displayBird() {
        cout << "This is a Bird." << endl;
    }
};

// Derived class inheriting from Mammal and Bird
class Bat : public Mammal, public Bird {
public:
    void displayBat() {
        cout << "This is a Bat." << endl;
    }
};

int main() {
    Bat myBat;
    
    //myBat.display();
    myBat.displayMammal();
    myBat.displayBird();
    myBat.displayBat();
    
    return 0;
}



