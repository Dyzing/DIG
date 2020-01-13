#include <iostream>
#include <QtWidgets>
#include "vue.hh"
#include "traducteur.hh"
#include "moteur.hh"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    vue window;
    window.show();
    return app.exec();
}
