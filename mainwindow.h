#pragma once
#include <QMainWindow>
#include "calculate.h"

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

private slots:
    void onNumberClicked();
    void onOperatorClicked(Calculate::Operation op);
    void onEqualClicked();
    void onClearClicked();
    void onClearCEClicked();
    void onBackClicked();
    void onPointClicked();
    void onResultUpdate(double result);

private:
    Ui::MainWindow* ui;
    Calculate m_calculate;
    QString m_currentInput;
    bool m_opStatus = true; // true��ʱ�������������false��ʱ��������δ���
    void updateDisplay();
    void InitConnections();
};