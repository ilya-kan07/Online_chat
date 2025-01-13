#include "mainwindow.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    QFile styleFile("C:/C++/local-chat/src/qt/darktheme.qss");
    if (styleFile.open(QFile::ReadOnly)) {
        QString styleSheet = QString::fromUtf8(styleFile.readAll());
        a.setStyleSheet(styleSheet);
    }

    MainWindow w;
    w.show();
    return a.exec();
}
