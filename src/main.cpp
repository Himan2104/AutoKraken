#include <iostream>
#include <gtkmm.h>
#include <pybind11/pybind11.h>
#include <pybind11/embed.h>
#include "MainWindow.hpp"

namespace py = pybind11;

double boxit(double x)
{
    return x*x;
}

const int x = 5;
const float pi = 3.14159f;

constexpr int factorial(int x)
{
    //some calculations

    return x;

}


int main(int argc, char *argv[])
{
//    py::scoped_interpreter guard {};
//
//    py::module::import("sys").attr("path").attr("insert")(0, ".");
//
//    py::module mod("autokraken", "autokraken module");
//
//    mod.def("boxit", &boxit, "brrrruh");
//
//    py::globals()["autokraken"] = mod;
//
//    py::exec("import autokraken\n"
//             "exec(open('../scripts/test.py').read())\n");

    std::shared_ptr<Gtk::Application> app = Gtk::Application::create("org.Himan.AutoKraken");

    auto builder = Gtk::Builder::create_from_file("autokraken.ui");

    auto* wnd = builder->get_widget<Gtk::Window>("main_window");

    app->signal_activate().connect( [wnd, app] () {
        if (wnd) {
            app->add_window(*wnd);
            wnd->set_visible(true);
        } else std::cout << "Massive cock block!\n";
    });

    return app->run(argc, argv);
}
