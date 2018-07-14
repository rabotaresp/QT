#include "widget.h"

Frame::Frame(QWidget *parent) : QWidget(parent)
{
    lbl_entr = new QLabel("&Enter");
    lbl_ret = new QLabel("Result");

    btn_ok = new QPushButton("&Push");
    btn_ok->setDefault(true);
    btn_ok->setEnabled(false);
    btn_ret = new QPushButton("&Return");
    btn_ret->setDefault(true);
    btn_ret->setEnabled(false);
    btn_qt = new QPushButton("&Exit");

    line_ent = new QLineEdit;
    lbl_entr->setBuddy(line_ent);
    line_ret = new QLineEdit;

    QHBoxLayout *layout_entr = new QHBoxLayout;
    layout_entr->addWidget(lbl_entr);
    layout_entr->addWidget(line_ent);

    QHBoxLayout *layout_ret = new QHBoxLayout;
    layout_ret->addWidget(lbl_ret);
    layout_ret->addWidget(line_ret);

    QVBoxLayout *layout_btn = new QVBoxLayout;
    layout_btn->addWidget(btn_ok);
    layout_btn->addWidget(btn_ret);
    layout_btn->addWidget(btn_qt);

    QVBoxLayout *layout_ln = new QVBoxLayout;
    layout_ln->addLayout(layout_entr);
    layout_ln->addLayout(layout_ret);

    QHBoxLayout *main_l = new QHBoxLayout;
    main_l->addLayout(layout_ln);
    main_l->addLayout(layout_btn);

    connect(line_ent,SIGNAL(textChanged(QString)),this,SLOT(Ent_text(QString)));
    connect(line_ret,SIGNAL(textChanged(QString)),this,SLOT(Rent_text(QString)));
    connect(btn_qt,SIGNAL(clicked()),this, SLOT(close()));

    setLayout(main_l);
}

Frame::~Frame()
{

}
void Frame::Ent_text(QString str)
{
    btn_ok->setEnabled(!str.isEmpty());
}
void Frame::Rent_text(QString str)
{
    btn_ret->setEnabled(!str.isEmpty());
}
