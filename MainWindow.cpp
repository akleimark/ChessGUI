#include "MainWindow.h"
#include "qapplication.h"
#include <QMenuBar>


const unsigned int MainWindow::DEFAULT_WIDTH = 700;
const unsigned int MainWindow::DEFAULT_HEIGHT = 700;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->resize(MainWindow::DEFAULT_WIDTH, MainWindow::DEFAULT_HEIGHT);
    createActions();
    createMenuSystem();
}

MainWindow::~MainWindow()
{
}

void MainWindow::createActions()
{
    quitAction = new QAction("Avsluta", this);
    connect(quitAction, &QAction::triggered, this, &MainWindow::quit);

    showBoardAction = new QAction("Visa brädet", this);
    connect(showBoardAction, &QAction::triggered, this, &MainWindow::showBoard);
}

void MainWindow::createMenuSystem()
{
    QMenu *fileMenu = menuBar()->addMenu(tr("&Arkiv"));
    fileMenu->addAction(showBoardAction);
    fileMenu->addAction(quitAction);

}


void MainWindow::showBoard()
{

}


void MainWindow::quit()
{
    QApplication::quit();
}
