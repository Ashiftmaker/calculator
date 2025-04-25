#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <cmath>

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow) 
{
    ui->setupUi(this);
    m_currentInput = "0";
    InitConnections();
    updateDisplay();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::InitConnections()
{
    //数字按钮信号与槽连接
    QList<QPushButton*> numberButtons = {ui->m_btnNum0, ui->m_btnNum1, ui->m_btnNum2, ui->m_btnNum3, ui->m_btnNum4, ui->m_btnNum5, ui->m_btnNum6, ui->m_btnNum7,ui->m_btnNum8, ui->m_btnNum9 };
    for (auto btn : numberButtons) 
    {
        connect(btn, &QPushButton::clicked, this, &MainWindow::onNumberClicked);
    }
    // 运算按钮信号与槽连接
    connect(ui->m_btnAdd, &QPushButton::clicked, [this] { onOperatorClicked(Calculate::Add); });
    connect(ui->m_btnSub, &QPushButton::clicked, [this] { onOperatorClicked(Calculate::Subtract); });
    connect(ui->m_btnMul, &QPushButton::clicked, [this] { onOperatorClicked(Calculate::Multiply); });
    connect(ui->m_btnDiv, &QPushButton::clicked, [this] { onOperatorClicked(Calculate::Divide); });
    connect(ui->m_btnPercent, &QPushButton::clicked, [this] { onOperatorClicked(Calculate::Percent); });
    connect(ui->m_btnReciprocal, &QPushButton::clicked, [this] { onOperatorClicked(Calculate::Reciprocal); });
    connect(ui->m_btnSqure, &QPushButton::clicked, [this] { onOperatorClicked(Calculate::Square); });
    connect(ui->m_btnSqrt, &QPushButton::clicked,[this] { onOperatorClicked(Calculate::Sqrt); });
    connect(ui->m_btnNumInverse, &QPushButton::clicked, [this] { onOperatorClicked(Calculate::NumInverse); });
    // 功能信号与槽连接
    connect(ui->m_btnReasult, &QPushButton::clicked, this, &MainWindow::onEqualClicked);
    connect(ui->m_btnC, &QPushButton::clicked, this, &MainWindow::onClearClicked);
    connect(ui->m_btnCE, &QPushButton::clicked, this, &MainWindow::onClearCEClicked);
    connect(ui->m_btnBack, &QPushButton::clicked, this, &MainWindow::onBackClicked);
    connect(ui->m_btnPoint, &QPushButton::clicked, this, &MainWindow::onPointClicked);
    

    // calculate信号与槽连接
    connect(&m_calculate, &Calculate::resultUpdate, this, &MainWindow::onResultUpdate);
}

void MainWindow::onNumberClicked() 
{
    QPushButton* btn = qobject_cast<QPushButton*>(sender());
    if (!btn) return;
    if (m_opStatus) 
    {
        m_currentInput = btn->text();
        m_opStatus = false;
    }
    else {
        if (m_currentInput == "0")
            m_currentInput = btn->text();
        else
            m_currentInput += btn->text();
    }
    updateDisplay();
}

void MainWindow::onOperatorClicked(Calculate::Operation op)
{
    // 四则运算
    if (op == Calculate::Add || op == Calculate::Subtract ||
        op == Calculate::Multiply || op == Calculate::Divide) 
    {
        double value = m_currentInput.toDouble();
        m_calculate.setFirstCalNum(value);
        m_calculate.setOperation(op);
        m_opStatus = true; 
        QChar opChar = (op == Calculate::Add ? '+' :
            op == Calculate::Subtract ? '-' :
            op == Calculate::Multiply ? QChar(0x00D7) : '/');
        ui->m_labelHistory->setText(m_currentInput + opChar);
    }
    else {
        // 即时运算
        m_calculate.setFirstCalNum(m_currentInput.toDouble());
        switch (op) 
        {
        case Calculate::Percent:    m_calculate.percent();    break;
        case Calculate::Reciprocal: m_calculate.reciprocal(); break;
        case Calculate::Square:     m_calculate.square();     break;
        case Calculate::Sqrt:       m_calculate.sqrt(); break;
        case Calculate::NumInverse: m_calculate.numInverse(); break;
        default: break;
        }
        m_opStatus = true; 
        ui->m_labelHistory->clear();
    }
}

void MainWindow::onEqualClicked() 
{
    double second = m_currentInput.toDouble();
    m_calculate.calculate(second);
    m_opStatus = true;
}

void MainWindow::onClearClicked() 
{
    m_calculate.reset();
    m_currentInput = "0";
    m_opStatus = true;
    ui->m_labelHistory->clear();
    updateDisplay();
}

void MainWindow::onClearCEClicked()
{
    m_currentInput = "0";
    m_opStatus = true;
    updateDisplay();
}

void MainWindow::onBackClicked() 
{
    if (!m_opStatus && m_currentInput.size() > 1) 
    {
        m_currentInput.chop(1);
    }
    else {
        m_currentInput = "0";
        m_opStatus = true;
    }
    updateDisplay();
}

void MainWindow::onPointClicked()
{
    if (m_opStatus)
    {
        m_currentInput = "0.";
        m_opStatus = false;
    }
    else if (!m_currentInput.contains('.'))
    {
        m_currentInput += '.';
    }
    updateDisplay();
}

void MainWindow::onResultUpdate(double result) 
{
    m_currentInput = QString::number(result);
    ui->m_labelHistory->clear();
    updateDisplay();
}

void MainWindow::updateDisplay() 
{
    ui->m_labelOutput->setText(m_currentInput);
}