#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "serviceInformation.h"
#include <QtTest/QtTest>

/******************************************Bool Function Testing**********************************************/
//TEST(serviceTest,WhenInputConnectionAirSpeedFunctionCorrect){

//    const bool expectedAirSpeed = true;
//    serviceInformation obj;
//    EXPECT_EQ(true,obj.emitAirspeed());
//}

//TEST(serviceTest,WhenInputConnectionAirMoistureFunctionCorrect){

//    const bool expectedAirMoisture = true;
//    serviceInformation obj;
//    EXPECT_EQ(true,obj.emitAirMoisture());
//}

//TEST(serviceTest,WhenInputConnectionTempFunctionCorrect){

//    const bool expectedTemp = true;
//    serviceInformation obj;
//    EXPECT_EQ(true,obj.emitTemp());
//}

//TEST(serviceTest,WhenInputConnectionRainFunctionCorrect){

//    const bool expectedRain = true;
//    serviceInformation obj;
//    EXPECT_EQ(true,obj.emitRain());
//}

//TEST(serviceTest,WhenInputConnectionRainFunctionCorrect){

//    const bool expectedRain = true;
//    serviceInformation obj;
//    EXPECT_EQ(true,obj.emitRain());
//}
/******************************************Bool Function Testing**********************************************/

/******************************************void Function Testing(Signal & Slot)**********************************************/
TEST(ServiceTest, emitAirspeed) {
    serviceInformation speed;
    QSignalSpy spy(&speed, SIGNAL(notifyAirspeed(int)));
    speed.emitAirspeed();
    EXPECT_EQ(spy.count(), 1);
    QList<QVariant> args = spy.takeFirst();
    EXPECT_EQ(args.at(0).toInt(), 1);
}


TEST(ServiceTest, emitAirMoisture) {
    serviceInformation moisture;
    QSignalSpy spy(&moisture, SIGNAL(notifyAirMoisture(int)));
    moisture.emitAirMoisture();
    ASSERT_EQ(spy.count(), 1);
    QList<QVariant> args = spy.takeFirst();
    ASSERT_EQ(args.at(0).toInt(), 1);
}


TEST(ServiceTest, emitTemp) {
    serviceInformation temp;
    QSignalSpy spy(&temp, SIGNAL(notifyTemp(int)));
    temp.emitTemp();
    ASSERT_EQ(spy.count(), 1);
    QList<QVariant> args = spy.takeFirst();
    ASSERT_EQ(args.at(0).toInt(), 1);
}


TEST(ServiceTest, emitRain) {
    serviceInformation rain;
    QSignalSpy spy(&rain, SIGNAL(notifyRain(int)));
    rain.emitRain();
    ASSERT_EQ(spy.count(), 1);
    QList<QVariant> args = spy.takeFirst();
    ASSERT_EQ(args.at(0).toInt(), 1);
}

TEST(ServiceTest, startAirspeed) {
    serviceInformation timer;
    QSignalSpy spy1(&timer, SIGNAL(notifyAirspeed(int)));
    timer.startAirspeed();
    // Wait for the signals to be emitted
    QTest::qWait(5000);
    ASSERT_GT(spy1.count(), 0);
}

TEST(ServiceTest, startAirMoisture) {
    serviceInformation timer;
    QSignalSpy spy1(&timer, SIGNAL(notifyAirMoisture(int)));
    timer.startAirMoisture();
    // Wait for the signals to be emitted
    QTest::qWait(5000);
    ASSERT_GT(spy1.count(), 0);
}

TEST(ServiceTest, startTemp) {
    serviceInformation timer;
    QSignalSpy spy3(&timer, SIGNAL(notifyTemp(int)));
    timer.startTemp();
    // Wait for the signals to be emitted
    QTest::qWait(5000);
    ASSERT_GT(spy3.count(), 0);
}

TEST(ServiceTest, startRain) {
    serviceInformation timer;
    QSignalSpy spy4(&timer, SIGNAL(notifyRain(int)));
    timer.startRain();
    // Wait for the signals to be emitted
    QTest::qWait(5000);
    ASSERT_GT(spy4.count(), 0);
}


//TEST(ServiceTest, startTimer) {
//    serviceInformation timer;
//    QSignalSpy spy1(&timer, SIGNAL(notifyRain(int)));
//    QSignalSpy spy2(&timer, SIGNAL(notifyAirMoisture(int)));
//    QSignalSpy spy3(&timer, SIGNAL(notifyTemp(int)));
//    QSignalSpy spy4(&timer, SIGNAL(notifyRain(int)));
//    timer.startTimer();
////    // Wait for the signals to be emitted
//    QTest::qWait(5000);
//    ASSERT_GT(spy1.count(), 0);
//    ASSERT_GT(spy2.count(), 0);
//    ASSERT_GT(spy3.count(), 0);
//    ASSERT_GT(spy4.count(), 0);
//}
/******************************************void Function Testing(Signal & Slot)**********************************************/

