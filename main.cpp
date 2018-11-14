#pragma once;
#include <iostream>
#include <string>
#include <sstream>
#include "Lehrer.h"
#include "Student.h"
#include <iostream>
using namespace std;

int main() {

    Lehrer *lehrer = new Lehrer( "Thomas Mahr", 175, "Prof. Dr", "Verheiratet", "OPR" );
    Lehrer lehrer1 ( "Thomas Mahr", 175, "Prof. Dr", "Verheiratet", "OPR" );
    Student *student = new Student("Vanelle", 170, 2.3, 5, "BEI5" );
    Student student1 ("Manuella", 175, 2.7,5, "BEI5" );
    cout <<  student->text() ;
    cout <<  student1.text() ;
    cout <<  lehrer->text() ;
    cout <<  lehrer1.text() ;
    return 0;
}