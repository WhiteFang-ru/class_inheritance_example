#include "cd.h"

using namespace std;

// Cd(); - not needed , because we give default values to member data 
// in the second type of default constructor, i e Cd(const str..., const str... etc)

Cd::Cd(const string &perf, const string &lbl, int selec_count, double playt) {
    performers = perf;
    label = lbl;
    selections = selec_count;
    playtime = playt;
}

Cd &Cd::operator=(const Cd &d) {
    return *this;
};

    void Cd::Report() const
{
    cout << "Performer(s):\t"s << performers << endl;
    cout << "Label:\t"s << label << endl;
    cout << "Number of selections:\t"s << selections << endl;
    cout << "Playtime:\t"s << playtime << endl;
}
