#include <iostream>

class Parent{
private:
    std:: string FirstName, Surname, LastName, OtherName;
    std:: string Spouse;
public:
    void setNames();
    std:: string getNames();
    std::string getFullNames();
    void setSpouse(Parent s);
    std:: string getSpouse();

};

void Parent:: setNames(){
    std:: cout << "Enter First Name: ";
    std:: cin >> FirstName;
    std:: cout << std:: endl;

    std:: cout << "Enter surname: ";
    std:: cin >> Surname;
    std:: cout << std:: endl;

    std:: cout << "Enter Last Name: ";
    std:: cin >> LastName;
    std:: cout << std:: endl;

    std:: cout << "Do you have any other names? \n";
    std:: string response;
    std:: cin >> response;

    if(response == "yes" ) {
        std:: cout << "Enter surname: ";
        std:: cin >> OtherName;
        std:: cout << std:: endl;
    }
}


    std::string Parent::getFullNames(){
        std::string myfullNames = FirstName + " "  + LastName + " " + Surname + " " + OtherName;
        return myfullNames;
    }
