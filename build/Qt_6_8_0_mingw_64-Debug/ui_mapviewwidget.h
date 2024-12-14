/********************************************************************************
** Form generated from reading UI file 'mapviewwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPVIEWWIDGET_H
#define UI_MAPVIEWWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mapviewwidget
{
public:
    QGridLayout *gridLayout;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *mapviewwidget)
    {
        if (mapviewwidget->objectName().isEmpty())
            mapviewwidget->setObjectName("mapviewwidget");
        mapviewwidget->resize(984, 586);
        gridLayout = new QGridLayout(mapviewwidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        graphicsView = new QGraphicsView(mapviewwidget);
        graphicsView->setObjectName("graphicsView");

        gridLayout->addWidget(graphicsView, 0, 0, 1, 1);


        retranslateUi(mapviewwidget);

        QMetaObject::connectSlotsByName(mapviewwidget);
    } // setupUi

    void retranslateUi(QWidget *mapviewwidget)
    {
        mapviewwidget->setWindowTitle(QCoreApplication::translate("mapviewwidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mapviewwidget: public Ui_mapviewwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPVIEWWIDGET_H
