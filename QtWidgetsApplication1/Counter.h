#pragma once
#ifndef COUNTER_H_
#define COUNTER_H_

#include <QObject>

class Counter : public QObject
{
	Q_OBJECT
public:
	Counter() { m_value = 0; }
	int value() const { return m_value; }
public slots:
	void setValue(int value);
signals:
	void valueChanged(int newValue);
private:
	int m_value;
};

#endif
