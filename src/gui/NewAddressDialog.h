
#pragma once

#include <QDialog>

namespace Ui {
class NewAddressDialog;
}

namespace WalletGui {

class NewAddressDialog : public QDialog {
  Q_OBJECT
  Q_DISABLE_COPY(NewAddressDialog)

public:
  NewAddressDialog(QWidget* _parent);
  ~NewAddressDialog();

  QString getAddress() const;
  QString getLabel() const;

private:
  QScopedPointer<Ui::NewAddressDialog> m_ui;
};

}
