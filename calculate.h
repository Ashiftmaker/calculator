#pragma once
#include <QObject>

class Calculate : public QObject
{
    Q_OBJECT
public:
    enum Operation { None,Add,Subtract,Multiply,Divide,Percent,Square,Reciprocal,Sqrt,NumInverse};
    explicit Calculate(QObject* parent = nullptr);

    void setFirstCalNum(double value);
    void setOperation(Operation op);
    double calculate(double secondCalNum);//四则运算计算
    //函数计算
    void percent();
    void reciprocal();
    void square();
    void sqrt();
    void numInverse();
    void reset();

signals:
    void resultUpdate(double result);

private:
    double m_firstCalNum = 0.0;
    Operation m_NextOp = Operation::None;
};
