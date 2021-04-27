#ifndef SCREEN_H
#define SCREEN_H

#include "profilepage.h"
#include "petlist.h"
#include <QMainWindow>

namespace Ui {
class Screen;
}

class Screen : public QMainWindow
{
    Q_OBJECT

public:
    explicit Screen(QWidget *parent = 0);
    ~Screen();
    void initialize();

private slots:

    void on_profileButton_clicked();

    void on_petListButton_clicked();

private:
    Ui::Screen *ui;
    profilePage* profileWindow;
    petList* petListWindow;
};

#endif // SCREEN_H
