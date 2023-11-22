/*

using polymorphism.

write a c++ program implementing 

          a) function overriding.
          b) virtual function 
          
          NOTE : two programs in each case.............


*/

// 1)  FUNCTION OVERRIDING

               //EXAMPLE ONE


#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class overriding the base class method
class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal animalObj;
    Dog dogObj;

    animalObj.sound(); // Output: "Animal makes a sound"
    dogObj.sound();    // Output: "Dog barks"

    return 0;
}



                    //EXAMLE TWO


#include <iostream>
using namespace std;

// Base class with a virtual function
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class overriding the base class virtual method
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* animalObj = new Animal();
    Animal* dogObj = new Dog();

    animalObj->sound(); // Output: "Animal makes a sound"
    dogObj->sound();    // Output: "Dog barks"

    delete animalObj;
    delete dogObj;

    return 0;
}


// B) VIRTUAL FUNCTION

                    // 1)EXAMPLE ONE

#include <iostream>
using namespace std;

// Base class with a virtual function
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a Shape" << endl;
    }
};

// Derived classes without overriding the virtual function
class Circle : public Shape {
};

class Rectangle : public Shape {
};

int main() {
    Shape* circleObj = new Circle();
    Shape* rectangleObj = new Rectangle();

    circleObj->draw();    // Output: "Drawing a Shape"
    rectangleObj->draw(); // Output: "Drawing a Shape"

    delete circleObj;
    delete rectangleObj;

    return 0;
}


                    //EXAMPLE TWO

#include <iostream>
using namespace std;

// Base class with a virtual function
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a Shape" << endl;
    }
};

// Derived classes overriding the virtual function
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle" << endl;
    }
};

int main() {
    Shape* circleObj = new Circle();
    Shape* rectangleObj = new Rectangle();

    circleObj->draw();    // Output: "Drawing a Circle"
    rectangleObj->draw(); // Output: "Drawing a Rectangle"

    delete circleObj;
    delete rectangleObj;

    return 0;
}

