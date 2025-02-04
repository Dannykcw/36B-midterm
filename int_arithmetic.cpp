
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
    Integer &Integer::add(const Integer &rhs);
    Integer &Integer::subtract(const Integer &rhs);
    Integer &Integer::multiply(const Integer &rhs);
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

Integer &Integer::add(const Integer &rhs)
{
    num += rhs.num;
    return *this;
}

Integer &Integer::subtract(const Integer &rhs)
{
    num -= rhs.num;
    return *this;
}

Integer &Integer::multiply(const Integer &rhs)
{
    num *= rhs.num;
    return *this;
}

int main()
{
    Integer four(4);
    Integer five(5);
    Integer six(6);
    Integer seven(7);
    Integer eight(8);

    Integer result;

    int temp = result.multiply(five).add(six).multiply(five).add(seven).multiply(5).add(8).get();

    std::cout << "The result of 4×5^3+6×5^2+7×5+8, following the order of operation, is: " << temp << std::endl;

    return 0;
}
