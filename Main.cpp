#include <iostream>
#include "MD5Lib/md5.h"

using namespace std;
int main(int argc, char *argv[])
{
    cout << "md5 of 'grape': " << md5("grape") << std::endl << std::flush;
    return 0;
}
