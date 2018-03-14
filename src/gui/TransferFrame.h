
#pragma once

#include <QFrame>

namespace Ui {
class TransferFrame;
}

namespace WalletGui {

class TransferFrame : public QFrame {
  Q_OBJECT
  Q_DISABLE_COPY(TransferFrame)

public:
  TransferFrame(QWidget* _parent);
  ~TransferFrame();

  QString getAddress() const;
  QString getLabel() const;
  qreal getAmount() const;
  QString getAmountString() const;

  void disableRemoveButton(bool _disable);

private:
  QScopedPointer<Ui::TransferFrame> m_ui;

  Q_SLOT void addressBookClicked();
  Q_SLOT void pasteClicked();
};

}
