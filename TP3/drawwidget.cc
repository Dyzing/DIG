#include "drawwidget.hh"


DrawWidget::DrawWidget()
    :QWidget(),
     fenetre(new QWidget(this))
{
    fenetre->setGeometry(100, 100, 100, 100);
}

void DrawWidget::mousePressEvent(QMouseEvent *event)
{
    ligne.push_back(event->pos());
    update();
}

void DrawWidget::mouseMoveEvent(QMouseEvent *event)
{
    ligne.push_back(event->pos());
    update();
}

void DrawWidget::mouseReleaseEvent(QMouseEvent *event)
{
    ligne.push_back(event->pos());
    update();
}

void DrawWidget::paintEvent(QPaintEvent *event)
{
    QPainter pinceau(this);
    pinceau.setPen(QPen(Qt::blue, 10));
    for(auto x : ligne)
    {
        pinceau.drawPoint(x);
    }
}


