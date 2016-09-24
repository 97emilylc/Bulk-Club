#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QFile>

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();

private:
    Ui::Login *ui;

private slots:
    void ClickSubmit();
};

#endif // LOGIN_H
