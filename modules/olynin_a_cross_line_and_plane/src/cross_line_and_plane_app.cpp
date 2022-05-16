// Copyright 2022 Miheev Ivan

#include "include/cross_line_and_plane_app.h"
#include "include/cross_line_and_plane.h"

CLPApplication::CLPApplication() {}

std::string CLPApplication::operator()(int argc, const char** argv) {
  if (argc == 1) {
    return this->argument_error();
  }
  if (std::string(argv[1]) == "--help" || std::string(argv[1]) == "-h") {
    return this->help();
  }

  Line ln;
  if ((std::string(argv[1]) != "--line" || std::string(argv[1]) != "-l") &&
      argc == 8) {
    ln.SetX_1(strtod(argv[2], NULL));
    ln.SetY_1(strtod(argv[2], NULL));
    ln.SetZ_1(strtod(argv[2], NULL));
    ln.SetA_x(strtod(argv[2], NULL));
    ln.SetA_y(strtod(argv[2], NULL));
    ln.SetA_z(strtod(argv[2], NULL));
  }

  Plane pn;
  if ((std::string(argv[1]) != "--plane" || std::string(argv[1]) != "-p") &&
      argc == 8) {
    pn.SetA(strtod(argv[2], NULL));
    pn.SetB(strtod(argv[2], NULL));
    pn.SetC(strtod(argv[2], NULL));
    pn.SetD(strtod(argv[2], NULL));
  }
}

std::string CLPApplication::help() {
  std::string help =
      std::string("") +
      "This program's purpose to calculate if line crosses the plane or not\n";
  return help;
}

std::string CLPApplication::argument_error() {
  std::string error =
      std::string("") + "Invalid argument amount, try --help or -h commands";
  return error;
}
