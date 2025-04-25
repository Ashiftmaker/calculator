/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *m_centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *m_labelHistory;
    QLabel *m_labelOutput;
    QGridLayout *gridLayout;
    QPushButton *m_btnNumInverse;
    QPushButton *m_btnNum7;
    QPushButton *m_btnPercent;
    QPushButton *m_btnDiv;
    QPushButton *m_btnNum5;
    QPushButton *m_btnNum3;
    QPushButton *m_btnReasult;
    QPushButton *m_btnSub;
    QPushButton *m_btnSqure;
    QPushButton *m_btnC;
    QPushButton *m_btnNum6;
    QPushButton *m_btnNum2;
    QPushButton *m_btnReciprocal;
    QPushButton *m_btnSqrt;
    QPushButton *m_btnMul;
    QPushButton *m_btnNum0;
    QPushButton *m_btnNum8;
    QPushButton *m_btnCE;
    QPushButton *m_btnNum1;
    QPushButton *m_btnNum9;
    QPushButton *m_btnNum4;
    QPushButton *m_btnBack;
    QPushButton *m_btnAdd;
    QPushButton *m_btnPoint;
    QMenuBar *m_menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(568, 694);
        m_centralwidget = new QWidget(MainWindow);
        m_centralwidget->setObjectName(QString::fromUtf8("m_centralwidget"));
        verticalLayout_2 = new QVBoxLayout(m_centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        m_labelHistory = new QLabel(m_centralwidget);
        m_labelHistory->setObjectName(QString::fromUtf8("m_labelHistory"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(13);
        m_labelHistory->setFont(font);
        m_labelHistory->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(m_labelHistory);

        m_labelOutput = new QLabel(m_centralwidget);
        m_labelOutput->setObjectName(QString::fromUtf8("m_labelOutput"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(20);
        m_labelOutput->setFont(font1);
        m_labelOutput->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(m_labelOutput);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        m_btnNumInverse = new QPushButton(m_centralwidget);
        m_btnNumInverse->setObjectName(QString::fromUtf8("m_btnNumInverse"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_btnNumInverse->sizePolicy().hasHeightForWidth());
        m_btnNumInverse->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(13);
        m_btnNumInverse->setFont(font2);

        gridLayout->addWidget(m_btnNumInverse, 7, 0, 1, 1);

        m_btnNum7 = new QPushButton(m_centralwidget);
        m_btnNum7->setObjectName(QString::fromUtf8("m_btnNum7"));
        sizePolicy.setHeightForWidth(m_btnNum7->sizePolicy().hasHeightForWidth());
        m_btnNum7->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(13);
        font3.setBold(false);
        font3.setWeight(50);
        m_btnNum7->setFont(font3);

        gridLayout->addWidget(m_btnNum7, 3, 0, 1, 1);

        m_btnPercent = new QPushButton(m_centralwidget);
        m_btnPercent->setObjectName(QString::fromUtf8("m_btnPercent"));
        sizePolicy.setHeightForWidth(m_btnPercent->sizePolicy().hasHeightForWidth());
        m_btnPercent->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(13);
        font4.setBold(false);
        font4.setUnderline(false);
        font4.setWeight(50);
        font4.setStrikeOut(false);
        font4.setKerning(true);
        m_btnPercent->setFont(font4);
        m_btnPercent->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    background-color: #E0E0E0; \n"
"    color: black;\n"
"    border: none;              \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover \n"
"{\n"
"    background-color: #D0D0D0;  \n"
"    border: 1px solid #A0A0A0;  \n"
"}\n"
"\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: #C0C0C0;  \n"
"    border: 1px solid #808080;\n"
"}"));

        gridLayout->addWidget(m_btnPercent, 0, 0, 1, 1);

        m_btnDiv = new QPushButton(m_centralwidget);
        m_btnDiv->setObjectName(QString::fromUtf8("m_btnDiv"));
        sizePolicy.setHeightForWidth(m_btnDiv->sizePolicy().hasHeightForWidth());
        m_btnDiv->setSizePolicy(sizePolicy);
        m_btnDiv->setFont(font3);
        m_btnDiv->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    background-color: #E0E0E0; \n"
"    color: black;\n"
"    border: none;              \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover \n"
"{\n"
"    background-color: #D0D0D0;  \n"
"    border: 1px solid #A0A0A0;  \n"
"}\n"
"\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: #C0C0C0;  \n"
"    border: 1px solid #808080;\n"
"}"));

        gridLayout->addWidget(m_btnDiv, 1, 4, 1, 1);

        m_btnNum5 = new QPushButton(m_centralwidget);
        m_btnNum5->setObjectName(QString::fromUtf8("m_btnNum5"));
        sizePolicy.setHeightForWidth(m_btnNum5->sizePolicy().hasHeightForWidth());
        m_btnNum5->setSizePolicy(sizePolicy);
        m_btnNum5->setFont(font2);

        gridLayout->addWidget(m_btnNum5, 4, 1, 1, 1);

        m_btnNum3 = new QPushButton(m_centralwidget);
        m_btnNum3->setObjectName(QString::fromUtf8("m_btnNum3"));
        sizePolicy.setHeightForWidth(m_btnNum3->sizePolicy().hasHeightForWidth());
        m_btnNum3->setSizePolicy(sizePolicy);
        m_btnNum3->setFont(font2);

        gridLayout->addWidget(m_btnNum3, 5, 2, 1, 1);

        m_btnReasult = new QPushButton(m_centralwidget);
        m_btnReasult->setObjectName(QString::fromUtf8("m_btnReasult"));
        sizePolicy.setHeightForWidth(m_btnReasult->sizePolicy().hasHeightForWidth());
        m_btnReasult->setSizePolicy(sizePolicy);
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font5.setPointSize(15);
        m_btnReasult->setFont(font5);
        m_btnReasult->setStyleSheet(QString::fromUtf8("QPushButton\n"
" {\n"
"    background-color: #4169E1; \n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    padding: 8px 16px;       \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #365EBF;\n"
"    border: 1px solid #2B4B9F;  \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #2B4B9F;  \n"
"    border: 1px solid #1F3A7F;  \n"
"}"));

        gridLayout->addWidget(m_btnReasult, 7, 4, 1, 1);

        m_btnSub = new QPushButton(m_centralwidget);
        m_btnSub->setObjectName(QString::fromUtf8("m_btnSub"));
        sizePolicy.setHeightForWidth(m_btnSub->sizePolicy().hasHeightForWidth());
        m_btnSub->setSizePolicy(sizePolicy);
        QFont font6;
        font6.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font6.setPointSize(20);
        font6.setBold(false);
        font6.setWeight(50);
        m_btnSub->setFont(font6);
        m_btnSub->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    background-color: #E0E0E0; \n"
"    color: black;\n"
"    border: none;              \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover \n"
"{\n"
"    background-color: #D0D0D0;  \n"
"    border: 1px solid #A0A0A0;  \n"
"}\n"
"\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: #C0C0C0;  \n"
"    border: 1px solid #808080;\n"
"}"));

        gridLayout->addWidget(m_btnSub, 4, 4, 1, 1);

        m_btnSqure = new QPushButton(m_centralwidget);
        m_btnSqure->setObjectName(QString::fromUtf8("m_btnSqure"));
        sizePolicy.setHeightForWidth(m_btnSqure->sizePolicy().hasHeightForWidth());
        m_btnSqure->setSizePolicy(sizePolicy);
        QFont font7;
        font7.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font7.setPointSize(15);
        font7.setBold(false);
        font7.setWeight(50);
        m_btnSqure->setFont(font7);
        m_btnSqure->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    background-color: #E0E0E0; \n"
