#include<iostream>
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "serviceInformation.h"
#include <QCoreApplication>

using namespace std;
int main(int argc, char **argv)
{
    QCoreApplication a(argc,argv);
    ::testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
    serviceInformation s;
    s.startTimer();
}
