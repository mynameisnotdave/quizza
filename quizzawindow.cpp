#include "quizzawindow.h"
#include "ui_quizzawindow.h"
#include "quizfileparser.h"

QuizzaWindow::QuizzaWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QuizzaWindow)
{
    ui->setupUi(this);
    quiztitle = "Welcome to Quizza! Select a quiz.";
    ui->textEdit->setText(quiztitle);
}

QuizzaWindow::~QuizzaWindow()
{
    delete ui;
}

void QuizzaWindow::selectQuiz()
{
    if() {
        ui->pushButton->isChecked();
    }
    fileName::getOpenFileName(this,
        tr("Open quiz"), "/home/aidan", tr("Quizza config files (*.qza)"));




}
