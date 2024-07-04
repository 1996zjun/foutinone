#include <QApplication>
#include "loginwindow.h"
#include "viscomtermodule.h"
#include "particlecountermodule.h"
#include "StepOne.h"
#include "viscomterparams.h"
#include "particlecounterparams.h"
#include "particlecountertest.h"
#include "historyrecords.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginWindow w;
    w.show();
    // StepOne w;
    // w.show();
    // ViscomterModule w;
    // w.show();

    // ParticleCounterModule w;
    // w.show();

    // ParticleCounterTest w;
    // w.show();

    // HistoryRecords h;
    // h.show();
    return a.exec();
}
