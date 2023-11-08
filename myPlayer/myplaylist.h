#ifndef MYPLAYLIST_H
#define MYPLAYLIST_H

#include <QTableWidget>
#include <QWidget>

class MyPlaylist : public QTableWidget
{
    Q_OBJECT
protected:
    void contextMenuEvent(QContextMenuEvent* event);
    void closeEvent(QCloseEvent* event);

public:
    explicit MyPlaylist(QWidget* parent = 0);

signals:
    void playlistClean();

private slots:
    void clearPlaylist();
};

#endif  // MYPLAYLIST_H
