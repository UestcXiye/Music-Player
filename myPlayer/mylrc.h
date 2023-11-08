#ifndef MYLRC_H
#define MYLRC_H

#include <QLabel>
#include <QWidget>

class QTimer;

class MyLrc : public QLabel
{
    Q_OBJECT
private:
    QLinearGradient linearGradient;
    QLinearGradient maskLinearGradient;
    QFont font;
    QTimer* timer;
    qreal lrcMaskWidth;
    // 每次歌词遮罩增加的宽度
    qreal lrcMaskWidthInterval;
    QPoint offset;

protected:
    void paintEvent(QPaintEvent* event);
    void mousePressEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);
    void contextMenuEvent(QContextMenuEvent* event);

public:
    explicit MyLrc(QWidget* parent = 0);
    void startLrcMask(qint64 intervalTime);
    void stopLrcMask();

private slots:
    void timeout();
};

#endif  // MYLRC_H
