#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include <QString>
#include <QLabel>

#include "scriptqtmanager.h"

class FileManager
{
public:
    FileManager(QLabel*, QLabel*, QLabel*);
    int setTrainFilepath(QString);
    int setTestFilepath(QString);
    int setModelFilepath(QString);
private:
    int getNFeatures();

    QString _train_input_filepath{};
    QString _test_input_filepath{};
    QString _model_filepath{};

    QLabel* _train_filepath_label;
    QLabel* _test_filepath_label;
    QLabel* _model_filepath_label;

    int _n_features;
    int _test_n_features;
};

#endif // FILEMANAGER_H
