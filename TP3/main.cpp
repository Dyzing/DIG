#include <iostream>
#include "drawwidget.hh"

using namespace std;

using namespace std;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    DrawWidget dw;
    dw.show();
    return app.exec();
}
