#include "User.h"
#include <iostream>
#include <string>
using namespace std;

User::User() {
    name = "";
    surname = "";
    age = 0;
    login = "";
    password = "";
}
User::User(string _name, string _surname, int _age, string _login, string _password) :
        name(_name), surname(_surname), age(_age), login(_login), password(_password) {}

string User::getName() {
    return name;
}
string User::getSurname() {
    return surname;
}
int User::getAge() {
    return age;
}
string User::getLogin() {
    return login;
}
string User::getPassword() {
    return password;
}

void User::setName(string _name) {
    name = _name;
}
void User::setSurname(string _surname) {
    surname = _surname;
}
void User::setAge(int _age) {
    age = _age;
}
void User::setLogin(string _login) {
    login = _login;
}
void User::setPassword(string _password) {
    password = _password;
}

void User::print() {
    cout << "Name: " << name << endl;
    cout << "Surname: " << surname << endl;
    cout << "Age: " << age << endl;
    cout << "Login: " << login << endl;
    cout << "Password: " << password << endl;
}
