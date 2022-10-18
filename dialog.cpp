#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)),
            ui->progressBar, SLOT(setValue(int)));
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_2_clicked()
{
    ui->pushButton_2->setText("Your message was sent!");
}

