#include "cd.h"

class Classic : public Cd {
private:
    string primary_work;
    string instrument_brand;

public:
    Classic();
    Classic(const string & primwrk, const string & prfrmer,
            const string & instr_brand, int selec_count, double plytme);
    Classic(Cd &d) : Cd(d) {};
    virtual void Report() const;
};
