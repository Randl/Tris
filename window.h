#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>

namespace Ui {
class WINDOW;
}

class WINDOW : public QMainWindow
{
    Q_OBJECT

public:
    explicit WINDOW(QWidget *parent = 0);
    ~WINDOW();

private slots:
    void on_button_1_clicked();

    void on_button_2_clicked();

    void on_button_3_clicked();

    void on_button_4_clicked();

    void on_button_5_clicked();

    void on_button_6_clicked();

    void on_button_7_clicked();

    void on_button_8_clicked();

    void on_button_9_clicked();

private:
    Ui::WINDOW *ui;
};

#endif // WINDOW_H
