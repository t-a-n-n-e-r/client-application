#include <iostream>
#include "client.h"

using namespace std;

int main(int argc, char *argv[]) {
    cout << "client-application v1.0" << endl;

    client client;
    client.execute(argc, argv);

    return 0;
}