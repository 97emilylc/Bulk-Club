#include "login.h"
#include "ui_login.h"

#include "display.h"

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    connect(ui->SubmitLogin, SIGNAL(released()), this, SLOT(ClickSubmit()));
}

Login::~Login()
{
    delete ui;
}

void Login::ClickSubmit()
{
    QString usernameKey;
    QString passwordKey;
    QString username = "hello";
    QString password = "hello";

    QFile acntFile("accounts.txt");
    bool correct = false;

    acntFile.open(QIODevice::ReadOnly);

    usernameKey = ui->boxUsername->text();
    passwordKey = ui->boxPassword->text();

    if(username == usernameKey && password == passwordKey)
    {
        ui->loginErrorLabel->setText("Logging in...");
        correct = true;
    }
    else
    {
        ui->loginErrorLabel->setText("Invalid username or password.");
    }

    if(correct)
    {
        close();
    }
}
