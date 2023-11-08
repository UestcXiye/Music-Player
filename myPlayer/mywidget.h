#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QSystemTrayIcon>
#include <QWidget>
#include <phonon>

class QLabel;
class MyPlaylist;
class MyLrc;

namespace Ui
{
    class MyWidget;
}

class MyWidget : public QWidget
{
    Q_OBJECT
private:
    Ui::MyWidget* ui;

    Phonon::MediaObject* mediaObject;
    QAction* playAction;
    QAction* stopAction;
    QAction* skipBackwardAction;
    QAction* skipForwardAction;
    QLabel* topLabel;
    QLabel* timeLabel;
    MyPlaylist* playlist;
    Phonon::MediaObject* metaInformationResolver;
    QList<Phonon::MediaSource> sources;
    MyLrc* lrc;
    QMap<qint64, QString> lrcMap;
    QSystemTrayIcon* trayIcon;

    void initPlayer();
    void changeActionState();
    void resolveLrc(const QString& sourceFileName);

protected:
    void closeEvent(QCloseEvent* event);

public:
    explicit MyWidget(QWidget* parent = 0);
    ~MyWidget();

private slots:
    void updateTime(qint64 time);
    void setPaused();
    void skipBackward();
    void skipForward();
    void openFile();
    void setPlaylistShown();
    void setLrcShown();
    void stateChanged(Phonon::State newState, Phonon::State oldState);
    void sourceChanged(const Phonon::MediaSource& source);
    void aboutToFinish();
    void metaStateChanged(Phonon::State newState, Phonon::State oldState);
    void tableClicked(int row);
    void clearSources();
    void trayIconActivated(QSystemTrayIcon::ActivationReason activationReason);
};

#endif  // MYWIDGET_H
