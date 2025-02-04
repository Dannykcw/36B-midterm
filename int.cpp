#include <iostream>

class Integer
{
private:
    int num;

public:
    Integer();
    Integer(int n);
    ~Integer();
    int get() const;
    void set(int n);
    void print() const;
};

Integer::Integer()
{
    std::cout << "A Integer object is created." << std::endl;
}

Integer::Integer(int n)
{
    num = n;
}

Integer::~Integer()
{
}

int Integer::get() const
{
    return num;
}

void Integer::set(int n)
{
    num = n;
}

void Integer::print(void) const
{
    std::cout << num << std::endl;
}

int main()
{
    Integer num1;
    Integer num2;
    Integer num3;
    // member "Integer::num" (declared at line 5) is inaccessibleC/C++(265)
    // num1.num = 0;
    num1.set(5);
    std::cout << "printing num1's value:" << std::endl;
    num1.print();
    num2.set(6);
    std::cout << "Value of num2: " << num2.get() << std::endl;
    num3.set(9);
    std::cout << "printing num3's value:" << std::endl;
    num3.print();

    return 0;
}
