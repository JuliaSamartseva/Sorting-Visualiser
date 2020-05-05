#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <painter.h>
#include <sortinganimation.h>
#include <sortingalgorithms.h>
#include <controller.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    Ui::MainWindow *ui;
    Controller *controller;
    SortingAnimation* animation;

private slots:
    void on_generateArray_clicked();
    void on_startSort_clicked();
};
#endif // MAINWINDOW_H
