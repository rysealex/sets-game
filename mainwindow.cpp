#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    {
    ui->setupUi(this);

    // connect radio button to the slot
    //connect(ui->radioButton, &QRadioButton::clicked, this, &MainWindow::onRadioButtonClicked);

    // seed the random number generator
    std::random_device rd;
    std::mt19937 gen(rd());

    // array of starting cards
    int startingCards[START_SIZE];

    // generate unique random numbers for the starting cards
    for (int i = 0; i < START_SIZE; i++)
    {
        std::uniform_int_distribution<> distrib(1, TOTAL_SIZE);
        int random_number;
        bool is_duplicate;

        do
        {
            is_duplicate = false;
            random_number = distrib(gen); // generate a new random number

            // check if the random number already exists in the starting cards
            for (int j = 0; j < i; j++)
            {
                if (startingCards[j] == random_number)
                {
                    is_duplicate = true;
                    break;
                }
            }

        } while (is_duplicate); // keep iterating until found a unique number

        // update the starting cards index with the current random number
        startingCards[i] = random_number;
    }

    // get the images from the resources.qrc file here ...

    // -------------------------- GREEN --------------------------
    // green open oval
    QIcon green_open_oval_one(":/new/prefix1/images/green-open-oval-one.png");
    QIcon green_open_oval_two(":/new/prefix1/images/green-open-oval-two.png");
    QIcon green_open_oval_three(":/new/prefix1/images/green-open-oval-three.png");

    // green closed oval
    QIcon green_closed_oval_one(":/new/prefix1/images/green-closed-oval-one.png");
    QIcon green_closed_oval_two(":/new/prefix1/images/green-closed-oval-two.png");
    QIcon green_closed_oval_three(":/new/prefix1/images/green-closed-oval-three.png");

    // green line oval
    QIcon green_line_oval_one(":/new/prefix1/images/green-line-oval-one.png");
    QIcon green_line_oval_two(":/new/prefix1/images/green-line-oval-two.png");
    QIcon green_line_oval_three(":/new/prefix1/images/green-line-oval-three.png");

    // green open rectangle
    QIcon green_open_rectangle_one(":/new/prefix1/images/green-open-rectangle-one.png");
    QIcon green_open_rectangle_two(":/new/prefix1/images/green-open-rectangle-two.png");
    QIcon green_open_rectangle_three(":/new/prefix1/images/green-open-rectangle-three.png");

    // green closed rectangle
    QIcon green_closed_rectangle_one(":/new/prefix1/images/green-closed-rectangle-one.png");
    QIcon green_closed_rectangle_two(":/new/prefix1/images/green-closed-rectangle-two.png");
    QIcon green_closed_rectangle_three(":/new/prefix1/images/green-closed-rectangle-three.png");

    // green line rectangle
    QIcon green_line_rectangle_one(":/new/prefix1/images/green-line-rectangle-one.png");
    QIcon green_line_rectangle_two(":/new/prefix1/images/green-line-rectangle-two.png");
    QIcon green_line_rectangle_three(":/new/prefix1/images/green-line-rectangle-three.png");

    // green open diamond
    QIcon green_open_diamond_one(":/new/prefix1/images/green-open-diamond-one.png");
    QIcon green_open_diamond_two(":/new/prefix1/images/green-open-diamond-two.png");
    QIcon green_open_diamond_three(":/new/prefix1/images/green-open-diamond-three.png");

    // green closed diamond
    QIcon green_closed_diamond_one(":/new/prefix1/images/green-closed-diamond-one.png");
    QIcon green_closed_diamond_two(":/new/prefix1/images/green-closed-diamond-two.png");
    QIcon green_closed_diamond_three(":/new/prefix1/images/green-closed-diamond-three.png");

    // green line diamond
    QIcon green_line_diamond_one(":/new/prefix1/images/green-line-diamond-one.png");
    QIcon green_line_diamond_two(":/new/prefix1/images/green-line-diamond-two.png");
    QIcon green_line_diamond_three(":/new/prefix1/images/green-line-diamond-three.png");

    // -------------------------- PURPLE --------------------------
    // purple open oval
    QIcon purple_open_oval_one(":/new/prefix1/images/purple-open-oval-one.png");
    QIcon purple_open_oval_two(":/new/prefix1/images/purple-open-oval-two.png");
    QIcon purple_open_oval_three(":/new/prefix1/images/purple-open-oval-three.png");

    // purple closed oval
    QIcon purple_closed_oval_one(":/new/prefix1/images/purple-closed-oval-one.png");
    QIcon purple_closed_oval_two(":/new/prefix1/images/purple-closed-oval-two.png");
    QIcon purple_closed_oval_three(":/new/prefix1/images/purple-closed-oval-three.png");

    // purple line oval
    QIcon purple_line_oval_one(":/new/prefix1/images/purple-line-oval-one.png");
    QIcon purple_line_oval_two(":/new/prefix1/images/purple-line-oval-two.png");
    QIcon purple_line_oval_three(":/new/prefix1/images/purple-line-oval-three.png");

    // purple open rectangle
    QIcon purple_open_rectangle_one(":/new/prefix1/images/purple-open-rectangle-one.png");
    QIcon purple_open_rectangle_two(":/new/prefix1/images/purple-open-rectangle-two.png");
    QIcon purple_open_rectangle_three(":/new/prefix1/images/purple-open-rectangle-three.png");

    // purple closed rectangle
    QIcon purple_closed_rectangle_one(":/new/prefix1/images/purple-closed-rectangle-one.png");
    QIcon purple_closed_rectangle_two(":/new/prefix1/images/purple-closed-rectangle-two.png");
    QIcon purple_closed_rectangle_three(":/new/prefix1/images/purple-closed-rectangle-three.png");

    // purple line rectangle
    QIcon purple_line_rectangle_one(":/new/prefix1/images/purple-line-rectangle-one.png");
    QIcon purple_line_rectangle_two(":/new/prefix1/images/purple-line-rectangle-two.png");
    QIcon purple_line_rectangle_three(":/new/prefix1/images/purple-line-rectangle-three.png");

    // purple open diamond
    QIcon purple_open_diamond_one(":/new/prefix1/images/purple-open-diamond-one.png");
    QIcon purple_open_diamond_two(":/new/prefix1/images/purple-open-diamond-two.png");
    QIcon purple_open_diamond_three(":/new/prefix1/images/purple-open-diamond-three.png");

    // purple closed diamond
    QIcon purple_closed_diamond_one(":/new/prefix1/images/purple-closed-diamond-one.png");
    QIcon purple_closed_diamond_two(":/new/prefix1/images/purple-closed-diamond-two.png");
    QIcon purple_closed_diamond_three(":/new/prefix1/images/purple-closed-diamond-three.png");

    // purple line diamond
    QIcon purple_line_diamond_one(":/new/prefix1/images/purple-line-diamond-one.png");
    QIcon purple_line_diamond_two(":/new/prefix1/images/purple-line-diamond-two.png");
    QIcon purple_line_diamond_three(":/new/prefix1/images/purple-line-diamond-three.png");

    // -------------------------- RED --------------------------
    // red open oval
    QIcon red_open_oval_one(":/new/prefix1/images/red-open-oval-one.png");
    QIcon red_open_oval_two(":/new/prefix1/images/red-open-oval-two.png");
    QIcon red_open_oval_three(":/new/prefix1/images/red-open-oval-three.png");

    // red closed oval
    QIcon red_closed_oval_one(":/new/prefix1/images/red-closed-oval-one.png");
    QIcon red_closed_oval_two(":/new/prefix1/images/red-closed-oval-two.png");
    QIcon red_closed_oval_three(":/new/prefix1/images/red-closed-oval-three.png");

    // red line oval
    QIcon red_line_oval_one(":/new/prefix1/images/red-line-oval-one.png");
    QIcon red_line_oval_two(":/new/prefix1/images/red-line-oval-two.png");
    QIcon red_line_oval_three(":/new/prefix1/images/red-line-oval-three.png");

    // red open rectangle
    QIcon red_open_rectangle_one(":/new/prefix1/images/red-open-rectangle-one.png");
    QIcon red_open_rectangle_two(":/new/prefix1/images/red-open-rectangle-two.png");
    QIcon red_open_rectangle_three(":/new/prefix1/images/red-open-rectangle-three.png");

    // red closed rectangle
    QIcon red_closed_rectangle_one(":/new/prefix1/images/red-closed-rectangle-one.png");
    QIcon red_closed_rectangle_two(":/new/prefix1/images/red-closed-rectangle-two.png");
    QIcon red_closed_rectangle_three(":/new/prefix1/images/red-closed-rectangle-three.png");

    // red line rectangle
    QIcon red_line_rectangle_one(":/new/prefix1/images/red-line-rectangle-one.png");
    QIcon red_line_rectangle_two(":/new/prefix1/images/red-line-rectangle-two.png");
    QIcon red_line_rectangle_three(":/new/prefix1/images/red-line-rectangle-three.png");

    // red open diamond
    QIcon red_open_diamond_one(":/new/prefix1/images/red-open-diamond-one.png");
    QIcon red_open_diamond_two(":/new/prefix1/images/red-open-diamond-two.png");
    QIcon red_open_diamond_three(":/new/prefix1/images/red-open-diamond-three.png");

    // red closed diamond
    QIcon red_closed_diamond_one(":/new/prefix1/images/red-closed-diamond-one.png");
    QIcon red_closed_diamond_two(":/new/prefix1/images/red-closed-diamond-two.png");
    QIcon red_closed_diamond_three(":/new/prefix1/images/red-closed-diamond-three.png");

    // red line diamond
    QIcon red_line_diamond_one(":/new/prefix1/images/red-line-diamond-one.png");
    QIcon red_line_diamond_two(":/new/prefix1/images/red-line-diamond-two.png");
    QIcon red_line_diamond_three(":/new/prefix1/images/red-line-diamond-three.png");

    // assigning each pushButton to the buttons array
    for (int i = 0; i < START_SIZE; i++)
    {
        QString pushButton = "pushButton" + QString::number(i+1);
        startingButtons[i] = findChild<QPushButton*>(pushButton);
    }
    /*buttons =
    {
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
    };*/

    // array to store the icon names
    QString iconNames[START_SIZE];

    // set the image on each button
    /*for (int i = 0; i < START_SIZE; i++)
    {
        int random_card = startingCards[i];
        switch (random_card) {

            // ----------------- GREEN -----------------
        case 1:
            buttons[i]->setIcon(green_open_oval_one);
            iconNames[i] = "green_open_oval_one";
            break;
        case 2:
            buttons[i]->setIcon(green_open_oval_two);
            iconNames[i] = "green_open_oval_two";
            break;
        case 3:
            buttons[i]->setIcon(green_open_oval_three);
            iconNames[i] = "green_open_oval_three";
            break;
        case 4:
            buttons[i]->setIcon(green_closed_oval_one);
            iconNames[i] = "green_closed_oval_one";
            break;
        case 5:
            buttons[i]->setIcon(green_closed_oval_two);
            iconNames[i] = "green_closed_oval_two";
            break;
        case 6:
            buttons[i]->setIcon(green_closed_oval_three);
            iconNames[i] = "green_closed_oval_three";
            break;
        case 7:
            buttons[i]->setIcon(green_line_oval_one);
            iconNames[i] = "green_line_oval_one";
            break;
        case 8:
            buttons[i]->setIcon(green_line_oval_two);
            iconNames[i] = "green_line_oval_two";
            break;
        case 9:
            buttons[i]->setIcon(green_line_oval_three);
            iconNames[i] = "green_line_oval_three";
            break;
        case 10:
            buttons[i]->setIcon(green_open_rectangle_one);
            iconNames[i] = "green_open_rectangle_one";
            break;
        case 11:
            buttons[i]->setIcon(green_open_rectangle_two);
            iconNames[i] = "green_open_rectangle_two";
            break;
        case 12:
            buttons[i]->setIcon(green_open_rectangle_three);
            iconNames[i] = "green_open_rectangle_three";
            break;
        case 13:
            buttons[i]->setIcon(green_closed_rectangle_one);
            iconNames[i] = "green_closed_rectangle_one";
            break;
        case 14:
            buttons[i]->setIcon(green_closed_rectangle_two);
            iconNames[i] = "green_closed_rectangle_two";
            break;
        case 15:
            buttons[i]->setIcon(green_closed_rectangle_three);
            iconNames[i] = "green_closed_rectangle_three";
            break;
        case 16:
            buttons[i]->setIcon(green_line_rectangle_one);
            iconNames[i] = "green_line_rectangle_one";
            break;
        case 17:
            buttons[i]->setIcon(green_line_rectangle_two);
            iconNames[i] = "green_line_rectangle_two";
            break;
        case 18:
            buttons[i]->setIcon(green_line_rectangle_three);
            iconNames[i] = "green_line_rectangle_three";
            break;
        case 19:
            buttons[i]->setIcon(green_open_diamond_one);
            iconNames[i] = "green_open_diamond_one";
            break;
        case 20:
            buttons[i]->setIcon(green_open_diamond_two);
            iconNames[i] = "green_open_diamond_two";
            break;
        case 21:
            buttons[i]->setIcon(green_open_diamond_three);
            iconNames[i] = "green_open_diamond_three";
            break;
        case 22:
            buttons[i]->setIcon(green_closed_diamond_one);
            iconNames[i] = "green_closed_diamond_one";
            break;
        case 23:
            buttons[i]->setIcon(green_closed_diamond_two);
            iconNames[i] = "green_closed_diamond_two";
            break;
        case 24:
            buttons[i]->setIcon(green_closed_diamond_three);
            iconNames[i] = "green_closed_diamond_three";
            break;
        case 25:
            buttons[i]->setIcon(green_line_diamond_one);
            iconNames[i] = "green_line_diamond_one";
            break;
        case 26:
            buttons[i]->setIcon(green_line_diamond_two);
            iconNames[i] = "green_line_diamond_two";
            break;
        case 27:
            buttons[i]->setIcon(green_line_diamond_three);
            iconNames[i] = "green_line_diamond_three";
            break;

            // ----------------- PURPLE -----------------
        case 28:
            buttons[i]->setIcon(purple_open_oval_one);
            iconNames[i] = "purple_open_oval_one";
            break;
        case 29:
            buttons[i]->setIcon(purple_open_oval_two);
            iconNames[i] = "purple_open_oval_two";
            break;
        case 30:
            buttons[i]->setIcon(purple_open_oval_three);
            iconNames[i] = "purple_open_oval_three";
            break;
        case 31:
            buttons[i]->setIcon(purple_closed_oval_one);
            iconNames[i] = "purple_closed_oval_one";
            break;
        case 32:
            buttons[i]->setIcon(purple_closed_oval_two);
            iconNames[i] = "purple_closed_oval_two";
            break;
        case 33:
            buttons[i]->setIcon(purple_closed_oval_three);
            iconNames[i] = "purple_closed_oval_three";
            break;
        case 34:
            buttons[i]->setIcon(purple_line_oval_one);
            iconNames[i] = "purple_line_oval_one";
            break;
        case 35:
            buttons[i]->setIcon(purple_line_oval_two);
            iconNames[i] = "purple_line_oval_two";
            break;
        case 36:
            buttons[i]->setIcon(purple_line_oval_three);
            iconNames[i] = "purple_line_oval_three";
            break;
        case 37:
            buttons[i]->setIcon(purple_open_rectangle_one);
            iconNames[i] = "purple_open_rectangle_one";
            break;
        case 38:
            buttons[i]->setIcon(purple_open_rectangle_two);
            iconNames[i] = "purple_open_rectangle_two";
            break;
        case 39:
            buttons[i]->setIcon(purple_open_rectangle_three);
            iconNames[i] = "purple_open_rectangle_three";
            break;
        case 40:
            buttons[i]->setIcon(purple_closed_rectangle_one);
            iconNames[i] = "purple_closed_rectangle_one";
            break;
        case 41:
            buttons[i]->setIcon(purple_closed_rectangle_two);
            iconNames[i] = "purple_closed_rectangle_two";
            break;
        case 42:
            buttons[i]->setIcon(purple_closed_rectangle_three);
            iconNames[i] = "purple_closed_rectangle_three";
            break;
        case 43:
            buttons[i]->setIcon(purple_line_rectangle_one);
            iconNames[i] = "purple_line_rectangle_one";
            break;
        case 44:
            buttons[i]->setIcon(purple_line_rectangle_two);
            iconNames[i] = "purple_line_rectangle_two";
            break;
        case 45:
            buttons[i]->setIcon(purple_line_rectangle_three);
            iconNames[i] = "purple_line_rectangle_three";
            break;
        case 46:
            buttons[i]->setIcon(purple_open_diamond_one);
            iconNames[i] = "purple_open_diamond_one";
            break;
        case 47:
            buttons[i]->setIcon(purple_open_diamond_two);
            iconNames[i] = "purple_open_diamond_two";
            break;
        case 48:
            buttons[i]->setIcon(purple_open_diamond_three);
            iconNames[i] = "purple_open_diamond_three";
            break;
        case 49:
            buttons[i]->setIcon(purple_closed_diamond_one);
            iconNames[i] = "purple_closed_diamond_one";
            break;
        case 50:
            buttons[i]->setIcon(purple_closed_diamond_two);
            iconNames[i] = "purple_closed_diamond_two";
            break;
        case 51:
            buttons[i]->setIcon(purple_closed_diamond_three);
            iconNames[i] = "purple_closed_diamond_three";
            break;
        case 52:
            buttons[i]->setIcon(purple_line_diamond_one);
            iconNames[i] = "purple_line_diamond_one";
            break;
        case 53:
            buttons[i]->setIcon(purple_line_diamond_two);
            iconNames[i] = "purple_line_diamond_two";
            break;
        case 54:
            buttons[i]->setIcon(purple_line_diamond_three);
            iconNames[i] = "purple_line_diamond_three";
            break;

            // ----------------- RED -----------------
        case 55:
            buttons[i]->setIcon(red_open_oval_one);
            iconNames[i] = "red_open_oval_one";
            break;
        case 56:
            buttons[i]->setIcon(red_open_oval_two);
            iconNames[i] = "red_open_oval_two";
            break;
        case 57:
            buttons[i]->setIcon(red_open_oval_three);
            iconNames[i] = "red_open_oval_three";
            break;
        case 58:
            buttons[i]->setIcon(red_closed_oval_one);
            iconNames[i] = "red_closed_oval_one";
            break;
        case 59:
            buttons[i]->setIcon(red_closed_oval_two);
            iconNames[i] = "red_closed_oval_two";
            break;
        case 60:
            buttons[i]->setIcon(red_closed_oval_three);
            iconNames[i] = "red_closed_oval_three";
            break;
        case 61:
            buttons[i]->setIcon(red_line_oval_one);
            iconNames[i] = "red_line_oval_one";
            break;
        case 62:
            buttons[i]->setIcon(red_line_oval_two);
            iconNames[i] = "red_line_oval_two";
            break;
        case 63:
            buttons[i]->setIcon(red_line_oval_three);
            iconNames[i] = "red_line_oval_three";
            break;
        case 64:
            buttons[i]->setIcon(red_open_rectangle_one);
            iconNames[i] = "red_open_rectangle_one";
            break;
        case 65:
            buttons[i]->setIcon(red_open_rectangle_two);
            iconNames[i] = "red_open_rectangle_two";
            break;
        case 66:
            buttons[i]->setIcon(red_open_rectangle_three);
            iconNames[i] = "red_open_rectangle_three";
            break;
        case 67:
            buttons[i]->setIcon(red_closed_rectangle_one);
            iconNames[i] = "red_closed_rectangle_one";
            break;
        case 68:
            buttons[i]->setIcon(red_closed_rectangle_two);
            iconNames[i] = "red_closed_rectangle_two";
            break;
        case 69:
            buttons[i]->setIcon(red_closed_rectangle_three);
            iconNames[i] = "red_closed_rectangle_three";
            break;
        case 70:
            buttons[i]->setIcon(red_line_rectangle_one);
            iconNames[i] = "red_line_rectangle_one";
            break;
        case 71:
            buttons[i]->setIcon(red_line_rectangle_two);
            iconNames[i] = "red_line_rectangle_two";
            break;
        case 72:
            buttons[i]->setIcon(red_line_rectangle_three);
            iconNames[i] = "red_line_rectangle_three";
            break;
        case 73:
            buttons[i]->setIcon(red_open_diamond_one);
            iconNames[i] = "red_open_diamond_one";
            break;
        case 74:
            buttons[i]->setIcon(red_open_diamond_two);
            iconNames[i] = "red_open_diamond_two";
            break;
        case 75:
            buttons[i]->setIcon(red_open_diamond_three);
            iconNames[i] = "red_open_diamond_three";
            break;
        case 76:
            buttons[i]->setIcon(red_closed_diamond_one);
            iconNames[i] = "red_closed_diamond_one";
            break;
        case 77:
            buttons[i]->setIcon(red_closed_diamond_two);
            iconNames[i] = "red_closed_diamond_two";
            break;
        case 78:
            buttons[i]->setIcon(red_closed_diamond_three);
            iconNames[i] = "red_closed_diamond_three";
            break;
        case 79:
            buttons[i]->setIcon(red_line_diamond_one);
            iconNames[i] = "red_line_diamond_one";
            break;
        case 80:
            buttons[i]->setIcon(red_line_diamond_two);
            iconNames[i] = "red_line_diamond_two";
            break;
        case 81:
            buttons[i]->setIcon(red_line_diamond_three);
            iconNames[i] = "red_line_diamond_three";
            break;
        default:
            break;
        }
        // set the icon size
        buttons[i]->setIconSize(QSize(100, 100));
        buttons[i]->setText("");
        // connect buttons to the slot
        connect(buttons[i], &QPushButton::clicked, this, [this, i, buttons, iconNames]() {
            onPushButtonClicked(buttons[i], iconNames[i]);
        });
    }
    // connect the check sets button to the slot
    connect(ui->checkSet, &QPushButton::clicked, this, &MainWindow::onCheckSetClicked);*/

    initializeCards();
    getStartingCards();

    // hide the three new card buttons
    ui->pushButtonNew1->hide();
    ui->pushButtonNew2->hide();
    ui->pushButtonNew3->hide();

    // connect the check sets button to the slot
    connect(ui->checkSet, &QPushButton::clicked, this, &MainWindow::onCheckSetClicked);

    // connect the add card button to the slot
    connect(ui->addCard, &QPushButton::clicked, this, &MainWindow::onAddCardClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initializeCards()
{
    // a map for all the possible card names and their corresponding QIcon paths
    QMap<QString, QIcon> cardMap =
    {
        // -------------------------------------- GREEN --------------------------------------
        {"green_open_oval_one", QIcon(":/new/prefix1/images/green-open-oval-one.png")},
        {"green_open_oval_two", QIcon(":/new/prefix1/images/green-open-oval-two.png")},
        {"green_open_oval_three", QIcon(":/new/prefix1/images/green-open-oval-three.png")},
        {"green_closed_oval_one", QIcon(":/new/prefix1/images/green-closed-oval-one.png")},
        {"green_closed_oval_two", QIcon(":/new/prefix1/images/green-closed-oval-two.png")},
        {"green_closed_oval_three", QIcon(":/new/prefix1/images/green-closed-oval-three.png")},
        {"green_line_oval_one", QIcon(":/new/prefix1/images/green-line-oval-one.png")},
        {"green_line_oval_two", QIcon(":/new/prefix1/images/green-line-oval-two.png")},
        {"green_line_oval_three", QIcon(":/new/prefix1/images/green-line-oval-three.png")},
        {"green_open_rectangle_one", QIcon(":/new/prefix1/images/green-open-rectangle-one.png")},
        {"green_open_rectangle_two", QIcon(":/new/prefix1/images/green-open-rectangle-two.png")},
        {"green_open_rectangle_three", QIcon(":/new/prefix1/images/green-open-rectangle-three.png")},
        {"green_closed_rectangle_one", QIcon(":/new/prefix1/images/green-closed-rectangle-one.png")},
        {"green_closed_rectangle_two", QIcon(":/new/prefix1/images/green-closed-rectangle-two.png")},
        {"green_closed_rectangle_three", QIcon(":/new/prefix1/images/green-closed-rectangle-three.png")},
        {"green_line_rectangle_one", QIcon(":/new/prefix1/images/green-line-rectangle-one.png")},
        {"green_line_rectangle_two", QIcon(":/new/prefix1/images/green-line-rectangle-two.png")},
        {"green_line_rectangle_three", QIcon(":/new/prefix1/images/green-line-rectangle-three.png")},
        {"green_open_diamond_one", QIcon(":/new/prefix1/images/green-open-diamond-one.png")},
        {"green_open_diamond_two", QIcon(":/new/prefix1/images/green-open-diamond-two.png")},
        {"green_open_diamond_three", QIcon(":/new/prefix1/images/green-open-diamond-three.png")},
        {"green_closed_diamond_one", QIcon(":/new/prefix1/images/green-closed-diamond-one.png")},
        {"green_closed_diamond_two", QIcon(":/new/prefix1/images/green-closed-diamond-two.png")},
        {"green_closed_diamond_three", QIcon(":/new/prefix1/images/green-closed-diamond-three.png")},
        {"green_line_diamond_one", QIcon(":/new/prefix1/images/green-line-diamond-one.png")},
        {"green_line_diamond_two", QIcon(":/new/prefix1/images/green-line-diamond-two.png")},
        {"green_line_diamond_three", QIcon(":/new/prefix1/images/green-line-diamond-three.png")},
        // -------------------------------------- PURPLE --------------------------------------
        {"purple_open_oval_one", QIcon(":/new/prefix1/images/purple-open-oval-one.png")},
        {"purple_open_oval_two", QIcon(":/new/prefix1/images/purple-open-oval-two.png")},
        {"purple_open_oval_three", QIcon(":/new/prefix1/images/purple-open-oval-three.png")},
        {"purple_closed_oval_one", QIcon(":/new/prefix1/images/purple-closed-oval-one.png")},
        {"purple_closed_oval_two", QIcon(":/new/prefix1/images/purple-closed-oval-two.png")},
        {"purple_closed_oval_three", QIcon(":/new/prefix1/images/purple-closed-oval-three.png")},
        {"purple_line_oval_one", QIcon(":/new/prefix1/images/purple-line-oval-one.png")},
        {"purple_line_oval_two", QIcon(":/new/prefix1/images/purple-line-oval-two.png")},
        {"purple_line_oval_three", QIcon(":/new/prefix1/images/purple-line-oval-three.png")},
        {"purple_open_rectangle_one", QIcon(":/new/prefix1/images/purple-open-rectangle-one.png")},
        {"purple_open_rectangle_two", QIcon(":/new/prefix1/images/purple-open-rectangle-two.png")},
        {"purple_open_rectangle_three", QIcon(":/new/prefix1/images/purple-open-rectangle-three.png")},
        {"purple_closed_rectangle_one", QIcon(":/new/prefix1/images/purple-closed-rectangle-one.png")},
        {"purple_closed_rectangle_two", QIcon(":/new/prefix1/images/purple-closed-rectangle-two.png")},
        {"purple_closed_rectangle_three", QIcon(":/new/prefix1/images/purple-closed-rectangle-three.png")},
        {"purple_line_rectangle_one", QIcon(":/new/prefix1/images/purple-line-rectangle-one.png")},
        {"purple_line_rectangle_two", QIcon(":/new/prefix1/images/purple-line-rectangle-two.png")},
        {"purple_line_rectangle_three", QIcon(":/new/prefix1/images/purple-line-rectangle-three.png")},
        {"purple_open_diamond_one", QIcon(":/new/prefix1/images/purple-open-diamond-one.png")},
        {"purple_open_diamond_two", QIcon(":/new/prefix1/images/purple-open-diamond-two.png")},
        {"purple_open_diamond_three", QIcon(":/new/prefix1/images/purple-open-diamond-three.png")},
        {"purple_closed_diamond_one", QIcon(":/new/prefix1/images/purple-closed-diamond-one.png")},
        {"purple_closed_diamond_two", QIcon(":/new/prefix1/images/purple-closed-diamond-two.png")},
        {"purple_closed_diamond_three", QIcon(":/new/prefix1/images/purple-closed-diamond-three.png")},
        {"purple_line_diamond_one", QIcon(":/new/prefix1/images/purple-line-diamond-one.png")},
        {"purple_line_diamond_two", QIcon(":/new/prefix1/images/purple-line-diamond-two.png")},
        {"purple_line_diamond_three", QIcon(":/new/prefix1/images/purple-line-diamond-three.png")},
        // -------------------------------------- RED --------------------------------------
        {"red_open_oval_one", QIcon(":/new/prefix1/images/red-open-oval-one.png")},
        {"red_open_oval_two", QIcon(":/new/prefix1/images/red-open-oval-two.png")},
        {"red_open_oval_three", QIcon(":/new/prefix1/images/red-open-oval-three.png")},
        {"red_closed_oval_one", QIcon(":/new/prefix1/images/red-closed-oval-one.png")},
        {"red_closed_oval_two", QIcon(":/new/prefix1/images/red-closed-oval-two.png")},
        {"red_closed_oval_three", QIcon(":/new/prefix1/images/red-closed-oval-three.png")},
        {"red_line_oval_one", QIcon(":/new/prefix1/images/red-line-oval-one.png")},
        {"red_line_oval_two", QIcon(":/new/prefix1/images/red-line-oval-two.png")},
        {"red_line_oval_three", QIcon(":/new/prefix1/images/red-line-oval-three.png")},
        {"red_open_rectangle_one", QIcon(":/new/prefix1/images/red-open-rectangle-one.png")},
        {"red_open_rectangle_two", QIcon(":/new/prefix1/images/red-open-rectangle-two.png")},
        {"red_open_rectangle_three", QIcon(":/new/prefix1/images/red-open-rectangle-three.png")},
        {"red_closed_rectangle_one", QIcon(":/new/prefix1/images/red-closed-rectangle-one.png")},
        {"red_closed_rectangle_two", QIcon(":/new/prefix1/images/red-closed-rectangle-two.png")},
        {"red_closed_rectangle_three", QIcon(":/new/prefix1/images/red-closed-rectangle-three.png")},
        {"red_line_rectangle_one", QIcon(":/new/prefix1/images/red-line-rectangle-one.png")},
        {"red_line_rectangle_two", QIcon(":/new/prefix1/images/red-line-rectangle-two.png")},
        {"red_line_rectangle_three", QIcon(":/new/prefix1/images/red-line-rectangle-three.png")},
        {"red_open_diamond_one", QIcon(":/new/prefix1/images/red-open-diamond-one.png")},
        {"red_open_diamond_two", QIcon(":/new/prefix1/images/red-open-diamond-two.png")},
        {"red_open_diamond_three", QIcon(":/new/prefix1/images/red-open-diamond-three.png")},
        {"red_closed_diamond_one", QIcon(":/new/prefix1/images/red-closed-diamond-one.png")},
        {"red_closed_diamond_two", QIcon(":/new/prefix1/images/red-closed-diamond-two.png")},
        {"red_closed_diamond_three", QIcon(":/new/prefix1/images/red-closed-diamond-three.png")},
        {"red_line_diamond_one", QIcon(":/new/prefix1/images/red-line-diamond-one.png")},
        {"red_line_diamond_two", QIcon(":/new/prefix1/images/red-line-diamond-two.png")},
        {"red_line_diamond_three", QIcon(":/new/prefix1/images/red-line-diamond-three.png")}
    };

    // Seed the random number generator
    std::random_device rd;
    std::mt19937 gen(rd());

    // convert the cardMap to a QVector for shuffling
    QVector<QPair<QString, QIcon>> cardVector;
    for (auto it = cardMap.begin(); it != cardMap.end(); ++it)
    {
        cardVector.append(QPair<QString, QIcon>(it.key(), it.value()));
    }

    // shuffle the card names
    std::shuffle(cardVector.begin(), cardVector.end(), gen);

    // create buttons for each card and push onto the cardStack
    for (int i = 0; i < cardMap.size(); i++)
    {
        // create a new button to add to the cardStack
        QPushButton *cardButton = new QPushButton();
        cardButton->setIcon(cardVector[i].second); // set the icon
        cardButton->setText(""); // clear the text
        cardButton->setIconSize(QSize(100, 100)); // set the icon size

        // push the current button and the corresponding card name onto the cardStack
        cardStack.push(QPair<QPushButton*, QString>(cardButton, cardVector[i].first));
    }
}

void MainWindow::getStartingCards()
{
    // get the starting cards from the cardStack and display in the MainWindow
    for (int i = 0; i < START_SIZE; i++)
    {
        // pop a card from the cardStack
        QPair<QPushButton*, QString> card = cardStack.pop();
        // set the button for the current card
        QPushButton* button = startingButtons[i];
        if (button)
        {
            button->setIcon(card.first->icon()); // set the icon
            button->setText(""); // clear the text
            button->setIconSize(QSize(100, 100)); // set the icon size

            // connect the current button to the slot
            connect(button, &QPushButton::clicked, this, [this, button, card]() {
                onPushButtonClicked(button, card.second);
            });
        }
    }
}

void MainWindow::onPushButtonClicked(QPushButton *button, QString iconName)
{
    // update the label to the associated button that was clicked
    if (button)
    {
        ui->label->setText(iconName);
        // check first if the button that was clicked is already one of the selcted buttons
        // meaning unselect that button and reset the background color
        if (button == selectedCard1)
        {
            selectedCard1 = nullptr;
            button->setStyleSheet("");
        }
        else if (button == selectedCard2)
        {
            selectedCard2 = nullptr;
            button->setStyleSheet("");
        }
        else if (button == selectedCard3)
        {
            selectedCard3 = nullptr;
            button->setStyleSheet("");
        }
        else
        {
            // now check if the button that was clicked is not already one of the selected buttons
            // select it and update background color
            // also store the iconName in the selected button's custom property
            if (!selectedCard1)
            {
                selectedCard1 = button;
                selectedCard1->setProperty("iconName", iconName);
                button->setStyleSheet("background-color: yellow;");
            }
            else if (!selectedCard2)
            {
                selectedCard2 = button;
                selectedCard2->setProperty("iconName", iconName);
                button->setStyleSheet("background-color: yellow;");
            }
            else if (!selectedCard3)
            {
                selectedCard3 = button;
                selectedCard3->setProperty("iconName", iconName);
                button->setStyleSheet("background-color: yellow;");
            }
        }
    }
}

void MainWindow::onRadioButtonClicked(bool checked)
{
    // check if radio button is clicked, if clicked change background color
    if (checked)
    {
        QPalette palette;
        palette.setColor(QPalette::Window, QColor(100, 100, 100));
        this->setAutoFillBackground(true);
        this->setPalette(palette);
    }
    else
    {
        QPalette palette;
        palette.setColor(QPalette::Window, QColor(32, 28, 28)); // default background
        this->setAutoFillBackground(true);
        this->setPalette(palette);
    }
}

void MainWindow::onCheckSetClicked()
{
    // check if three cards have been selected, call the check set function
    if (selectedCard1 && selectedCard2 && selectedCard3)
    {
        checkSet(selectedCard1, selectedCard2, selectedCard3);
    }
    else
    {
        // else, display message
        QMessageBox::warning(this, "Incorrect Number Of Cards", "Please select exactly three cards.");

        // unselect any of the selected cards and reset the background color
        if (selectedCard1)
        {
            selectedCard1->setStyleSheet("");
            selectedCard1 = nullptr;
        }
        if (selectedCard2)
        {
            selectedCard2->setStyleSheet("");
            selectedCard2 = nullptr;
        }
        if (selectedCard3)
        {
            selectedCard3->setStyleSheet("");
            selectedCard3 = nullptr;
        }
    }
}

void MainWindow::checkSet(QPushButton *button1, QPushButton *button2, QPushButton *button3)
{
    // extract the icon names for each button
    QString iconName1 = button1->property("iconName").toString();
    QString iconName2 = button2->property("iconName").toString();
    QString iconName3 = button3->property("iconName").toString();

    qDebug() << iconName1 << "\n";
    qDebug() << iconName2 << "\n";
    qDebug() << iconName3 << "\n";

    // tokenize the icon names
    QStringList tokens1 = iconName1.split("_");
    QStringList tokens2 = iconName2.split("_");
    QStringList tokens3 = iconName3.split("_");

    // check if each token list has the expected size (4 components)
    if (tokens1.size() < 4 || tokens2.size() < 4 || tokens3.size() < 4)
    {
        QMessageBox::warning(this, "Error", "Icon names failure.");
        return;
    }

    // extract each component from the tokens
    QString color1 = tokens1[0];
    QString shading1 = tokens1[1];
    QString shape1 = tokens1[2];
    QString number1 = tokens1[3];

    QString color2 = tokens2[0];
    QString shading2 = tokens2[1];
    QString shape2 = tokens2[2];
    QString number2 = tokens2[3];

    QString color3 = tokens3[0];
    QString shading3 = tokens3[1];
    QString shape3 = tokens3[2];
    QString number3 = tokens3[3];

    // check if each property is either all the same or all different
    bool isValidSet = isSameOrDiff(color1, color2, color3) &&
                      isSameOrDiff(shading1, shading2, shading3) &&
                      isSameOrDiff(shape1, shape2, shape3) &&
                      isSameOrDiff(number1, number2, number3);

    // notify the user if valid or not valid set
    if (isValidSet)
    {
        QMessageBox::information(this, "Valid Set", "Successfull set!");

        // check if the cardStack is empty
        if (isCardStackEmpty())
        {
            QMessageBox::information(this, "No More Cards", "All cards have been used!");
        }
        else
        {
            // if not, draw three new cards from the cardStack
            drawNewCards();
        }
    }
    else
    {
        QMessageBox::warning(this, "Invalid Set", "Unsuccessfull set!");

        // unselect the current selected cards and reset the background color
        selectedCard1->setStyleSheet("");
        selectedCard2->setStyleSheet("");
        selectedCard3->setStyleSheet("");
        selectedCard1 = nullptr;
        selectedCard2 = nullptr;
        selectedCard3 = nullptr;

    }
}

void MainWindow::drawNewCards()
{
    // udpate each selected card with three new cards from the cardStack
    QPair<QPushButton*, QString> card1 = cardStack.pop();
    selectedCard1->setIcon(card1.first->icon());
    selectedCard1->setStyleSheet("");
    selectedCard1->setProperty("iconName", card1.second);

    QPair<QPushButton*, QString> card2 = cardStack.pop();
    selectedCard2->setIcon(card2.first->icon());
    selectedCard2->setStyleSheet("");
    selectedCard2->setProperty("iconName", card2.second);

    QPair<QPushButton*, QString> card3 = cardStack.pop();
    selectedCard3->setIcon(card3.first->icon());
    selectedCard3->setStyleSheet("");
    selectedCard3->setProperty("iconName", card3.second);
}

void MainWindow::onAddCardClicked()
{
    // check if the cardStack is empty
    if (isCardStackEmpty())
    {
        QMessageBox::warning(this, "No More Cards", "All cards have been used!");
    }
    else
    {
        // if not, pop a card off the cardStack
        QPair<QPushButton*, QString> card = cardStack.pop();

        // check if any new card buttons are available
        if (!ui->pushButtonNew1->isVisible())
        {
            // set the button for the new card
            QPushButton *button = ui->pushButtonNew1;
            button->setVisible(true); // make the button visible
            button->setIcon(card.first->icon()); // set the icon
            button->setStyleSheet(""); // clear the text
            button->setIconSize(QSize(100, 100)); // set the icon size
            button->setProperty("iconName", card.second); // set the icon name
            // connect the new button to the slot
            connect(button, &QPushButton::clicked, this, [this, button, card]() {
                onPushButtonClicked(button, card.second);
            });
        }
        else if (!ui->pushButtonNew2->isVisible())
        {
            // set the button for the new card
            QPushButton *button = ui->pushButtonNew2;
            button->setVisible(true); // make the button visible
            button->setIcon(card.first->icon()); // set the icon
            button->setStyleSheet(""); // clear the text
            button->setIconSize(QSize(100, 100)); // set the icon size
            button->setProperty("iconName", card.second); // set the icon name
            // connect the new button to the slot
            connect(button, &QPushButton::clicked, this, [this, button, card]() {
                onPushButtonClicked(button, card.second);
            });
        }
        else if (!ui->pushButtonNew3->isVisible())
        {
            // set the button for the new card
            QPushButton *button = ui->pushButtonNew3;
            button->setVisible(true); // make the button visible
            button->setIcon(card.first->icon()); // set the icon
            button->setStyleSheet(""); // clear the text
            button->setIconSize(QSize(100, 100)); // set the icon size
            button->setProperty("iconName", card.second); // set the icon name
            // connect the new button to the slot
            connect(button, &QPushButton::clicked, this, [this, button, card]() {
                onPushButtonClicked(button, card.second);
            });
        }
        else
        {
            // if none are available, no more cards can be added
            // display message
            QMessageBox::warning(this, "Can't Add More Cards", "The maximum number of cards has been reached!");
        }
    }
}

// helper function to check if the cardStack is empty
bool MainWindow::isCardStackEmpty()
{
    return cardStack.empty();
}

// helper function to check if the values are either all the same or all different
template <typename T>
bool isSameOrDiff(T a, T b, T c)
{
    return (a == b && b == c) || (a != b && b != c && a != c);
}




