
#include <iostream>

class Integer
{
private:
    int num;

public:
    Integer();
    explicit Integer(int n);
    Integer(const Integer &n);
    ~Integer();
    int get() const;
    void set(int n);
    void print() const;
    int compare(const Integer n) const;
    Integer operator+(const Integer &rhs) const;
    Integer operator-(const Integer &rhs) const;
    Integer operator*(const Integer &rhs) const;
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
    std::cout << num;
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

Integer Integer::operator+(const Integer &rhs) const
{
    Integer temp;
    temp.set(this->num + rhs.num);
    return temp;
}

Integer Integer::operator-(const Integer &rhs) const
{
    Integer temp;
    temp.set(this->num - rhs.num);
    return temp;
}

Integer Integer::operator*(const Integer &rhs) const
{
    Integer temp;
    temp.set(this->num * rhs.num);
    return temp;
}

int main()
{
    Integer four(4);
    Integer five(5);
    Integer six(6);
    Integer seven(7);
    Integer eight(8);

    Integer result(four * (five * five * five) + six * (five * five) + seven * five + eight);

    std::cout << "The result of 4×5^3+6×5^2+7×5+8, following the order of operation, is: ";
    result.print();
    std::cout << std::endl;

    return 0;
}
