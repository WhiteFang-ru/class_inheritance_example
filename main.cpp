
#include "classic.h" // contains #include cd.h

void Bravo(const Cd &disk);
int main()
{
    Cd cd("Beatles", "Capitol", 14, 35.5);
    Classic classic = Classic("Piano Sonata in B flat, Fantasia in C",
                         "Alfred Brendel", "Philips", 2, 57.17);
    Cd *pcd = &cd;
    cout << "Using object directly:\n";
    cd.Report(); // use Cd method
    classic.Report(); // use Classic method
    cout << "\nUsing type cd * pointer to objects:\n";
    pcd->Report(); // use Cd method for cd object
    pcd = &classic;
    pcd->Report(); // use Classic method for classic object
    cout << "\nCalling a function with a Cd reference argument:\n";
    Bravo(cd);
    Bravo(classic);
    cout << "\nTesting assignment: \n";
    Classic copy;
    copy = classic;
    copy.Report();

    return 0;
}
void Bravo(const Cd &disk)
{
    disk.Report();
}
