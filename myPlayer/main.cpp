#include <QApplication>
#include <QTextCodec>

#include "mywidget.h"

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);

    // 解决 Qt 中文乱码问题
    QTextCodec* codec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForCStrings(codec);
    QTextCodec::setCodecForTr(codec);

    MyWidget w;
    w.show();

    return a.exec();
}
