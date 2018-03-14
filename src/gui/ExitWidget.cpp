
#include <QMovie>

#include "CurrencyAdapter.h"
#include "ExitWidget.h"

#include "ui_exitwidget.h"

namespace WalletGui {

ExitWidget::ExitWidget(QWidget* _parent) : QWidget(_parent, Qt::Window), m_ui(new Ui::ExitWidget),
  m_clockMovie(new QMovie(this)) {
  m_ui->setupUi(this);
  QString text = m_ui->m_label->text();
  m_ui->m_label->setText(text.arg(CurrencyAdapter::instance().getCurrencyDisplayName()));
  m_clockMovie->setFileName(":images/clock");
  m_clockMovie->setScaledSize(QSize(48, 48));
  m_ui->m_clockLabel->setMovie(m_clockMovie);
  m_clockMovie->start();
}

ExitWidget::~ExitWidget() {
}

}
