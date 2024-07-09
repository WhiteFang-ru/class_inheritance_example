#include "classic.h"


Classic::Classic()
        : Cd("no perf", "no label", 0, 0.0), primary_work("zero"), instrument_brand("zero") {};

Classic::Classic(const string &primwrk, const string &prfrmer,
                 const string &instr_brand, int selec_count, double plytme)
                 : Cd(prfrmer, "no label"s, selec_count, plytme)
{
    primary_work = primwrk;
    instrument_brand = instr_brand;
}

void Classic::Report() const
{
    Cd::Report(); // displays Cd portion
    cout << "Classic, primary work:\t"s << primary_work << endl;
    cout << "Classic, Instrument brand:\t"s << instrument_brand << endl;
}
