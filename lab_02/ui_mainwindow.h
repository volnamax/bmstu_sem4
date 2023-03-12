/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *downlaudAndStepBox;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *downloadFigure;
    QPushButton *stepButton;
    QGroupBox *MainBox;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBoxObj;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBoxX;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelX;
    QGroupBox *groupBoxY;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelY;
    QGroupBox *kxBox;
    QVBoxLayout *verticalLayout_4;
    QPushButton *kxButton;
    QFormLayout *kxLayot;
    QFormLayout *kxLayout;
    QVBoxLayout *kxTextLayout;
    QLabel *kxText;
    QLabel *kyText;
    QVBoxLayout *kxDoubleLayot;
    QDoubleSpinBox *kxDouble;
    QDoubleSpinBox *kyDouble;
    QFormLayout *kxCentrLauot;
    QVBoxLayout *kxCentrTextLayout;
    QLabel *kxCentText;
    QLabel *kyCentrText;
    QVBoxLayout *kxCentrDoubleLayout;
    QDoubleSpinBox *kxCentrDouble;
    QDoubleSpinBox *kyCentrDouble;
    QGroupBox *AngleBox;
    QVBoxLayout *verticalLayout;
    QPushButton *AngleButton;
    QFormLayout *AngleMainLayout;
    QFormLayout *AngleCentrLayout;
    QVBoxLayout *AngleCentrTextLayout;
    QLabel *AngleCentrXText;
    QLabel *AngleCentrYText;
    QVBoxLayout *AngleCentrDoubleLAyout;
    QDoubleSpinBox *AngleCentrXDouble;
    QDoubleSpinBox *AngleCentrYDouble;
    QVBoxLayout *verticalLayout_12;
    QLabel *AngleXText;
    QDoubleSpinBox *AngleXDouble;
    QGroupBox *dxBox;
    QVBoxLayout *verticalLayout_11;
    QPushButton *dxButton;
    QFormLayout *dxMainLayot;
    QVBoxLayout *dxTextLayout;
    QLabel *dxText;
    QLabel *dyText;
    QVBoxLayout *dxDoubleLayot;
    QDoubleSpinBox *dxDouble;
    QDoubleSpinBox *dyDouble;
    QGraphicsView *graphicsView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1129, 766);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        downlaudAndStepBox = new QGroupBox(centralwidget);
        downlaudAndStepBox->setObjectName(QString::fromUtf8("downlaudAndStepBox"));
        horizontalLayout_3 = new QHBoxLayout(downlaudAndStepBox);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        downloadFigure = new QPushButton(downlaudAndStepBox);
        downloadFigure->setObjectName(QString::fromUtf8("downloadFigure"));
        QFont font;
        font.setPointSize(14);
        downloadFigure->setFont(font);

        horizontalLayout_3->addWidget(downloadFigure);

        stepButton = new QPushButton(downlaudAndStepBox);
        stepButton->setObjectName(QString::fromUtf8("stepButton"));
        stepButton->setFont(font);

        horizontalLayout_3->addWidget(stepButton);


        gridLayout->addWidget(downlaudAndStepBox, 2, 0, 1, 1);

        MainBox = new QGroupBox(centralwidget);
        MainBox->setObjectName(QString::fromUtf8("MainBox"));
        MainBox->setFont(font);
        MainBox->setAlignment(Qt::AlignCenter);
        horizontalLayout_2 = new QHBoxLayout(MainBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBoxObj = new QGroupBox(MainBox);
        groupBoxObj->setObjectName(QString::fromUtf8("groupBoxObj"));
        groupBoxObj->setFont(font);
        groupBoxObj->setAlignment(Qt::AlignCenter);
        horizontalLayout_4 = new QHBoxLayout(groupBoxObj);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        groupBoxX = new QGroupBox(groupBoxObj);
        groupBoxX->setObjectName(QString::fromUtf8("groupBoxX"));
        groupBoxX->setMinimumSize(QSize(100, 0));
        groupBoxX->setAlignment(Qt::AlignCenter);
        verticalLayout_3 = new QVBoxLayout(groupBoxX);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        labelX = new QLabel(groupBoxX);
        labelX->setObjectName(QString::fromUtf8("labelX"));
        labelX->setMinimumSize(QSize(100, 0));
        QFont font1;
        font1.setPointSize(11);
        labelX->setFont(font1);

        verticalLayout_3->addWidget(labelX);


        horizontalLayout_4->addWidget(groupBoxX);

        groupBoxY = new QGroupBox(groupBoxObj);
        groupBoxY->setObjectName(QString::fromUtf8("groupBoxY"));
        groupBoxY->setAlignment(Qt::AlignCenter);
        horizontalLayout_5 = new QHBoxLayout(groupBoxY);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        labelY = new QLabel(groupBoxY);
        labelY->setObjectName(QString::fromUtf8("labelY"));
        labelY->setMinimumSize(QSize(100, 0));
        labelY->setFont(font1);

        horizontalLayout_5->addWidget(labelY);


        horizontalLayout_4->addWidget(groupBoxY);


        horizontalLayout_2->addWidget(groupBoxObj);

        kxBox = new QGroupBox(MainBox);
        kxBox->setObjectName(QString::fromUtf8("kxBox"));
        kxBox->setFont(font);
        kxBox->setAlignment(Qt::AlignCenter);
        verticalLayout_4 = new QVBoxLayout(kxBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        kxButton = new QPushButton(kxBox);
        kxButton->setObjectName(QString::fromUtf8("kxButton"));
        kxButton->setFont(font);

        verticalLayout_4->addWidget(kxButton);

        kxLayot = new QFormLayout();
        kxLayot->setObjectName(QString::fromUtf8("kxLayot"));
        kxLayout = new QFormLayout();
        kxLayout->setObjectName(QString::fromUtf8("kxLayout"));
        kxTextLayout = new QVBoxLayout();
        kxTextLayout->setObjectName(QString::fromUtf8("kxTextLayout"));
        kxTextLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        kxTextLayout->setContentsMargins(0, 0, -1, -1);
        kxText = new QLabel(kxBox);
        kxText->setObjectName(QString::fromUtf8("kxText"));
        kxText->setFont(font);

        kxTextLayout->addWidget(kxText);

        kyText = new QLabel(kxBox);
        kyText->setObjectName(QString::fromUtf8("kyText"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(kyText->sizePolicy().hasHeightForWidth());
        kyText->setSizePolicy(sizePolicy1);
        kyText->setFont(font);
        kyText->setContextMenuPolicy(Qt::CustomContextMenu);
        kyText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        kxTextLayout->addWidget(kyText);


        kxLayout->setLayout(0, QFormLayout::LabelRole, kxTextLayout);

        kxDoubleLayot = new QVBoxLayout();
        kxDoubleLayot->setObjectName(QString::fromUtf8("kxDoubleLayot"));
        kxDouble = new QDoubleSpinBox(kxBox);
        kxDouble->setObjectName(QString::fromUtf8("kxDouble"));
        kxDouble->setFont(font);
        kxDouble->setMinimum(-10000.000000000000000);
        kxDouble->setMaximum(10000.000000000000000);

        kxDoubleLayot->addWidget(kxDouble);

        kyDouble = new QDoubleSpinBox(kxBox);
        kyDouble->setObjectName(QString::fromUtf8("kyDouble"));
        kyDouble->setFont(font);
        kyDouble->setMinimum(-10000.000000000000000);
        kyDouble->setMaximum(10000.000000000000000);

        kxDoubleLayot->addWidget(kyDouble);


        kxLayout->setLayout(0, QFormLayout::FieldRole, kxDoubleLayot);


        kxLayot->setLayout(0, QFormLayout::LabelRole, kxLayout);

        kxCentrLauot = new QFormLayout();
        kxCentrLauot->setObjectName(QString::fromUtf8("kxCentrLauot"));
        kxCentrTextLayout = new QVBoxLayout();
        kxCentrTextLayout->setObjectName(QString::fromUtf8("kxCentrTextLayout"));
        kxCentText = new QLabel(kxBox);
        kxCentText->setObjectName(QString::fromUtf8("kxCentText"));
        kxCentText->setFont(font);

        kxCentrTextLayout->addWidget(kxCentText);

        kyCentrText = new QLabel(kxBox);
        kyCentrText->setObjectName(QString::fromUtf8("kyCentrText"));
        kyCentrText->setFont(font);

        kxCentrTextLayout->addWidget(kyCentrText);


        kxCentrLauot->setLayout(0, QFormLayout::LabelRole, kxCentrTextLayout);

        kxCentrDoubleLayout = new QVBoxLayout();
        kxCentrDoubleLayout->setObjectName(QString::fromUtf8("kxCentrDoubleLayout"));
        kxCentrDouble = new QDoubleSpinBox(kxBox);
        kxCentrDouble->setObjectName(QString::fromUtf8("kxCentrDouble"));
        kxCentrDouble->setFont(font);
        kxCentrDouble->setMinimum(-10000.000000000000000);
        kxCentrDouble->setMaximum(10000.000000000000000);

        kxCentrDoubleLayout->addWidget(kxCentrDouble);

        kyCentrDouble = new QDoubleSpinBox(kxBox);
        kyCentrDouble->setObjectName(QString::fromUtf8("kyCentrDouble"));
        kyCentrDouble->setFont(font);
        kyCentrDouble->setMinimum(-10000.000000000000000);
        kyCentrDouble->setMaximum(10000.000000000000000);

        kxCentrDoubleLayout->addWidget(kyCentrDouble);


        kxCentrLauot->setLayout(0, QFormLayout::FieldRole, kxCentrDoubleLayout);


        kxLayot->setLayout(0, QFormLayout::FieldRole, kxCentrLauot);


        verticalLayout_4->addLayout(kxLayot);


        horizontalLayout_2->addWidget(kxBox);

        AngleBox = new QGroupBox(MainBox);
        AngleBox->setObjectName(QString::fromUtf8("AngleBox"));
        AngleBox->setFont(font);
        verticalLayout = new QVBoxLayout(AngleBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        AngleButton = new QPushButton(AngleBox);
        AngleButton->setObjectName(QString::fromUtf8("AngleButton"));
        AngleButton->setFont(font);

        verticalLayout->addWidget(AngleButton);

        AngleMainLayout = new QFormLayout();
        AngleMainLayout->setObjectName(QString::fromUtf8("AngleMainLayout"));
        AngleCentrLayout = new QFormLayout();
        AngleCentrLayout->setObjectName(QString::fromUtf8("AngleCentrLayout"));
        AngleCentrTextLayout = new QVBoxLayout();
        AngleCentrTextLayout->setObjectName(QString::fromUtf8("AngleCentrTextLayout"));
        AngleCentrXText = new QLabel(AngleBox);
        AngleCentrXText->setObjectName(QString::fromUtf8("AngleCentrXText"));
        AngleCentrXText->setFont(font);

        AngleCentrTextLayout->addWidget(AngleCentrXText);

        AngleCentrYText = new QLabel(AngleBox);
        AngleCentrYText->setObjectName(QString::fromUtf8("AngleCentrYText"));
        AngleCentrYText->setFont(font);

        AngleCentrTextLayout->addWidget(AngleCentrYText);


        AngleCentrLayout->setLayout(0, QFormLayout::LabelRole, AngleCentrTextLayout);

        AngleCentrDoubleLAyout = new QVBoxLayout();
        AngleCentrDoubleLAyout->setObjectName(QString::fromUtf8("AngleCentrDoubleLAyout"));
        AngleCentrXDouble = new QDoubleSpinBox(AngleBox);
        AngleCentrXDouble->setObjectName(QString::fromUtf8("AngleCentrXDouble"));
        AngleCentrXDouble->setMinimum(-10000.000000000000000);
        AngleCentrXDouble->setMaximum(10000.000000000000000);

        AngleCentrDoubleLAyout->addWidget(AngleCentrXDouble);

        AngleCentrYDouble = new QDoubleSpinBox(AngleBox);
        AngleCentrYDouble->setObjectName(QString::fromUtf8("AngleCentrYDouble"));
        AngleCentrYDouble->setMinimum(-10000.000000000000000);
        AngleCentrYDouble->setMaximum(10000.000000000000000);

        AngleCentrDoubleLAyout->addWidget(AngleCentrYDouble);


        AngleCentrLayout->setLayout(0, QFormLayout::FieldRole, AngleCentrDoubleLAyout);


        AngleMainLayout->setLayout(0, QFormLayout::FieldRole, AngleCentrLayout);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(-1, 0, 0, -1);
        AngleXText = new QLabel(AngleBox);
        AngleXText->setObjectName(QString::fromUtf8("AngleXText"));
        AngleXText->setFont(font);
        AngleXText->setAlignment(Qt::AlignCenter);

        verticalLayout_12->addWidget(AngleXText);

        AngleXDouble = new QDoubleSpinBox(AngleBox);
        AngleXDouble->setObjectName(QString::fromUtf8("AngleXDouble"));
        AngleXDouble->setFont(font);
        AngleXDouble->setMinimum(-10000.000000000000000);
        AngleXDouble->setMaximum(10000.000000000000000);

        verticalLayout_12->addWidget(AngleXDouble);


        AngleMainLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout_12);


        verticalLayout->addLayout(AngleMainLayout);


        horizontalLayout_2->addWidget(AngleBox);

        dxBox = new QGroupBox(MainBox);
        dxBox->setObjectName(QString::fromUtf8("dxBox"));
        dxBox->setFont(font);
        dxBox->setAlignment(Qt::AlignCenter);
        verticalLayout_11 = new QVBoxLayout(dxBox);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        dxButton = new QPushButton(dxBox);
        dxButton->setObjectName(QString::fromUtf8("dxButton"));
        dxButton->setFont(font);

        verticalLayout_11->addWidget(dxButton);

        dxMainLayot = new QFormLayout();
        dxMainLayot->setObjectName(QString::fromUtf8("dxMainLayot"));
        dxTextLayout = new QVBoxLayout();
        dxTextLayout->setObjectName(QString::fromUtf8("dxTextLayout"));
        dxText = new QLabel(dxBox);
        dxText->setObjectName(QString::fromUtf8("dxText"));
        dxText->setFont(font);

        dxTextLayout->addWidget(dxText);

        dyText = new QLabel(dxBox);
        dyText->setObjectName(QString::fromUtf8("dyText"));
        dyText->setFont(font);

        dxTextLayout->addWidget(dyText);


        dxMainLayot->setLayout(0, QFormLayout::LabelRole, dxTextLayout);

        dxDoubleLayot = new QVBoxLayout();
        dxDoubleLayot->setObjectName(QString::fromUtf8("dxDoubleLayot"));
        dxDouble = new QDoubleSpinBox(dxBox);
        dxDouble->setObjectName(QString::fromUtf8("dxDouble"));
        dxDouble->setFont(font);
        dxDouble->setMinimum(-10000.000000000000000);
        dxDouble->setMaximum(10000.000000000000000);

        dxDoubleLayot->addWidget(dxDouble);

        dyDouble = new QDoubleSpinBox(dxBox);
        dyDouble->setObjectName(QString::fromUtf8("dyDouble"));
        dyDouble->setFont(font);
        dyDouble->setMinimum(-10000.000000000000000);
        dyDouble->setMaximum(10000.000000000000000);

        dxDoubleLayot->addWidget(dyDouble);


        dxMainLayot->setLayout(0, QFormLayout::FieldRole, dxDoubleLayot);


        verticalLayout_11->addLayout(dxMainLayot);


        horizontalLayout_2->addWidget(dxBox);


        gridLayout->addWidget(MainBox, 0, 0, 1, 1);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        gridLayout->addWidget(graphicsView, 8, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Lab_01", nullptr));
        downlaudAndStepBox->setTitle(QString());
        downloadFigure->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260 \321\204\320\270\320\263\321\203\321\200\321\203", nullptr));
        stepButton->setText(QCoreApplication::translate("MainWindow", "\320\250\320\260\320\263 \320\275\320\260\320\267\320\260\320\264", nullptr));
        MainBox->setTitle(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\270\320\265 \321\204\320\270\320\263\321\203\321\200\321\213", nullptr));
        groupBoxObj->setTitle(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\321\202\321\200 \321\204\320\270\320\263\321\203\321\200\321\213", nullptr));
        groupBoxX->setTitle(QCoreApplication::translate("MainWindow", "X", nullptr));
        labelX->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        groupBoxY->setTitle(QCoreApplication::translate("MainWindow", "Y", nullptr));
        labelY->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        kxBox->setTitle(QString());
        kxButton->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        kxText->setText(QCoreApplication::translate("MainWindow", "kX", nullptr));
        kyText->setText(QCoreApplication::translate("MainWindow", "kY", nullptr));
        kxCentText->setText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\321\202\321\200 X", nullptr));
        kyCentrText->setText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\321\202\321\200 Y", nullptr));
        AngleBox->setTitle(QString());
        AngleButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\262\320\265\321\200\320\275\321\203\321\202\321\214", nullptr));
        AngleCentrXText->setText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\321\202\321\200 X", nullptr));
        AngleCentrYText->setText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\321\202\321\200 Y", nullptr));
        AngleXText->setText(QCoreApplication::translate("MainWindow", "\320\243\320\263\320\276\320\273", nullptr));
        dxBox->setTitle(QString());
        dxButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\274\320\265\321\201\321\202\320\270\321\202\321\214", nullptr));
        dxText->setText(QCoreApplication::translate("MainWindow", "dX", nullptr));
        dyText->setText(QCoreApplication::translate("MainWindow", "dY", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
