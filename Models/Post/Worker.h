#pragma once
#include "../../User.h"
#include "../Parcel/Parcel.h"
#include <string>
using namespace std;

class Worker : public User {
private:
    string position{" "};

public:
    Worker();
    Worker(string _name, string _surname, int _age, string _login, string _password, string _position);
    string getPosition();
    void setPosition(string);
    void print() const;
    virtual void Dummy() {};
    friend istream& operator>>(istream& in, Worker& worker);
    friend ostream& operator<<(ostream& out, const Worker& worker);
    friend bool operator>(Worker& w_1, Worker& w_2);
};
