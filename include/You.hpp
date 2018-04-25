//Thomas Gilman

#include <Foo.hpp>
#include <iostream>

using namespace std;

#ifndef YOU_HPP
#define YOU_HPP

ostream& operator<<(ostream &out, Foo& foo) //friend function
{
    out << foo.getBar();
    return out;
}

/*class You : public Foo
{
    public:

        int getBar() const;
    private:
        int bar;
};*/


#endif // YOU_HPP
