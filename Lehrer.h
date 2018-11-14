#pragma once;
#include <string>
#include <sstream>
#include "Person.h"
using namespace std;

class Lehrer : public Person{

private:
    string titel;
    string status;
    string faecher;

public:
    Lehrer (const string& name, double groesse, const string& titel, const string& status, const string& faecher): Person(name, groesse) {
        this->titel = titel;
        this->faecher = faecher;
        this->status = status;
    }

    const string &getTitel() const {
        return titel;
    }

    void setTitel(const string &titel) {
        Lehrer::titel = titel;
    }

    const string &getStatus() const {
        return status;
    }

    void setStatus(const string &status) {
        Lehrer::status = status;
    }

    const string &getFaecher() const {
        return faecher;
    }

    void setFaecher(const string &faecher) {
        Lehrer::faecher = faecher;
    }
    string text () {
        stringstream s;
        s << this->getName() << this->getGroesse() << this->status << this->faecher << this->titel << endl;
    }
};