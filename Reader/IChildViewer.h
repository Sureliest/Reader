#ifndef I_CHILDVIEWER_H
#define I_CHILDVIEWER_H

#include <QWidget>
#include <QScrollArea>

class DocWidget;

class IChildViewer : public QWidget
{
public:
    IChildViewer(){}
    virtual ~IChildViewer(){}

public:
    // 获得
    virtual QString getFileName() = 0;
    virtual QScrollArea* getScrollArea() = 0;
    virtual int getNumCount() = 0;
    virtual QSize getActruallyPageSize(int nPageNum) = 0;
    virtual QImage getActruallyPageImage(int nPageNum) = 0;
    virtual void RenderPages(QPainter *painter) = 0;
    virtual double getCurDocMultiple() = 0;
    virtual int getActruallyPageHighCount() = 0;
    virtual QSize getDocWidgetSize() = 0;
};

#endif // I_CHILDVIEWER_H
