#include "window.h"
#include "main.cpp"
#include "ui_window.h"
#include <string>

WINDOW::WINDOW(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WINDOW)
{
    ui->setupUi(this);
}

WINDOW::~WINDOW()
{
    delete ui;
}

int i = 0;

void WINDOW::on_button_1_clicked()
{
    if(ui->button_1->text() == NULL and status() == 0)
    {
        if(turn(i) == 0)
        {
            ui->button_1->setText("X");
            vec[0][0] = 'X';

            if(status() == 0) ui->Turn->setText("Turn of O.");
            if(status() == 1) ui->Turn->setText("X Wins.");
            if(i == 8 && status() != 1 && status() != 2) ui->Turn->setText("Draw.");
        }

        if(turn(i) == 1)
        {
            ui->button_1->setText("O");
            vec[0][0] = 'O';

            if(status() == 0) ui->Turn->setText("Turn of X.");
            if(status() == 2) ui->Turn->setText("O Wins.");
            if(i == 8 && status() != 1 && status() != 2) ui->Turn->setText("Draw.");
        }

        i++;
    }
    else
    {
        if(status() == 0) ui->Turn->setText("This space is occupied.");
        if(status() == 1) ui->Turn->setText("X Wins.");
        if(status() == 2) ui->Turn->setText("O Wins.");
        if(i == 9 && status() != 1 && status() != 2) ui->Turn->setText("Draw.");
    }
}

void WINDOW::on_button_2_clicked()
{
    if(ui->button_2->text() == NULL and status() == 0)
    {
        if(turn(i) == 0)
        {
            ui->button_2->setText("X");
            vec[0][1] = 'X';

            if(status() == 0) ui->Turn->setText("Turn of O.");
            if(status() == 1) ui->Turn->setText("X Wins.");
            if(i == 8 && status() != 1 && status() != 2) ui->Turn->setText("Draw.");
        }

        if(turn(i) == 1)
        {
            ui->button_2->setText("O");
            vec[0][1] = 'O';

            if(status() == 0) ui->Turn->setText("Turn of X.");
            if(status() == 2) ui->Turn->setText("O Wins.");
            if(i == 8 && status() != 1 && status() != 2) ui->Turn->setText("Draw.");
        }

        i++;
    }
    else
    {
        if(status() == 0) ui->Turn->setText("This space is occupied.");
        if(status() == 1) ui->Turn->setText("X Wins.");
        if(status() == 2) ui->Turn->setText("O Wins.");
        if(i == 9 && status() != 1 && status() != 2) ui->Turn->setText("Draw.");
    }
}

void WINDOW::on_button_3_clicked()
{
    if(ui->button_3->text() == NULL and status() == 0)
    {
        if(turn(i) == 0)
        {
            ui->button_3->setText("X");
            vec[0][2] = 'X';

            if(status() == 0) ui->Turn->setText("Turn of O.");
            if(status() == 1) ui->Turn->setText("X Wins.");
            if(i == 8 && status() != 1 && status() != 2) ui->Turn->setText("Draw.");
        }

        if(turn(i) == 1)
        {
            ui->button_3->setText("O");
            vec[0][2] = 'O';

            if(status() == 0) ui->Turn->setText("Turn of X.");
            if(status() == 2) ui->Turn->setText("O Wins.");
            if(i == 8 && status() != 1 && status() != 2) ui->Turn->setText("Draw.");
        }

        i++;
    }
    else
    {
        if(status() == 0) ui->Turn->setText("This space is occupied.");
        if(status() == 1) ui->Turn->setText("X Wins.");
        if(status() == 2) ui->Turn->setText("O Wins.");
        if(i == 9 && status() != 1 && status() != 2) ui->Turn->setText("Draw.");
    }
}

void WINDOW::on_button_4_clicked()
{
    if(ui->button_4->text() == NULL and status() == 0)
    {
        if(turn(i) == 0)
        {
            ui->button_4->setText("X");
            vec[1][0] = 'X';

            if(status() == 0) ui->Turn->setText("Turn of O.");
            if(status() == 1) ui->Turn->setText("X Wins.");
            if(i == 8 && status() != 1 && status() != 2) ui->Turn->setText("Draw.");
        }

        if(turn(i) == 1)
        {
            ui->button_4->setText("O");
            vec[1][0] = 'O';

            if(status() == 0) ui->Turn->setText("Turn of X.");
            if(status() == 2) ui->Turn->setText("O Wins.");
            if(i == 8 && status() != 1 && status() != 2) ui->Turn->setText("Draw.");
        }

        i++;
    }
    else
    {
        if(status() == 0) ui->Turn->setText("This space is occupied.");
        if(status() == 1) ui->Turn->setText("X Wins.");
        if(status() == 2) ui->Turn->setText("O Wins.");
        if(i == 9 && status() != 1 && status() != 2) ui->Turn->setText("Draw.");
    }
}

