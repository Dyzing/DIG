#include "vue.hh"

vue::vue()
    :QWidget(),
     spinbox1(new QSpinBox(this)),
     spinbox2(new QSpinBox(this)),
     combobox(new QComboBox(this)),
     egal(new QPushButton("=", this)),
     resultat(new QLCDNumber(this))
{


    combobox->addItem("+");
    combobox->addItem("-");
    combobox->addItem("*");
    combobox->addItem("/");

    QHBoxLayout* lay = new QHBoxLayout;
    lay->addWidget(spinbox1);
    lay->addWidget(combobox); lay->addWidget(spinbox2);
    lay ->addWidget(egal); lay->addWidget(resultat);

    lay->setMargin(50);
    lay->setSpacing(100);

    this->setLayout(lay);
}

QSpinBox *vue::getSpinbox1() const
{
    return spinbox1;
}

QSpinBox *vue::getSpinbox2() const
{
    return spinbox2;
}

QComboBox *vue::getCombobox() const
{
    return combobox;
}

QPushButton *vue::getEgal() const
{
    return egal;
}

QLCDNumber *vue::getResultat() const
{
    return resultat;
}
