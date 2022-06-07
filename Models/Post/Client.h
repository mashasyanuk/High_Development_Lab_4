#pragma once
#include "../../User.h"

class Client : public User {
private:
    int codeNumber;

public:
    Client();
    Client(string _name, string _surname, int _age, string _login, string _password, int _codeNumber);
    int getNumber();
    void setNumber(int);
    void print() const;
    virtual void Dummy() {};
    friend istream& operator>>(istream& in, Client& client);
    friend ostream& operator<<(ostream& out, const Client& client);
    friend bool operator>(Client& c_1, Client& c_2);
};
