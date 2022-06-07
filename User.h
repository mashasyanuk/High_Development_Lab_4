#pragma once
#include <string>
using namespace std;

class User {
protected:
    string name;
    string surname;
    int age{};
    string login;
    string password;
    virtual void Dummy() = 0;

public:
    User();
    User(string _name, string _surname, int _age, string _login, string password);
    string getName();
    string getSurname();
    int getAge();
    string getLogin();
    string getPassword();
    void setName(string);
    void setSurname(string);
    void setAge(int);
    void setLogin(string);
    void setPassword(string);
    void print();
};
