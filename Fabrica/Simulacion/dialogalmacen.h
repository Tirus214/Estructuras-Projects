#ifndef DIALOGALMACEN_H
#define DIALOGALMACEN_H

#include <QDialog>

namespace Ui {
class DialogAlmacen;
}

class DialogAlmacen : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAlmacen(QWidget *parent = nullptr);
    ~DialogAlmacen();

private:
    Ui::DialogAlmacen *ui;
};

#endif // DIALOGALMACEN_H
