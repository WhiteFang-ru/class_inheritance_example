#include <iostream>
#include <string>
using namespace std;

// base class
class Cd
{ // represents a CD disk
private:
    string performers;
    string label;
    int selections;  // number of selections
    double playtime; // playing time in minutes
public:
    Cd(const string & perf, const string & lbl, 
		int selec_count, double playt); // default constructor, provided with default values
    Cd(const Cd &d); // copy contructor
    Cd(); // using function overloading to define default constructor that has no arguments
    virtual void Report() const; // reports all CD data
    Cd &operator=(const Cd &d);
};

