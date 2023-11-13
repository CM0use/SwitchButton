// SwitchButton
// Copyright (c) 2018 Iman Ahmadvand
// Copyright (c) 2021 WANDERSON M.PIMENTA
// Copyright (c) 2023 CM0use

#include "switchbutton.h"

#include <QApplication>
#include <QButtonGroup>
#include <QGridLayout>

#define THEME (false)

int main(int argc, char *argv[])
{
    QApplication application{ argc, argv };

    application.setStyleSheet(THEME? "QWidget { background-color: #292a2d; color: #E8EAED }"
                                    : "QWidget { background-color: #FFF; color: #202124 }");

    SwitchButton *switch1{ new SwitchButton("SWITCH", THEME) };
    switch1->setChecked(true);
    SwitchButton* switch2{ new SwitchButton("SWITCH", THEME) };
    switch2->setDisabled(true);
    SwitchButton *switch3{ new SwitchButton("SWITCH", THEME) };
    switch3->setLayoutDirection(Qt::RightToLeft);
    SwitchButton *switch4{ new SwitchButton("SWITCH", THEME) };
    switch4->setLayoutDirection(Qt::RightToLeft);
    switch4->setChecked(true);
    switch4->setDisabled(true);

    SwitchButton *item1{ new SwitchButton("ITEM1", THEME) };
    SwitchButton *item2{ new SwitchButton("ITEM2", THEME) };
    QButtonGroup bg;
    bg.addButton(item1);
    bg.addButton(item2);

    QGridLayout *mainLayout{ new QGridLayout };
    mainLayout->addWidget(switch1, 0, 0, Qt::AlignCenter);
    mainLayout->addWidget(switch2);
    mainLayout->addWidget(switch3);
    mainLayout->addWidget(switch4);
    mainLayout->addWidget(item1);
    mainLayout->addWidget(item2);

    QWidget *window{ new QWidget };
    window->setLayout(mainLayout);
    window->show();

    return application.exec();
}
