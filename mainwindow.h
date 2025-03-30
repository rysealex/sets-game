#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QPushButton>
#include <QRadioButton>
#include <QIcon>
#include <QPalette>
#include <QColor>
#include <QMessageBox>
#include <QStack>
#include <QPair>
#include <QTimer>
#include <random>
#include <ctime>

#define TOTAL_SIZE 81 // total size of cards
#define START_SIZE 12 // starting size of cards

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
    void startGame();
    void initializeCards();
    void calculatePossibleSets(const QVector<QPair<QPushButton*, QString>>& deck);
    void getStartingCards();
    void hideNewCards();
    void connectComponents();
    void startTimer();
    void onTimeout();
    void onPushButtonClicked(QPushButton *button);
    void onRadioButtonClicked(bool checked);
    void onCheckSetClicked();
    void drawNewCards();
    bool isCardStackEmpty();
    void onAddCardClicked();
    QVector<QPair<QPushButton*, QString>> getRemainingCards();
    void endGame();

private:
    Ui::MainWindow *ui;

    QStack<QPair<QPushButton*, QString>> cardStack;
    QStack<QPair<QPushButton*, QString>> tempStack;

    QPushButton* selectedCard1 = nullptr;
    QPushButton* selectedCard2 = nullptr;
    QPushButton* selectedCard3 = nullptr;

    int possibleSets = 0;
    int setScoreCounter = 0;
    int timerCounter = 0;

    bool checkSet(QPushButton *button1, QPushButton *button2, QPushButton *button3, bool calcFlag);
    template <typename T>
    bool isSameOrDiff(T a, T b, T c)
    {
        return (a == b && b == c) || (a != b && b != c && a != c);
    }
};
#endif // MAINWINDOW_H
