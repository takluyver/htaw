#include "mainwindow.h"
#include <QWebView>
#include "ui_mainwindow.h"

MainWindow::MainWindow(QString url, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    if (url.isEmpty()) {
        ui->webView->setUrl(QUrl("http://www.bbc.co.uk"));
    } else {
        ui->webView->setUrl(QUrl(url));
    }
    QObject::connect(ui->webView, &QWebView::titleChanged, this, &MainWindow::setWindowTitle);
}

MainWindow::~MainWindow()
{
    delete ui;
}
