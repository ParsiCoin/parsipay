
#pragma once

#include <QDialog>

namespace Ui {
class NewPasswordDialog;
}

namespace WalletGui {
  
class NewPasswordDialog : public QDialog {
  Q_OBJECT
  Q_DISABLE_COPY(NewPasswordDialog)

public:
  NewPasswordDialog(QWidget* _parent);
  ~NewPasswordDialog();

  QString getPassword() const;

private:
  QScopedPointer<Ui::NewPasswordDialog> m_ui;

  Q_SLOT void checkPassword(const QString& _password);
};

}
