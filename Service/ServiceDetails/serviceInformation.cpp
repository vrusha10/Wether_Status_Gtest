#include "serviceInformation.h"
#include <QString>
#include <QDebug>

static int emitairmoisture ;
static int emitairspeed ;
static int emittemp ;
static int emitrain ;

serviceInformation::serviceInformation()
{
//QTimer *timer = new QTimer(this);
connect(&airspeed1, &QTimer::timeout, this, &serviceInformation::emitAirspeed);
connect(&airmoisture1, &QTimer::timeout, this, &serviceInformation::emitAirMoisture);
connect(&temp1, &QTimer::timeout, this, &serviceInformation::emitTemp);
connect(&rain, &QTimer::timeout, this, &serviceInformation::emitRain);

}


void serviceInformation::airSpeed(int airspeed2)
{
    airspeed2=emitairspeed;
    qDebug()<<"AirSpeed Derived: "<<airspeed2;
}

void serviceInformation::airMoisture(int airmoisture2)
{
   airmoisture2=emitairmoisture;
   qDebug()<<"AirMoisture Derived: "<<airmoisture2;
}

void serviceInformation::temperature(int temp2)
{
   temp2=emittemp;
   qDebug()<<"Temperature Derived: "<<temp2;
}

void serviceInformation::rainStatus(int rain1)
{
   rain1=emitrain;
   qDebug()<<"Rain Derived: "<<rain1;
}


/******************************************Emit Function******************************************/
void serviceInformation::emitAirspeed()
{
    emitairspeed = emitairspeed + 1;
    if(emitairspeed<=100){
    emit notifyAirspeed(emitairspeed);
    }
    else {
        emitairspeed=0;
    }
//    return emitairspeed;
}

void serviceInformation::emitAirMoisture()
{
    emitairmoisture = emitairmoisture + 1;
    if(emitairmoisture<=100){
    emit notifyAirMoisture(emitairmoisture);
    }
    else {
    emitairmoisture=0;
    }
//    return emitairmoisture;
}

void serviceInformation::emitTemp()
{
    emittemp = emittemp + 1;
    if(emittemp<=100){
    emit notifyTemp(emittemp);
    }
    else {
    emittemp=0;
    }
//    return emittemp;
}

void serviceInformation::emitRain()
{
    emitrain = emitrain + 1;
    if(emitrain<=100){
    emit notifyRain(emitrain);
    }
    else {
    emitrain=0;
    }
//    return emitrain;
}


/******************************************Emit Function******************************************/


/******************************************Set Timer******************************************/
void serviceInformation::startTimer()
{
    airspeed1.start(500);
    airmoisture1.start(1000);
    temp1.start(2000);
    rain.start(5000);
}
/******************************************Set Timer******************************************/


/******************************************Stop Timer******************************************/
void serviceInformation::stopTimer()
{
    airspeed1.stop();
    airmoisture1.stop();
    temp1.stop();
    rain.stop();
}
/******************************************Stop Timer******************************************/


/******************************************Stop Timer******************************************/
void serviceInformation::stopAirspeed()
{
   airspeed1.stop();
}

void serviceInformation::stopAirMoisture()
{
    airmoisture1.stop();
}

void serviceInformation::stopTemp()
{
    temp1.stop();
}

void serviceInformation::stopRain()
{
    rain.stop();
}
/******************************************Stop Timer******************************************/


/******************************************Start Timer******************************************/
void serviceInformation::startAirspeed()
{
    airspeed1.start(500);
}

void serviceInformation::startAirMoisture()
{
    airmoisture1.start(1000);
}

void serviceInformation::startTemp()
{
    temp1.start(2000);
}

void serviceInformation::startRain()
{
    rain.start(5000);
}
/******************************************Start Timer******************************************/
