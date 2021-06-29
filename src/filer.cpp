#include <libfm/fm.h>
#include "application.h"
#include "libfmqt.h"

int main(int argc, char** argv) {
  // ensure that glib integration of Qt is not turned off
  // This fixes #168: https://github.com/lxde/filer-qt/issues/168
  qunsetenv("QT_NO_GLIB");

  Filer::Application app(argc, argv);
  app.init();
  return app.exec();
}
