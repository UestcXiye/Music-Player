#include "myplaylist.h"

#include <QContextMenuEvent>
#include <QMenu>

// 上下文菜单事件处理函数，当点击鼠标右键时运行一个菜单
void MyPlaylist::contextMenuEvent(QContextMenuEvent* event)
{
    QMenu menu;
    menu.addAction(tr("清空列表"), this, SLOT(clearPlaylist()));
    menu.exec(event->globalPos());
}

// 关闭事件处理函数，如果部件处于显示状态，则使其隐藏
void MyPlaylist::closeEvent(QCloseEvent* event)
{
    if (isVisible())
    {
        hide();
        event->ignore();
    }
}

MyPlaylist::MyPlaylist(QWidget* parent) : QTableWidget(parent)
{
    setWindowTitle(tr("播放列表"));
    // 设置窗口标志，表明它是一个独立窗口且有一个只带有关闭按钮的标题栏
    setWindowFlags(Qt::Window | Qt::WindowTitleHint);
    // 设置初始大小，并且锁定部件宽度
    resize(320, 400);
    setMaximumWidth(320);
    setMinimumWidth(320);
    // 设置行列数目
    setRowCount(0);
    setColumnCount(3);
    // 设置表头标签
    QStringList list;
    list << tr("标题") << tr("艺术家") << tr("长度");
    setHorizontalHeaderLabels(list);
    // 设置只能选择单行
    setSelectionMode(QAbstractItemView::SingleSelection);
    setSelectionBehavior(QAbstractItemView::SelectRows);
    // 设置不显示网格
    setShowGrid(false);
}

// 清空播放列表
void MyPlaylist::clearPlaylist()
{
    while (rowCount())
        removeRow(0);
    // 发射播放列表已清空信号
    emit playlistClean();
}
