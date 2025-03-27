#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPushButton>
#include <QRadioButton>
#include <QIcon>
#include <QPalette>
#include <QColor>
#include <random>
#include <ctime>

#define TOTAL_SIZE 12 // total size of cards
#define START_SIZE 12 // starting size of cards

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    {
    ui->setupUi(this);

    // connect radio button to the slot
    connect(ui->radioButton, &QRadioButton::clicked, this, &MainWindow::onRadioButtonClicked);

    // seed the random number generator
    std::random_device rd;
    std::mt19937 gen(rd());

    // array of starting cards
    int startingCards[START_SIZE];
    for (int i = 0; i < START_SIZE; i++) {
        // generate a random integer between 1 and total size (inclusive)
        std::uniform_int_distribution<> distrib(1, TOTAL_SIZE);
        int random_number = distrib(gen);

        // update the starting cards index with current random number
        startingCards[i] = random_number;
    }

    // get the images from the resources.qrc file
    QIcon icon1(":/new/prefix1/images/purple-open-oval-one.png");
    QIcon icon2(":/new/prefix1/images/purple-open-oval-two.png");
    QIcon icon3(":/new/prefix1/images/purple-open-oval-three.png");
    QIcon icon4(":/new/prefix1/images/green-open-oval-one.png");
    QIcon icon5(":/new/prefix1/images/green-open-oval-two.png");
    QIcon icon6(":/new/prefix1/images/green-open-oval-three.png");
    QIcon icon7(":/new/prefix1/images/red-open-oval-one.png");
    QIcon icon8(":/new/prefix1/images/red-open-oval-two.png");
    QIcon icon9(":/new/prefix1/images/red-open-oval-three.png");
    QIcon icon10(":/new/prefix1/images/purple-closed-oval-one.png");
    QIcon icon11(":/new/prefix1/images/purple-closed-oval-two.png");
    QIcon icon12(":/new/prefix1/images/purple-closed-oval-three.png");

    // array of QPushButton pointers
    QPushButton* buttons[START_SIZE] = {
        ui->pushButton1,
        ui->pushButton2,
        ui->pushButton3,
        ui->pushButton4,
        ui->pushButton5,
        ui->pushButton6,
        ui->pushButton7,
        ui->pushButton8,
        ui->pushButton9,
        ui->pushButton10,
        ui->pushButton11,
        ui->pushButton12
    };

    // set the image on each button
    for (int i = 0; i < START_SIZE; i++) {
        int random_card = startingCards[i];
        switch (random_card) {
        case 1:
            buttons[i]->setIcon(icon1);
            break;
        case 2:
            buttons[i]->setIcon(icon2);
            break;
        case 3:
            buttons[i]->setIcon(icon3);
            break;
        case 4:
            buttons[i]->setIcon(icon4);
            break;
        case 5:
            buttons[i]->setIcon(icon5);
            break;
        case 6:
            buttons[i]->setIcon(icon6);
            break;
        case 7:
            buttons[i]->setIcon(icon7);
            break;
        case 8:
            buttons[i]->setIcon(icon8);
            break;
        case 9:
            buttons[i]->setIcon(icon9);
            break;
        case 10:
            buttons[i]->setIcon(icon10);
            break;
        case 11:
            buttons[i]->setIcon(icon11);
            break;
        case 12:
            buttons[i]->setIcon(icon12);
            break;
        default:
            break;
        }
        // set the icon size
        buttons[i]->setIconSize(QSize(100, 100));
        buttons[i]->setText("");
        // connect buttons to the slot
        connect(buttons[i], &QPushButton::clicked, this, &MainWindow::onPushButtonClicked);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onPushButtonClicked()
{
    // get the button that was clicked
    QPushButton *button = qobject_cast<QPushButton*>(sender());

    // if the button is valid, update the label text
    if (button) {
        ui->label->setText(button->objectName());
    }
}

void MainWindow::onRadioButtonClicked(bool checked)
{
    // check if radio button is clicked, if clicked change background color
    if (checked) {
        QPalette palette;
        palette.setColor(QPalette::Window, QColor(100, 100, 100));
        this->setAutoFillBackground(true);
        this->setPalette(palette);
    } else {
        QPalette palette;
        palette.setColor(QPalette::Window, QColor(32, 28, 28)); // default background
        this->setAutoFillBackground(true);
        this->setPalette(palette);
    }
}




