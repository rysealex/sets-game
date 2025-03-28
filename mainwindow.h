#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QRadioButton>
#include <QIcon>
#include <QPalette>
#include <QColor>
#include <QMessageBox>
#include <random>
#include <ctime>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void onPushButtonClicked(QPushButton *button, QString iconName);
    void onRadioButtonClicked(bool checked);
    void onCheckSetClicked();

private:
    QPushButton* selectedCard1 = nullptr;
    QPushButton* selectedCard2 = nullptr;
    QPushButton* selectedCard3 = nullptr;

    void checkSet(QPushButton *button1, QPushButton *button2, QPushButton *button3);
    template <typename T>
    bool isSameOrDiff(T a, T b, T c);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
