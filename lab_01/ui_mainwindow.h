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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *MainBox;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *centrObjBox;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *centrXlayaot;
    QLabel *centrTextX;
    QLabel *centrValueX;
    QVBoxLayout *centrYLayaot;
    QLabel *centrYText;
    QLabel *centrValueY;
    QVBoxLayout *verticalLayout_3;
    QLabel *centrZtetx;
    QLabel *centrValueZ;
    QSpacerItem *verticalSpacer;
    QPushButton *downloadFigure;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *dxBox;
    QVBoxLayout *verticalLayout_11;
    QPushButton *dxButton;
    QFormLayout *dxMainLayot;
    QVBoxLayout *dxTextLayout;
    QLabel *dxText;
    QLabel *dyText;
    QLabel *dzText;
    QVBoxLayout *dxDoubleLayot;
    QDoubleSpinBox *dxDouble;
    QDoubleSpinBox *dyDouble;
    QDoubleSpinBox *dzDouble;
    QGroupBox *AngleBox;
    QVBoxLayout *verticalLayout;
    QPushButton *AngleButton;
    QFormLayout *AngleMainLayout;
    QFormLayout *AngleLayout;
    QVBoxLayout *AngleTextLayot;
    QLabel *AngleXText;
    QLabel *AngleYtext;
    QLabel *AngleZtext;
    QVBoxLayout *AngleDoubleLayout;
    QDoubleSpinBox *AngleXDouble;
    QDoubleSpinBox *AngleYDouble;
    QDoubleSpinBox *AngleZDouble;
    QFormLayout *AngleCentrLayout;
    QVBoxLayout *AngleCentrTextLayout;
    QLabel *AngleCentrXText;
    QLabel *AngleCentrYText;
    QLabel *AngleCentrZText;
    QVBoxLayout *AngleCentrDoubleLAyout;
    QDoubleSpinBox *AngleCentrXDouble;
    QDoubleSpinBox *AngleCentrYDouble;
    QDoubleSpinBox *AngleCentrZDouble;
    QGroupBox *kxBox;
    QVBoxLayout *verticalLayout_4;
    QPushButton *kxButton;
    QFormLayout *kxLayot;
    QFormLayout *kxLayout;
    QVBoxLayout *kxTextLayout;
    QLabel *kxText;
    QLabel *kyText;
    QLabel *kzText;
    QVBoxLayout *kxDoubleLayot;
    QDoubleSpinBox *kxDouble;
    QDoubleSpinBox *kyDouble;
    QDoubleSpinBox *kzDouble;
    QFormLayout *kxCentrLauot;
    QVBoxLayout *kxCentrTextLayout;
    QLabel *kxCentText;
    QLabel *kyCentrText;
    QLabel *kzCentText;
    QVBoxLayout *kxCentrDoubleLayout;
    QDoubleSpinBox *kxCentrDouble;
    QDoubleSpinBox *kyCentrDouble;
    QDoubleSpinBox *kzCentrDouble;
    QSpacerItem *verticalSpacer_3;
    QGraphicsView *graphicsView;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1233, 766);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        MainBox = new QGroupBox(centralwidget);
        MainBox->setObjectName(QString::fromUtf8("MainBox"));
        MainBox->setMinimumSize(QSize(500, 500));
        MainBox->setMaximumSize(QSize(500, 16777215));
        QFont font;
        font.setPointSize(14);
        MainBox->setFont(font);
        MainBox->setAlignment(Qt::AlignCenter);
        verticalLayout_2 = new QVBoxLayout(MainBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        centrObjBox = new QGroupBox(MainBox);
        centrObjBox->setObjectName(QString::fromUtf8("centrObjBox"));
        centrObjBox->setAlignment(Qt::AlignCenter);
        horizontalLayout_2 = new QHBoxLayout(centrObjBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        centrXlayaot = new QVBoxLayout();
        centrXlayaot->setObjectName(QString::fromUtf8("centrXlayaot"));
        centrTextX = new QLabel(centrObjBox);
        centrTextX->setObjectName(QString::fromUtf8("centrTextX"));
        centrTextX->setAlignment(Qt::AlignCenter);

        centrXlayaot->addWidget(centrTextX);

        centrValueX = new QLabel(centrObjBox);
        centrValueX->setObjectName(QString::fromUtf8("centrValueX"));
        centrValueX->setAlignment(Qt::AlignCenter);

        centrXlayaot->addWidget(centrValueX);


        horizontalLayout_2->addLayout(centrXlayaot);

        centrYLayaot = new QVBoxLayout();
        centrYLayaot->setObjectName(QString::fromUtf8("centrYLayaot"));
        centrYText = new QLabel(centrObjBox);
        centrYText->setObjectName(QString::fromUtf8("centrYText"));
        centrYText->setAlignment(Qt::AlignCenter);

        centrYLayaot->addWidget(centrYText);

        centrValueY = new QLabel(centrObjBox);
        centrValueY->setObjectName(QString::fromUtf8("centrValueY"));
        centrValueY->setAlignment(Qt::AlignCenter);

        centrYLayaot->addWidget(centrValueY);


        horizontalLayout_2->addLayout(centrYLayaot);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        centrZtetx = new QLabel(centrObjBox);
        centrZtetx->setObjectName(QString::fromUtf8("centrZtetx"));
        centrZtetx->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(centrZtetx);

        centrValueZ = new QLabel(centrObjBox);
        centrValueZ->setObjectName(QString::fromUtf8("centrValueZ"));
        centrValueZ->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(centrValueZ);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_2->addWidget(centrObjBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        downloadFigure = new QPushButton(MainBox);
        downloadFigure->setObjectName(QString::fromUtf8("downloadFigure"));

        verticalLayout_2->addWidget(downloadFigure);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        dxBox = new QGroupBox(MainBox);
        dxBox->setObjectName(QString::fromUtf8("dxBox"));
        dxBox->setAlignment(Qt::AlignCenter);
        verticalLayout_11 = new QVBoxLayout(dxBox);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        dxButton = new QPushButton(dxBox);
        dxButton->setObjectName(QString::fromUtf8("dxButton"));

        verticalLayout_11->addWidget(dxButton);

        dxMainLayot = new QFormLayout();
        dxMainLayot->setObjectName(QString::fromUtf8("dxMainLayot"));
        dxTextLayout = new QVBoxLayout();
        dxTextLayout->setObjectName(QString::fromUtf8("dxTextLayout"));
        dxText = new QLabel(dxBox);
        dxText->setObjectName(QString::fromUtf8("dxText"));

        dxTextLayout->addWidget(dxText);

        dyText = new QLabel(dxBox);
        dyText->setObjectName(QString::fromUtf8("dyText"));

        dxTextLayout->addWidget(dyText);

        dzText = new QLabel(dxBox);
        dzText->setObjectName(QString::fromUtf8("dzText"));

        dxTextLayout->addWidget(dzText);


        dxMainLayot->setLayout(0, QFormLayout::LabelRole, dxTextLayout);

        dxDoubleLayot = new QVBoxLayout();
        dxDoubleLayot->setObjectName(QString::fromUtf8("dxDoubleLayot"));
        dxDouble = new QDoubleSpinBox(dxBox);
        dxDouble->setObjectName(QString::fromUtf8("dxDouble"));
        dxDouble->setMinimum(-10000.000000000000000);
        dxDouble->setMaximum(10000.000000000000000);

        dxDoubleLayot->addWidget(dxDouble);

        dyDouble = new QDoubleSpinBox(dxBox);
        dyDouble->setObjectName(QString::fromUtf8("dyDouble"));
        dyDouble->setMinimum(-10000.000000000000000);
        dyDouble->setMaximum(10000.000000000000000);

        dxDoubleLayot->addWidget(dyDouble);

        dzDouble = new QDoubleSpinBox(dxBox);
        dzDouble->setObjectName(QString::fromUtf8("dzDouble"));
        dzDouble->setMinimum(-10000.000000000000000);
        dzDouble->setMaximum(10000.000000000000000);

        dxDoubleLayot->addWidget(dzDouble);


        dxMainLayot->setLayout(0, QFormLayout::FieldRole, dxDoubleLayot);


        verticalLayout_11->addLayout(dxMainLayot);


        verticalLayout_2->addWidget(dxBox);

        AngleBox = new QGroupBox(MainBox);
        AngleBox->setObjectName(QString::fromUtf8("AngleBox"));
        verticalLayout = new QVBoxLayout(AngleBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        AngleButton = new QPushButton(AngleBox);
        AngleButton->setObjectName(QString::fromUtf8("AngleButton"));

        verticalLayout->addWidget(AngleButton);

        AngleMainLayout = new QFormLayout();
        AngleMainLayout->setObjectName(QString::fromUtf8("AngleMainLayout"));
        AngleLayout = new QFormLayout();
        AngleLayout->setObjectName(QString::fromUtf8("AngleLayout"));
        AngleTextLayot = new QVBoxLayout();
        AngleTextLayot->setObjectName(QString::fromUtf8("AngleTextLayot"));
        AngleXText = new QLabel(AngleBox);
        AngleXText->setObjectName(QString::fromUtf8("AngleXText"));

        AngleTextLayot->addWidget(AngleXText);

        AngleYtext = new QLabel(AngleBox);
        AngleYtext->setObjectName(QString::fromUtf8("AngleYtext"));

        AngleTextLayot->addWidget(AngleYtext);

        AngleZtext = new QLabel(AngleBox);
        AngleZtext->setObjectName(QString::fromUtf8("AngleZtext"));

        AngleTextLayot->addWidget(AngleZtext);


        AngleLayout->setLayout(0, QFormLayout::LabelRole, AngleTextLayot);

        AngleDoubleLayout = new QVBoxLayout();
        AngleDoubleLayout->setObjectName(QString::fromUtf8("AngleDoubleLayout"));
        AngleXDouble = new QDoubleSpinBox(AngleBox);
        AngleXDouble->setObjectName(QString::fromUtf8("AngleXDouble"));
        AngleXDouble->setMinimum(-10000.000000000000000);
        AngleXDouble->setMaximum(10000.000000000000000);

        AngleDoubleLayout->addWidget(AngleXDouble);

        AngleYDouble = new QDoubleSpinBox(AngleBox);
        AngleYDouble->setObjectName(QString::fromUtf8("AngleYDouble"));
        AngleYDouble->setMinimum(-10000.000000000000000);
        AngleYDouble->setMaximum(10000.000000000000000);

        AngleDoubleLayout->addWidget(AngleYDouble);

        AngleZDouble = new QDoubleSpinBox(AngleBox);
        AngleZDouble->setObjectName(QString::fromUtf8("AngleZDouble"));
        AngleZDouble->setMinimum(-10000.000000000000000);
        AngleZDouble->setMaximum(10000.000000000000000);

        AngleDoubleLayout->addWidget(AngleZDouble);


        AngleLayout->setLayout(0, QFormLayout::FieldRole, AngleDoubleLayout);


        AngleMainLayout->setLayout(0, QFormLayout::LabelRole, AngleLayout);

        AngleCentrLayout = new QFormLayout();
        AngleCentrLayout->setObjectName(QString::fromUtf8("AngleCentrLayout"));
        AngleCentrTextLayout = new QVBoxLayout();
        AngleCentrTextLayout->setObjectName(QString::fromUtf8("AngleCentrTextLayout"));
        AngleCentrXText = new QLabel(AngleBox);
        AngleCentrXText->setObjectName(QString::fromUtf8("AngleCentrXText"));

        AngleCentrTextLayout->addWidget(AngleCentrXText);

        AngleCentrYText = new QLabel(AngleBox);
        AngleCentrYText->setObjectName(QString::fromUtf8("AngleCentrYText"));

        AngleCentrTextLayout->addWidget(AngleCentrYText);

        AngleCentrZText = new QLabel(AngleBox);
        AngleCentrZText->setObjectName(QString::fromUtf8("AngleCentrZText"));

        AngleCentrTextLayout->addWidget(AngleCentrZText);


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

        AngleCentrZDouble = new QDoubleSpinBox(AngleBox);
        AngleCentrZDouble->setObjectName(QString::fromUtf8("AngleCentrZDouble"));
        AngleCentrZDouble->setMinimum(-10000.000000000000000);
        AngleCentrZDouble->setMaximum(10000.000000000000000);

        AngleCentrDoubleLAyout->addWidget(AngleCentrZDouble);


        AngleCentrLayout->setLayout(0, QFormLayout::FieldRole, AngleCentrDoubleLAyout);


        AngleMainLayout->setLayout(0, QFormLayout::FieldRole, AngleCentrLayout);


        verticalLayout->addLayout(AngleMainLayout);


        verticalLayout_2->addWidget(AngleBox);

        kxBox = new QGroupBox(MainBox);
        kxBox->setObjectName(QString::fromUtf8("kxBox"));
        kxBox->setAlignment(Qt::AlignCenter);
        verticalLayout_4 = new QVBoxLayout(kxBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        kxButton = new QPushButton(kxBox);
        kxButton->setObjectName(QString::fromUtf8("kxButton"));

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

        kxTextLayout->addWidget(kxText);

        kyText = new QLabel(kxBox);
        kyText->setObjectName(QString::fromUtf8("kyText"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(kyText->sizePolicy().hasHeightForWidth());
        kyText->setSizePolicy(sizePolicy1);
        kyText->setContextMenuPolicy(Qt::CustomContextMenu);
        kyText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        kxTextLayout->addWidget(kyText);

        kzText = new QLabel(kxBox);
        kzText->setObjectName(QString::fromUtf8("kzText"));

        kxTextLayout->addWidget(kzText);


        kxLayout->setLayout(0, QFormLayout::LabelRole, kxTextLayout);

        kxDoubleLayot = new QVBoxLayout();
        kxDoubleLayot->setObjectName(QString::fromUtf8("kxDoubleLayot"));
        kxDouble = new QDoubleSpinBox(kxBox);
        kxDouble->setObjectName(QString::fromUtf8("kxDouble"));
        kxDouble->setMinimum(-10000.000000000000000);
        kxDouble->setMaximum(10000.000000000000000);

        kxDoubleLayot->addWidget(kxDouble);

        kyDouble = new QDoubleSpinBox(kxBox);
        kyDouble->setObjectName(QString::fromUtf8("kyDouble"));
        kyDouble->setMinimum(-10000.000000000000000);
        kyDouble->setMaximum(10000.000000000000000);

        kxDoubleLayot->addWidget(kyDouble);

        kzDouble = new QDoubleSpinBox(kxBox);
        kzDouble->setObjectName(QString::fromUtf8("kzDouble"));
        kzDouble->setMinimum(-10000.000000000000000);
        kzDouble->setMaximum(10000.000000000000000);

        kxDoubleLayot->addWidget(kzDouble);


        kxLayout->setLayout(0, QFormLayout::FieldRole, kxDoubleLayot);


        kxLayot->setLayout(0, QFormLayout::LabelRole, kxLayout);

        kxCentrLauot = new QFormLayout();
        kxCentrLauot->setObjectName(QString::fromUtf8("kxCentrLauot"));
        kxCentrTextLayout = new QVBoxLayout();
        kxCentrTextLayout->setObjectName(QString::fromUtf8("kxCentrTextLayout"));
        kxCentText = new QLabel(kxBox);
        kxCentText->setObjectName(QString::fromUtf8("kxCentText"));

        kxCentrTextLayout->addWidget(kxCentText);

        kyCentrText = new QLabel(kxBox);
        kyCentrText->setObjectName(QString::fromUtf8("kyCentrText"));

        kxCentrTextLayout->addWidget(kyCentrText);

        kzCentText = new QLabel(kxBox);
        kzCentText->setObjectName(QString::fromUtf8("kzCentText"));

        kxCentrTextLayout->addWidget(kzCentText);


        kxCentrLauot->setLayout(0, QFormLayout::LabelRole, kxCentrTextLayout);

        kxCentrDoubleLayout = new QVBoxLayout();
        kxCentrDoubleLayout->setObjectName(QString::fromUtf8("kxCentrDoubleLayout"));
        kxCentrDouble = new QDoubleSpinBox(kxBox);
        kxCentrDouble->setObjectName(QString::fromUtf8("kxCentrDouble"));
        kxCentrDouble->setMinimum(-10000.000000000000000);
        kxCentrDouble->setMaximum(10000.000000000000000);

        kxCentrDoubleLayout->addWidget(kxCentrDouble);

        kyCentrDouble = new QDoubleSpinBox(kxBox);
        kyCentrDouble->setObjectName(QString::fromUtf8("kyCentrDouble"));
        kyCentrDouble->setMinimum(-10000.000000000000000);
        kyCentrDouble->setMaximum(10000.000000000000000);

        kxCentrDoubleLayout->addWidget(kyCentrDouble);

        kzCentrDouble = new QDoubleSpinBox(kxBox);
        kzCentrDouble->setObjectName(QString::fromUtf8("kzCentrDouble"));
        kzCentrDouble->setMinimum(-10000.000000000000000);
        kzCentrDouble->setMaximum(10000.000000000000000);

        kxCentrDoubleLayout->addWidget(kzCentrDouble);


        kxCentrLauot->setLayout(0, QFormLayout::FieldRole, kxCentrDoubleLayout);


        kxLayot->setLayout(0, QFormLayout::FieldRole, kxCentrLauot);


        verticalLayout_4->addLayout(kxLayot);


        verticalLayout_2->addWidget(kxBox);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        horizontalLayout->addWidget(MainBox);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        horizontalLayout->addWidget(graphicsView);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1233, 22));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Lab_01", nullptr));
        MainBox->setTitle(QString());
        centrObjBox->setTitle(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\321\202\321\200 \321\204\320\270\320\263\321\203\321\200\321\213", nullptr));
        centrTextX->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        centrValueX->setText(QString());
        centrYText->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        centrValueY->setText(QString());
        centrZtetx->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        centrValueZ->setText(QString());
        downloadFigure->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260 \321\204\320\270\320\263\321\203\321\200\321\203", nullptr));
        dxBox->setTitle(QString());
        dxButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\274\320\265\321\201\321\202\320\270\321\202\321\214", nullptr));
        dxText->setText(QCoreApplication::translate("MainWindow", "dX", nullptr));
        dyText->setText(QCoreApplication::translate("MainWindow", "dY", nullptr));
        dzText->setText(QCoreApplication::translate("MainWindow", "dZ", nullptr));
        AngleBox->setTitle(QString());
        AngleButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\262\320\265\321\200\320\275\321\203\321\202\321\214", nullptr));
        AngleXText->setText(QCoreApplication::translate("MainWindow", "\320\243\320\263\320\276\320\273 X", nullptr));
        AngleYtext->setText(QCoreApplication::translate("MainWindow", "\320\243\320\263\320\276\320\273 Y", nullptr));
        AngleZtext->setText(QCoreApplication::translate("MainWindow", "\320\243\320\263\320\276\320\273 Z", nullptr));
        AngleCentrXText->setText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\321\202\321\200 X", nullptr));
        AngleCentrYText->setText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\321\202\321\200 Y", nullptr));
        AngleCentrZText->setText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\321\202\321\200 Z", nullptr));
        kxBox->setTitle(QString());
        kxButton->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        kxText->setText(QCoreApplication::translate("MainWindow", "kX", nullptr));
        kyText->setText(QCoreApplication::translate("MainWindow", "kY", nullptr));
        kzText->setText(QCoreApplication::translate("MainWindow", "kZ", nullptr));
        kxCentText->setText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\321\202\321\200 X", nullptr));
        kyCentrText->setText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\321\202\321\200 Y", nullptr));
        kzCentText->setText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\321\202\321\200 Z", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
