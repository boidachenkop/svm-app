#ifndef SCRIPTQTMANAGER_H
#define SCRIPTQTMANAGER_H
#include <QString>
#include <QStringList>
#include <QProcess>

#include <stdlib.h>


class ScriptQtManager
{
public:
    static int runCheckData(QString filepath);
    static void runFeatureSelection(QString filepath, int n_features, QString pattern);
    static std::string runPlot(QString filepath, int n_features);
};

#endif // SCRIPTQTMANAGER_H