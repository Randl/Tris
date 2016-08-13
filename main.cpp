#include "window.h"
#include "ui_window.h"
#include <QApplication>
#include <vector>
#include <string>

std::vector<std::string> vec;

int turn(int i)
{
    int turn;

    //X
    if(i % 2 == 0)
    {
        turn = 0;
    }

    //O
    if(i % 2 != 0)
    {
        turn = 1;
    }

    return turn;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WINDOW w;
    w.show();

    vec.push_back("123");
    vec.push_back("456");
    vec.push_back("789");

    return a.exec();
}

int status()
{
    int stat = 0;

    if(vec[0][0] == 'X' && vec[0][1] == 'X' && vec[0][2] == 'X') stat = 1;
    if(vec[1][0] == 'X' && vec[1][1] == 'X' && vec[1][2] == 'X') stat = 1;
    if(vec[2][0] == 'X' && vec[2][1] == 'X' && vec[2][2] == 'X') stat = 1;

    if(vec[0][0] == 'X' && vec[1][0] == 'X' && vec[2][0] == 'X') stat = 1;
    if(vec[0][1] == 'X' && vec[1][1] == 'X' && vec[2][1] == 'X') stat = 1;
    if(vec[0][2] == 'X' && vec[1][2] == 'X' && vec[2][2] == 'X') stat = 1;

    if(vec[0][0] == 'X' && vec[1][1] == 'X' && vec[2][2] == 'X') stat = 1;
    if(vec[0][2] == 'X' && vec[1][1] == 'X' && vec[2][0] == 'X') stat = 1;



    if(vec[0][0] == 'O' && vec[0][1] == 'O' && vec[0][2] == 'O') stat = 2;
    if(vec[1][0] == 'O' && vec[1][1] == 'O' && vec[1][2] == 'O') stat = 2;
    if(vec[2][0] == 'O' && vec[2][1] == 'O' && vec[2][2] == 'O') stat = 2;

    if(vec[0][0] == 'O' && vec[1][0] == 'O' && vec[2][0] == 'O') stat = 2;
    if(vec[0][1] == 'O' && vec[1][1] == 'O' && vec[2][1] == 'O') stat = 2;
    if(vec[0][2] == 'O' && vec[1][2] == 'O' && vec[2][2] == 'O') stat = 2;

    if(vec[0][0] == 'O' && vec[1][1] == 'O' && vec[2][2] == 'O') stat = 2;
    if(vec[0][2] == 'O' && vec[1][1] == 'O' && vec[2][0] == 'O') stat = 2;

    return stat;
}
