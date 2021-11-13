#include <iostream>

class D {
public:
    virtual void display() {
        std::cout << "D" << std::endl;
    }
};

class C : public D {
};

class B : public C {
public:
    virtual void display() {
        std::cout << "B" << std::endl;
    }
};

class A : public B {
public:
    virtual void display(int i) {
        std::cout << "A" << std::endl;
    }
};

int main() {
    D d;
    C c;
    B b;
    d.display();
    c.display();
    b.display();

    /*
    D& linkToA = c;
    b.display();
    c.display();
    d.display();
    linkToA.display();
    */
}
