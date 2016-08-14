#include "window.h"
#include "logic.h"
#include "ui_window.h"

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

void pushed_button(int button_n, QPushButton *button) {
	if (button->text() == NULL && status()==0) {
		char move_ch = turn(i) ? 'O' : 'X', opponent_ch =  = turn(i) ? 'X':'O';
		
		
		button->setText(move_ch);
		vec[button_n / 3][button_n % 3] = move_ch;

		if(status() == 0) {
			if (i == 8)
				ui->Turn->setText("Draw.");
			else
				ui->Turn->setText("Turn of " + opponent_ch + ".");
		}
		else
			ui->Turn->setText("" + move_ch + " Wins.");
		++i;
	}
	else {
        switch(status() {
			0: if(i == 9) ui->Turn->setText("Draw."); else ui->Turn->setText("This space is occupied."); break;
			1: ui->Turn->setText("X Wins."); break;
			2: ui->Turn->setText("O Wins."); break;
		}
	}
}

void WINDOW::on_button_1_clicked()
{
	pushed_button(0, ui->button_1);
}

void WINDOW::on_button_2_clicked()
{
	pushed_button(1, ui->button_2);
}
void WINDOW::on_button_3_clicked()
{
	pushed_button(2, ui->button_3);
}
void WINDOW::on_button_4_clicked()
{
	pushed_button(3, ui->button_4);
}
void WINDOW::on_button_5_clicked()
{
	pushed_button(4, ui->button_5);
}
void WINDOW::on_button_6_clicked()
{
	pushed_button(5, ui->button_6);
}
void WINDOW::on_button_7_clicked()
{
	pushed_button(6, ui->button_7);
}
void WINDOW::on_button_8_clicked()
{
	pushed_button(7, ui->button_8);
}
void WINDOW::on_button_9_clicked()
{
	pushed_button(8, ui->button_9);
}
