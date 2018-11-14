#pragma once;

#include <string>
#include <sstream>
#include "Adresse.h"
#include "Person.h"

using namespace std;

class Student : public Person{

private:
    double note;
    int semester;
    string studiengang;

public:
    Student () {

    }
    Student (const string& name, double groesse, double note, int semester, const string& studiengang)
 : Person (  name, groesse)
    {
        this->note = note;
        this->semester = semester;
        this->studiengang = studiengang;
    }

    double getNote() const {
        return note;
    }

    void setNote(double note) {
        Student::note = note;
    }

    int getSemester() const {
        return semester;
    }

    void setSemester(int semester) {
        Student::semester = semester;
    }

    const string &getStudiengang() const {
        return studiengang;
    }

    void setStudiengang(const string &studiengang) {
        Student::studiengang = studiengang;
    }
    int durschnitteNote (int note []) {
       int mittel;
        return mittel;
    }
    string text () {
        stringstream s;
        s << this->getName() << this->getGroesse() << this->studiengang << this->note << this->semester << endl;
    }
};