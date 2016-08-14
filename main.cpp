#include "logic.h"
#include "window.h"
#include "ui_window.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WINDOW w;
    w.show();
	
	init();
	
    return a.exec();
}
