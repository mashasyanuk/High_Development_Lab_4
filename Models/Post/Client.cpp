#include "Client.h"
#include <string>
#include <iostream>
using namespace std;

Client::Client() {}
Client::Client(string _name, string _surname, int _age, string _login, string _password, int _codeNumber) :
        User(_name, _surname, _age, _login, _password) {
    codeNumber = _codeNumber;
}

int Client::getNumber() {
    return codeNumber;
}
void Client::setNumber(int _codeNumber) {
    codeNumber = _codeNumber;
}

istream& operator>>(istream& in, Client& client) {
    cout << "\nВведите имя клиента: ";
    in >> client.name;
    cout << "Введите фамилию клиента: ";
    in >> client.surname;
    cout << "Введите возраст клиента: ";
    in >> client.age;
    cout << "Введите логин клиента: ";
    in >> client.login;
    cout << "Введите пароль клиента: ";
    in >> client.password;
    return in;
}
ostream& operator<<(ostream& out, const Client& client) {
    client.print();
    return out;
}
bool operator>(Client& c_1, Client& c_2) {
    return c_1.name > c_2.name;
}

void Client::print() const {
    cout << "\nИмя: " << name << endl;
    cout << "Фамилия: " << surname << endl;
    cout << "Возраст: " << age << endl;
    cout << "Логин: " << login << endl;
    cout << "Пароль: " << password << endl;
    cout << "Кодовый номер посылки: " << codeNumber << endl;
}
