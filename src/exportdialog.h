#ifndef EXPORTDIALOG_H
#define EXPORTDIALOG_H

#include <QDialog>
#include "webexport.h"

namespace Ui {
class exportDialog;
}

class exportDialog : public QDialog
{
    Q_OBJECT

public:
    explicit exportDialog(QWidget *parent = 0);
    ~exportDialog();

protected:

public slots:
    void updateProgress ( qint64 bytesReceived, qint64 bytesTotal );
    void emergencyShutdown();

private:
    Ui::exportDialog *ui;
};

#endif // EXPORTDIALOG_H
