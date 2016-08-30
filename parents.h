#include <iostream>
#include <vector>

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

    /** std:: string Parent:: getNames(){
        std:: vector <std::string> names;
        int vector_len = names.size();
        names.reserve(vector_len); //improve performance by reserving a fixed amount of memory

        names.push_back(FirstName);
        names.push_back(LastName);
        names.push_back(Surname);
        names.push_back(OtherName);

        std::string FullNames;
        while(!names.empty()){
             FullNames += " "+ names.back();
             names.pop_back();
        }
        return FullNames;
    } **/

    std::string Parent::getFullNames(){
        std::string myfullNames = FirstName + " "  + LastName + " " + Surname + " " + OtherName;
        return myfullNames;
    }
