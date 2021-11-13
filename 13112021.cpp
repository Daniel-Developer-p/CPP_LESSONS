#include <iostream>

class D {
public:
    virtual void display() {
        std::cout << "D" << std::endl;
    }
};

class C : public D {
public:
    virtual void display() override {
        std::cout << "D" << std::endl;
    }
};

class B : public C {
public:
    virtual void display() override final {
        std::cout << "B" << std::endl;
    }
};

class A final : public B {
public:
    virtual void display(int i) {
        std::cout << "A" << i << std::endl;
    }
};

int main() {
    D d;
    C c;
    B b;
    A a;

    C& a_as_c = a;
    a_as_c.display();

    /*
    D& linkToA = c;
    b.display();
    c.display();
    d.display();
    linkToA.display();
    */
}