"    color: black;\n"
"    border: none;              \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover \n"
"{\n"
"    background-color: #D0D0D0;  \n"
"    border: 1px solid #A0A0A0;  \n"
"}\n"
"\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: #C0C0C0;  \n"
"    border: 1px solid #808080;\n"
"}"));

        gridLayout->addWidget(m_btnSqure, 1, 1, 1, 1);

        m_btnC = new QPushButton(m_centralwidget);
        m_btnC->setObjectName(QString::fromUtf8("m_btnC"));
        sizePolicy.setHeightForWidth(m_btnC->sizePolicy().hasHeightForWidth());
        m_btnC->setSizePolicy(sizePolicy);
        m_btnC->setFont(font2);
        m_btnC->setAutoFillBackground(false);
        m_btnC->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    background-color: #E0E0E0; \n"
"    color: black;\n"
"    border: none;              \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover \n"
"{\n"
"    background-color: #D0D0D0;  \n"
"    border: 1px solid #A0A0A0;  \n"
"}\n"
"\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: #C0C0C0;  \n"
"    border: 1px solid #808080;\n"
"}"));

        gridLayout->addWidget(m_btnC, 0, 2, 1, 1);

        m_btnNum6 = new QPushButton(m_centralwidget);
        m_btnNum6->setObjectName(QString::fromUtf8("m_btnNum6"));
        sizePolicy.setHeightForWidth(m_btnNum6->sizePolicy().hasHeightForWidth());
        m_btnNum6->setSizePolicy(sizePolicy);
        m_btnNum6->setFont(font2);

        gridLayout->addWidget(m_btnNum6, 4, 2, 1, 1);

        m_btnNum2 = new QPushButton(m_centralwidget);
        m_btnNum2->setObjectName(QString::fromUtf8("m_btnNum2"));
        sizePolicy.setHeightForWidth(m_btnNum2->sizePolicy().hasHeightForWidth());
        m_btnNum2->setSizePolicy(sizePolicy);
        m_btnNum2->setFont(font2);

        gridLayout->addWidget(m_btnNum2, 5, 1, 1, 1);

        m_btnReciprocal = new QPushButton(m_centralwidget);
        m_btnReciprocal->setObjectName(QString::fromUtf8("m_btnReciprocal"));
        sizePolicy.setHeightForWidth(m_btnReciprocal->sizePolicy().hasHeightForWidth());
        m_btnReciprocal->setSizePolicy(sizePolicy);
        m_btnReciprocal->setFont(font3);
        m_btnReciprocal->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    background-color: #E0E0E0; \n"
