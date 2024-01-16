#include"MainWindow.hpp"

MainWindow::MainWindow()
{
    //set dark theme
    g_object_set(gtk_settings_get_default(), "gtk-application-prefer-dark-theme", TRUE, NULL);

    set_title("AutoKraken");
    set_default_size(800, 600);
    this->set_child(_box);
    _button1.set_label("Button One");
    _button2.set_label("Button Two");
    _box.append(_button1);
    _box.append(_button2);
}