#pragma once
#include <QtWidgets>
#include "zonedessin.hh"
#include <vector>



class DrawWidget : public QWidget
{
public:
    DrawWidget();

    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent * event);
    void dessiner();

private:
    QWidget* fenetre;
    std::vector<QPoint> ligne;
};

