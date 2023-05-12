#ifndef SERVICEINFORMATION_H
#define SERVICEINFORMATION_H

#include "serviceInterface.h"
#include <QObject>
#include <QVariant>
#include <QTimer>

class serviceInformation:public QObject,public serviceInterface
{
    Q_OBJECT

public:
    serviceInformation();
    void airSpeed(int);
    void airMoisture(int);
    void temperature(int);
    void rainStatus(int);

signals:
    void notifyAirspeed(int ASpeed);
    void notifyAirMoisture(int AMoisture);
    void notifyTemp(int tem);
    void notifyRain(int rain);

public slots:
    void emitAirspeed();
    void emitAirMoisture();
    void emitTemp();
    void emitRain();


    void startTimer();
    void stopTimer();
    void stopAirspeed();
    void stopAirMoisture();
    void stopTemp();
    void stopRain();
    void startAirspeed();
    void startAirMoisture();
    void startTemp();
    void startRain();

public:

    QTimer airspeed1,airmoisture1,temp1,rain;
};

#endif // SERVICEINFORMATION_H



//Derived Class//
