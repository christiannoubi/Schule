#pragma once;
#include <string>
#include <sstream>
#include "Adresse.h"
using namespace std;

class Person: public Adresse {

private:
    Adresse adresse;
    string name;
    double groesse;

public:
    Person ( const Adresse &adresse, const string& name, double groesse )
    {

    }
    Person () {

    }

    const Adresse &getAdresse() const {
        return adresse;
    }

    void setAdresse(const Adresse &adresse) {
        Person::adresse = adresse;
    }

   string getName() const {
        return name;
    }

    void setName(const string &name) {
        Person::name = name;
    }

    double getGroesse() const {
        return groesse;
    }

    void setGroesse(double groesse) {
        Person::groesse = groesse;
    }
};