"    color: black;\n"
"    border: none;              \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover \n"
"{\n"
"    background-color: #D0D0D0;  \n"
"    border: 1px solid #A0A0A0;  \n"
"}\n"
"\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: #C0C0C0;  \n"
"    border: 1px solid #808080;\n"
"}"));

        gridLayout->addWidget(m_btnReciprocal, 1, 0, 1, 1);

        m_btnSqrt = new QPushButton(m_centralwidget);
        m_btnSqrt->setObjectName(QString::fromUtf8("m_btnSqrt"));
        sizePolicy.setHeightForWidth(m_btnSqrt->sizePolicy().hasHeightForWidth());
        m_btnSqrt->setSizePolicy(sizePolicy);
        m_btnSqrt->setFont(font7);
        m_btnSqrt->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    background-color: #E0E0E0; \n"
"    color: black;\n"
"    border: none;              \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover \n"
"{\n"
"    background-color: #D0D0D0;  \n"
"    border: 1px solid #A0A0A0;  \n"
"}\n"
"\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: #C0C0C0;  \n"
"    border: 1px solid #808080;\n"
"}"));

        gridLayout->addWidget(m_btnSqrt, 1, 2, 1, 1);

        m_btnMul = new QPushButton(m_centralwidget);
        m_btnMul->setObjectName(QString::fromUtf8("m_btnMul"));
        sizePolicy.setHeightForWidth(m_btnMul->sizePolicy().hasHeightForWidth());
        m_btnMul->setSizePolicy(sizePolicy);
        m_btnMul->setFont(font7);
        m_btnMul->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    background-color: #E0E0E0; \n"
"    color: black;\n"
"    border: none;              \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover \n"
"{\n"
"    background-color: #D0D0D0;  \n"
"    border: 1px solid #A0A0A0;  \n"
"}\n"
"\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: #C0C0C0;  \n"
"    border: 1px solid #808080;\n"
"}"));

        gridLayout->addWidget(m_btnMul, 3, 4, 1, 1);

        m_btnNum0 = new QPushButton(m_centralwidget);
        m_btnNum0->setObjectName(QString::fromUtf8("m_btnNum0"));
        sizePolicy.setHeightForWidth(m_btnNum0->sizePolicy().hasHeightForWidth());
        m_btnNum0->setSizePolicy(sizePolicy);
        m_btnNum0->setFont(font2);

        gridLayout->addWidget(m_btnNum0, 7, 1, 1, 1);

        m_btnNum8 = new QPushButton(m_centralwidget);
        m_btnNum8->setObjectName(QString::fromUtf8("m_btnNum8"));
        sizePolicy.setHeightForWidth(m_btnNum8->sizePolicy().hasHeightForWidth());
        m_btnNum8->setSizePolicy(sizePolicy);
        m_btnNum8->setFont(font3);

        gridLayout->addWidget(m_btnNum8, 3, 1, 1, 1);

        m_btnCE = new QPushButton(m_centralwidget);
        m_btnCE->setObjectName(QString::fromUtf8("m_btnCE"));
        sizePolicy.setHeightForWidth(m_btnCE->sizePolicy().hasHeightForWidth());
        m_btnCE->setSizePolicy(sizePolicy);
        m_btnCE->setFont(font3);
        m_btnCE->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    background-color: #E0E0E0; \n"
