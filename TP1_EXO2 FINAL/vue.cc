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

     QObject::connect(egal, &QPushButton::clicked, this, &vue::onclickegal);


      QObject::connect(this, &vue::signalVue, &_t1, &traducteur::calcul_slot);

      QObject::connect(&_t1, &traducteur::signalResultat, this , &vue::changeResultat);

}


vue::vue(const vue &v1)
{
    std::cout<< "Ceci est un constructeur par recopie de vue. " << std::endl;
}




void vue::onclickegal()
{
    emit signalVue(spinbox1->text().toStdString(), spinbox2->text().toStdString(), combobox->currentText().toStdString());
}

void vue::changeResultat(std::string res_moteur)
{
    resultat->display(QString::fromStdString(res_moteur));
}

