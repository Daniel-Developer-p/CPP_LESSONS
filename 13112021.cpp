#include <iostream>

class D {
public:
    virtual void display() {
        std::cout << "A" << std::endl;
    }
};

class C : public D {
public:
    virtual void display(int i) {
        std::cout << "A" << std::endl;
    }
};

class B : public C {
public:
    virtual void display(int i) {
        std::cout << "A" << std::endl;
    }
};

class A : public B {
public:
    virtual void display(int i) {
        std::cout << "A" << std::endl;
    }
};

int main() {
    A a;
    B b;
    C c;
    D d;

    D& linkToA = a;
    linkToA.display();

    a.display(1);
    b.display(2);
    c.display(3);
    d.display();
}
