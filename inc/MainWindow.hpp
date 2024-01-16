#pragma once

#include <gtkmm.h>

class MainWindow : public Gtk::Window
{
public:
    MainWindow();

    Gtk::Button _button1;
    Gtk::Button _button2;
    Gtk::Box _box;
};