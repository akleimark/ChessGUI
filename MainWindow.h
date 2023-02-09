#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT

    public:
        MainWindow(QWidget *parent = nullptr);
        ~MainWindow();

    private:
        const static unsigned int DEFAULT_WIDTH;
        const static unsigned int DEFAULT_HEIGHT;
        void createMenuSystem();
        void createActions();

        QAction *quitAction;
        QAction *showBoardAction;

    private slots:
        void quit();
        void showBoard();
};
#endif // MAINWINDOW_H