"    color: black;\n"
"    border: none;              \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover \n"
"{\n"
"    background-color: #D0D0D0;  \n"
"    border: 1px solid #A0A0A0;  \n"
"}\n"
"\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: #C0C0C0;  \n"
"    border: 1px solid #808080;\n"
"}"));

        gridLayout->addWidget(m_btnCE, 0, 1, 1, 1);

        m_btnNum1 = new QPushButton(m_centralwidget);
        m_btnNum1->setObjectName(QString::fromUtf8("m_btnNum1"));
        sizePolicy.setHeightForWidth(m_btnNum1->sizePolicy().hasHeightForWidth());
        m_btnNum1->setSizePolicy(sizePolicy);
        m_btnNum1->setFont(font2);

        gridLayout->addWidget(m_btnNum1, 5, 0, 1, 1);

        m_btnNum9 = new QPushButton(m_centralwidget);
        m_btnNum9->setObjectName(QString::fromUtf8("m_btnNum9"));
        sizePolicy.setHeightForWidth(m_btnNum9->sizePolicy().hasHeightForWidth());
        m_btnNum9->setSizePolicy(sizePolicy);
        m_btnNum9->setFont(font3);
        m_btnNum9->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(m_btnNum9, 3, 2, 1, 1);

        m_btnNum4 = new QPushButton(m_centralwidget);
        m_btnNum4->setObjectName(QString::fromUtf8("m_btnNum4"));
        sizePolicy.setHeightForWidth(m_btnNum4->sizePolicy().hasHeightForWidth());
        m_btnNum4->setSizePolicy(sizePolicy);
        m_btnNum4->setFont(font2);

        gridLayout->addWidget(m_btnNum4, 4, 0, 1, 1);

        m_btnBack = new QPushButton(m_centralwidget);
        m_btnBack->setObjectName(QString::fromUtf8("m_btnBack"));
        sizePolicy.setHeightForWidth(m_btnBack->sizePolicy().hasHeightForWidth());
        m_btnBack->setSizePolicy(sizePolicy);
        QFont font8;
        font8.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font8.setPointSize(13);
        font8.setBold(true);
        font8.setWeight(75);
        m_btnBack->setFont(font8);
        m_btnBack->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    background-color: #E0E0E0; \n"
"    color: black;\n"
"    border: none;              \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover \n"
"{\n"
"    background-color: #D0D0D0;  \n"
"    border: 1px solid #A0A0A0;  \n"
"}\n"
"\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: #C0C0C0;  \n"
"    border: 1px solid #808080;\n"
"}"));

        gridLayout->addWidget(m_btnBack, 0, 4, 1, 1);

        m_btnAdd = new QPushButton(m_centralwidget);
        m_btnAdd->setObjectName(QString::fromUtf8("m_btnAdd"));
        sizePolicy.setHeightForWidth(m_btnAdd->sizePolicy().hasHeightForWidth());
        m_btnAdd->setSizePolicy(sizePolicy);
        m_btnAdd->setFont(font2);
        m_btnAdd->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    background-color: #E0E0E0; \n"
"    color: black;\n"
"    border: none;              \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover \n"
"{\n"
"    background-color: #D0D0D0;  \n"
"    border: 1px solid #A0A0A0;  \n"
"}\n"
"\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: #C0C0C0;  \n"
"    border: 1px solid #808080;\n"
"}"));

        gridLayout->addWidget(m_btnAdd, 5, 4, 1, 1);

        m_btnPoint = new QPushButton(m_centralwidget);
        m_btnPoint->setObjectName(QString::fromUtf8("m_btnPoint"));
        sizePolicy.setHeightForWidth(m_btnPoint->sizePolicy().hasHeightForWidth());
        m_btnPoint->setSizePolicy(sizePolicy);
        m_btnPoint->setFont(font5);
        m_btnPoint->setStyleSheet(QString::fromUtf8("\n"
"QPushButton:disabled \n"
"{\n"
"    background-color: #A0A0A0;\n"
"    color: #E0E0E0;\n"
"}\n"
"\n"
"\n"
"QPushButton:focus\n"
" {\n"
"    outline: 2px solid #FFD700;  \n"
"}"));

        gridLayout->addWidget(m_btnPoint, 7, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 3);
        verticalLayout->setStretch(2, 10);

        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(m_centralwidget);
        m_menubar = new QMenuBar(MainWindow);
        m_menubar->setObjectName(QString::fromUtf8("m_menubar"));
        m_menubar->setGeometry(QRect(0, 0, 568, 26));
        MainWindow->setMenuBar(m_menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        m_labelHistory->setText(QString());
        m_labelOutput->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        m_btnNumInverse->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        m_btnNum7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        m_btnPercent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        m_btnDiv->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        m_btnNum5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        m_btnNum3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        m_btnReasult->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        m_btnSub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        m_btnSqure->setText(QCoreApplication::translate("MainWindow", "x\302\262", nullptr));
        m_btnC->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        m_btnNum6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        m_btnNum2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        m_btnReciprocal->setText(QCoreApplication::translate("MainWindow", "1/x", nullptr));
        m_btnSqrt->setText(QCoreApplication::translate("MainWindow", "\342\210\232x", nullptr));
        m_btnMul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        m_btnNum0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        m_btnNum8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        m_btnCE->setText(QCoreApplication::translate("MainWindow", "CE", nullptr));
        m_btnNum1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        m_btnNum9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        m_btnNum4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        m_btnBack->setText(QCoreApplication::translate("MainWindow", "\342\206\220", nullptr));
        m_btnAdd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        m_btnPoint->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
