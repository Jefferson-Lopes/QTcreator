#ifndef JANELA4_H
#define JANELA4_H

#include <QDialog>

namespace Ui {
class Janela4;
}

class Janela4 : public QDialog
{
    Q_OBJECT

public:
    explicit Janela4(QWidget *parent = nullptr);
    ~Janela4();

private:
    Ui::Janela4 *ui;
};

#endif // JANELA4_H
