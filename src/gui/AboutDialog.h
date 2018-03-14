
#pragma once

#include <QDialog>

namespace Ui {
class AboutDialog;
}

namespace WalletGui {

class AboutDialog : public QDialog {
  Q_OBJECT
  Q_DISABLE_COPY(AboutDialog)

public:
  AboutDialog(QWidget* _parent);
  ~AboutDialog();

private:
  QScopedPointer<Ui::AboutDialog> m_ui;
};

}
