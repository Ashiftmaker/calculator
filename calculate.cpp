#include "calculate.h"
#include<QtMath>

Calculate::Calculate(QObject* parent): QObject(parent) {}

void Calculate::setFirstCalNum(double value) 
{
    m_firstCalNum = value;
}

void Calculate::setOperation(Operation op) 
{
    m_NextOp = op;
}

double Calculate::calculate(double secondCalNum)
{
    switch (m_NextOp) 
    {
    case Add:      m_firstCalNum += secondCalNum; break;
    case Subtract: m_firstCalNum -= secondCalNum; break;
    case Multiply: m_firstCalNum *= secondCalNum; break;
    case Divide:   if (secondCalNum != 0.0)
                    {
                     m_firstCalNum /= secondCalNum; break;
                    }
    default: break;
    }
    emit resultUpdate(m_firstCalNum);
    return m_firstCalNum;
}

void Calculate::reset() 
{
    m_firstCalNum = 0.0;
    m_NextOp = None;
}

void Calculate::percent()
{ 
    m_firstCalNum /= 100.0; 
    emit resultUpdate(m_firstCalNum); 
}
void Calculate::reciprocal()
{ 
    if (m_firstCalNum != 0) m_firstCalNum = 1.0 / m_firstCalNum;
    emit resultUpdate(m_firstCalNum); 
}
void Calculate::square() 
{ 
    m_firstCalNum *= m_firstCalNum;
    emit resultUpdate(m_firstCalNum);
}
void Calculate::sqrt() 
{
    if (m_firstCalNum >= 0)
    {
        m_firstCalNum = qSqrt(m_firstCalNum);
    }
    emit resultUpdate(m_firstCalNum); 
}
void Calculate::numInverse() 
{
    m_firstCalNum = -m_firstCalNum; 
    emit resultUpdate(m_firstCalNum); 
}
