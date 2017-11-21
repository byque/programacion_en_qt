#include <QApplication>
#include <QLabel>
#include <holaheader.h>

int main(int argc, char *argv[]) {
  // Llamar una función en otro archivo
  miImpresionHolaMake();

  QApplication a(argc, argv);

  QLabel label("Hello World");
  label.show();

  return a.exec();
}
