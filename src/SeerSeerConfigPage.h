#pragma once

#include <QtWidgets/QWidget>

#include "ui_SeerSeerConfigPage.h"

class SeerSeerConfigPage : public QWidget, public Ui::SeerSeerConfigPage {

    Q_OBJECT

    public:
        explicit SeerSeerConfigPage (QWidget* parent = 0);
       ~SeerSeerConfigPage ();

};
