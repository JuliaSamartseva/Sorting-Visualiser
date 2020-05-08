/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *painterLayout;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *generateArray;
    QSlider *arraySize;
    QComboBox *chooseAlgorithm;
    QPushButton *startSort;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *labelSort;
    QSlider *sortSpeed;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1248, 772);
        QFont font;
        font.setFamily(QString::fromUtf8("Yu Gothic Light"));
        font.setPointSize(10);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(91, 79, 1151, 631));
        painterLayout = new QHBoxLayout(layoutWidget);
        painterLayout->setObjectName(QString::fromUtf8("painterLayout"));
        painterLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 0, 1231, 81));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        generateArray = new QPushButton(horizontalLayoutWidget);
        generateArray->setObjectName(QString::fromUtf8("generateArray"));

        verticalLayout_2->addWidget(generateArray);

        arraySize = new QSlider(horizontalLayoutWidget);
        arraySize->setObjectName(QString::fromUtf8("arraySize"));
        arraySize->setMinimum(20);
        arraySize->setMaximum(200);
        arraySize->setSliderPosition(100);
        arraySize->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(arraySize);


        horizontalLayout->addLayout(verticalLayout_2);

        chooseAlgorithm = new QComboBox(horizontalLayoutWidget);
        chooseAlgorithm->addItem(QString());
        chooseAlgorithm->addItem(QString());
        chooseAlgorithm->addItem(QString());
        chooseAlgorithm->addItem(QString());
        chooseAlgorithm->addItem(QString());
        chooseAlgorithm->setObjectName(QString::fromUtf8("chooseAlgorithm"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chooseAlgorithm->sizePolicy().hasHeightForWidth());
        chooseAlgorithm->setSizePolicy(sizePolicy);
        chooseAlgorithm->setMinimumSize(QSize(180, 0));

        horizontalLayout->addWidget(chooseAlgorithm);

        startSort = new QPushButton(horizontalLayoutWidget);
        startSort->setObjectName(QString::fromUtf8("startSort"));

        horizontalLayout->addWidget(startSort);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 79, 82, 631));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelSort = new QLabel(verticalLayoutWidget);
        labelSort->setObjectName(QString::fromUtf8("labelSort"));

        verticalLayout->addWidget(labelSort, 0, Qt::AlignHCenter);

        sortSpeed = new QSlider(verticalLayoutWidget);
        sortSpeed->setObjectName(QString::fromUtf8("sortSpeed"));
        sortSpeed->setMinimum(100);
        sortSpeed->setMaximum(10000);
        sortSpeed->setSliderPosition(5000);
        sortSpeed->setOrientation(Qt::Vertical);
        sortSpeed->setInvertedAppearance(true);

        verticalLayout->addWidget(sortSpeed, 0, Qt::AlignHCenter);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1248, 28));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        generateArray->setText(QApplication::translate("MainWindow", "Generate new array of size", nullptr));
        chooseAlgorithm->setItemText(0, QApplication::translate("MainWindow", "Quick sort", nullptr));
        chooseAlgorithm->setItemText(1, QApplication::translate("MainWindow", "Merge sort", nullptr));
        chooseAlgorithm->setItemText(2, QApplication::translate("MainWindow", "Insertion sort", nullptr));
        chooseAlgorithm->setItemText(3, QApplication::translate("MainWindow", "Selection sort", nullptr));
        chooseAlgorithm->setItemText(4, QApplication::translate("MainWindow", "Cocktail sort", nullptr));

        startSort->setText(QApplication::translate("MainWindow", "Sort !", nullptr));
        labelSort->setText(QApplication::translate("MainWindow", "Sort speed", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
