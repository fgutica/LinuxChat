#ifndef APPLICATION_H
#define APPLICATION_H

#include <QMainWindow>
#include "client.h"
#include "dialog.h"

namespace Ui {
class Application;
}

class Application : public QMainWindow
{
    Q_OBJECT

public:
    explicit Application(QWidget *parent = 0);
    ~Application();

private slots:
    void on_actionConnect_to_server_triggered();

private:
    Ui::Application *ui;
};

#endif // APPLICATION_H
