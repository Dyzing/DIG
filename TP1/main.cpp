#include <iostream>
#include <QtWidgets>
#include "vue.hh"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    vue window;
    window.show();
    return app.exec();
}
