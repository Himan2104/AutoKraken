#include <gtkmm.h>
#include <pybind11/pybind11.h>
#include "MainWindow.hpp"

int main(int argc, char *argv[])
{
    
    std::shared_ptr<Gtk::Application> app = Gtk::Application::create("org.Himan.AutoKraken");
    return app->make_window_and_run<MainWindow>(argc, argv);
}