void WINDOW::on_button_5_clicked()
{
    if(ui->button_5->text() == NULL and status() == 0)
    {
        if(turn(i) == 0)
        {
            ui->button_5->setText("X");
            vec[1][1] = 'X';

            if(status() == 0) ui->Turn->setText("Turn of O.");
            if(status() == 1) ui->Turn->setText("X Wins.");
            if(i == 8 && status() != 1 && status() != 2) ui->Turn->setText("Draw.");
        }

        if(turn(i) == 1)
        {
            ui->button_5->setText("O");
            vec[1][1] = 'O';

            if(status() == 0) ui->Turn->setText("Turn of X.");
            if(status() == 2) ui->Turn->setText("O Wins.");
            if(i == 8 && status() != 1 && status() != 2) ui->Turn->setText("Draw.");
        }

        i++;
    }
    else
    {
        if(status() == 0) ui->Turn->setText("This space is occupied.");
        if(status() == 1) ui->Turn->setText("X Wins.");
        if(status() == 2) ui->Turn->setText("O Wins.");
        if(i == 9 && status() != 1 && status() != 2) ui->Turn->setText("Draw.");
    }
}

void WINDOW::on_button_6_clicked()
{
    if(ui->button_6->text() == NULL and status() == 0)
    {
        if(turn(i) == 0)
        {
            ui->button_6->setText("X");
            vec[1][2] = 'X';

            if(status() == 0) ui->Turn->setText("Turn of O.");
            if(status() == 1) ui->Turn->setText("X Wins.");
            if(i == 8 && status() != 1 && status() != 2) ui->Turn->setText("Draw.");
        }

        if(turn(i) == 1)
        {
            ui->button_6->setText("O");
            vec[1][2] = 'O';

            if(status() == 0) ui->Turn->setText("Turn of X.");
            if(status() == 2) ui->Turn->setText("O Wins.");
           if(i == 8 && status() != 1 && status() != 2) ui->Turn->setText("Draw.");
        }

        i++;
    }
    else
    {
        if(status() == 0) ui->Turn->setText("This space is occupied.");
        if(status() == 1) ui->Turn->setText("X Wins.");
        if(status() == 2) ui->Turn->setText("O Wins.");
        if(i == 9 && status() != 1 && status() != 2) ui->Turn->setText("Draw.");
    }
}

void WINDOW::on_button_7_clicked()
{
    if(ui->button_7->text() == NULL and status() == 0)
    {
        if(turn(i) == 0)
        {
            ui->button_7->setText("X");
            vec[2][0] = 'X';

            if(status() == 0) ui->Turn->setText("Turn of O.");
            if(status() == 1) ui->Turn->setText("X Wins.");
            if(i == 8 && status() != 1 && status() != 2) ui->Turn->setText("Draw.");
        }

        if(turn(i) == 1)
        {
            ui->button_7->setText("O");
            vec[2][0] = 'O';

            if(status() == 0) ui->Turn->setText("Turn of X.");
            if(status() == 2) ui->Turn->setText("O Wins.");
            if(i == 8 && status() != 1 && status() != 2) ui->Turn->setText("Draw.");
        }

        i++;
    }
    else
    {
        if(status() == 0) ui->Turn->setText("This space is occupied.");
        if(status() == 1) ui->Turn->setText("X Wins.");
        if(status() == 2) ui->Turn->setText("O Wins.");
        if(i == 9 && status() != 1 && status() != 2) ui->Turn->setText("Draw.");
    }
}

void WINDOW::on_button_8_clicked()
{
    if(ui->button_8->text() == NULL and status() == 0)
    {
        if(turn(i) == 0)
        {
            ui->button_8->setText("X");
            vec[2][1] = 'X';

            if(status() == 0) ui->Turn->setText("Turn of O.");
            if(status() == 1) ui->Turn->setText("X Wins.");
            if(i == 8 && status() != 1 && status() != 2) ui->Turn->setText("Draw.");
        }

        if(turn(i) == 1)
        {
            ui->button_8->setText("O");
            vec[2][1] = 'O';

            if(status() == 0) ui->Turn->setText("Turn of X.");
            if(status() == 2) ui->Turn->setText("O Wins.");
            if(i == 8 && status() != 1 && status() != 2) ui->Turn->setText("Draw.");
        }

        i++;
    }
    else
    {
        if(status() == 0) ui->Turn->setText("This space is occupied.");
        if(status() == 1) ui->Turn->setText("X Wins.");
        if(status() == 2) ui->Turn->setText("O Wins.");
        if(i == 9 && status() != 1 && status() != 2) ui->Turn->setText("Draw.");
    }
}

void WINDOW::on_button_9_clicked()
{
    if(ui->button_9->text() == NULL and status() == 0)
    {
        if(turn(i) == 0)
        {
            ui->button_9->setText("X");
            vec[2][2] = 'X';

            if(status() == 0) ui->Turn->setText("Turn of O.");
            if(status() == 1) ui->Turn->setText("X Wins.");
            if(i == 8 && status() != 1 && status() != 2) ui->Turn->setText("Draw.");
        }

        if(turn(i) == 1)
        {
            ui->button_9->setText("O");
            vec[2][2] = 'O';

            if(status() == 0) ui->Turn->setText("Turn of X.");
            if(status() == 2) ui->Turn->setText("O Wins.");
            if(i == 8 && status() != 1 && status() != 2) ui->Turn->setText("Draw.");
        }

        i++;
    }
    else
    {
        if(status() == 0) ui->Turn->setText("This space is occupied.");
        if(status() == 1) ui->Turn->setText("X Wins.");
        if(status() == 2) ui->Turn->setText("O Wins.");
        if(i == 9 && status() != 1 && status() != 2) ui->Turn->setText("Draw.");
    }
}
