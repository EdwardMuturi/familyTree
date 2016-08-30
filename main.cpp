#include <iostream>
#include <child.h>
#include <parents.h>
using namespace std;

int main()
{
    Parent Dad;
    child edward;
    Dad.setNames();
    std:: string Father = Dad.getFullNames();

    std:: cout << Father << std:: endl;

    edward.setNames();
    std::string child1= edward.getFullNames();
    std::cout << child1 << std::endl;
    return 0;
}
