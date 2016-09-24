#include "login.h"
#include "ui_login.h"

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
    QString usernameKey = ui->boxUsername->text();
    QString passwordKey = ui->boxPassword->text();
    QString username;
    QString password;

    QFile acntFile("accounts.txt");
    bool correct = false;
    bool lost = true;

    acntFile.open(QIODevice::ReadOnly);

    while(!acntFile.atEnd() && lost)
    {
        // get username line

        if(username == usernameKey)
        {
            // get password line
            lost = false;

            if(password == passwordKey)
            {
                ui->loginErrorLabel->setText("Logging in...");
                // get account type
                correct = true;
            }
            else
            {
                ui->loginErrorLabel->setText("Invalid username or password.");
            }
        }
        else
        {
            // ignore password line
            // ignore account type
        }
    }

    if(lost)
    {
        ui->loginErrorLabel->setText("Invalid username or password.");
    }
}
