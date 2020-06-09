#ifndef JANELA3_H
#define JANELA3_H

#include <QDialog>

namespace Ui {
class janela3;
}

class janela3 : public QDialog
{
    Q_OBJECT

public:
    explicit janela3(QWidget *parent = nullptr);
    ~janela3();

private:
    Ui::janela3 *ui;
};

#endif // JANELA3_H
