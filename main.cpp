#include "window.h"
#include "ui_window.h"
#include <QApplication>
#include <vector>
#include <string>

std::vector<std::string> vec;

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
