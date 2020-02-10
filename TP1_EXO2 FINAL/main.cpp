#include <iostream>
#include "vue.hh"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    vue v;
    v.show();
    return app.exec();
}
