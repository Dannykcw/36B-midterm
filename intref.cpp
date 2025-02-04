
#include <iostream>

class Integer
{
private:
    int num;

public:
    Integer();
    Integer(int n);
    Integer(const Integer &n);
    ~Integer();
    int get() const;
    void set(int n);
    void print() const;
    int compare(const Integer n) const;
};

Integer::Integer()
{
    std::cout << "A Integer object is created." << std::endl;
    num = 0;
}

Integer::Integer(int n)
{
    num = n;
}

Integer::Integer(const Integer &n)
{
    num = n.num;
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

int Integer::compare(const Integer n) const
{
    if (this->num < n.num)
    {
        return -1;
    }
    else if (this->num == n.num)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    Integer num1;
    Integer num2;
    std::cout << "Starting value of num1, num2 , and num3: " << std::endl;
    num1.set(5);
    std::cout << "printing num1's value:" << std::endl;
    num1.print();
    num2.set(6);
    std::cout << "Value of num2: " << num2.get() << std::endl;
    std::cout << "num3 is a copy of num1. num1 should be " << num1.get() << "." << std::endl;
    Integer num3(num1);
    std::cout << "printing num3's value:" << std::endl;
    num3.print();

    std::cout << "Compare num1 and num3: " << num1.compare(num3) << std::endl; // Should print 0
    std::cout << "Compare num1 and num2: " << num1.compare(num2) << std::endl; // Should print -1
    std::cout << "Compare num2 and num1: " << num2.compare(num1) << std::endl; // Should print 1

    return 0;
}
