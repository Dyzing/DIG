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

//    QObject::connect(egal, &QPushButton::clicked, this, &vue::oncliccalculer);
    //    QObject::connect(combobox, &QComboBox::currentTextChanged, this, &vue::oncliccalculer);
}

vue::vue(const vue &v1)
{
    std::cout<< "Ceci est un constructeur par recopie de vue. " << std::endl;
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

//void vue::oncliccalculer()
//{
////    auto s1(spinbox1->text().toStdString());

////    auto s2(spinbox2->text().toStdString());
////    float f1(0), f2(0);
////    if(!s1.empty())
////        f1 = std::stof(s1);
////    if(!s2.empty())
////        f2 = std::stof(s2);

//    int f1 = spinbox1->value();
//    int f2 = spinbox2->value();


//    auto ope(combobox->currentText().toStdString());
//    int result;
//    switch (ope[0]) {
//    case '+':
//        result = f1 + f2;
//        break;
//    case '-':
//        result = f1 - f2;
//        break;
//    case '*':
//        result = f1 * f2;
//        break;
//    case '/':
//        if(f2 == 0) {
//            resultat->display("Err");
//            return;
//        }
//        else
//            result = f1 / f2;
//        break;
//    };
//    resultat->display(result);
//}
