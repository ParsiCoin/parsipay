
#pragma once

#include <QFrame>

namespace Ui {
class ReceiveFrame;
}

namespace WalletGui {

class ReceiveFrame : public QFrame {
  Q_OBJECT
  Q_DISABLE_COPY(ReceiveFrame)

public:
  ReceiveFrame(QWidget* _parent);
  ~ReceiveFrame();

private:
  QScopedPointer<Ui::ReceiveFrame> m_ui;

  void updateWalletAddress(const QString& _address);
  void reset();

  Q_SLOT void copyAddress();
};

}
