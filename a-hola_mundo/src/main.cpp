/*******************************************************************************
 * Mínima aplicación de Qt que simplemente abre una ventana que muestra el texto
 * Hola Mundo! cuando se ejecuta.
 ******************************************************************************/

#include <QApplication>  // Necesario para el objeto QApplication
#include <QLabel>        // Necesario para el objeto QLabel

int main(int argc, char *argv[]) {

  /* QApplication asegura que la aplicación continue ejecutándose hasta que se
   * cierre su ventana usando un bucle */
  QApplication a(argc, argv);

  QLabel label("Hola Mundo!");  // Objeto invisible
  label.show();  // Mostrar el objeto

  return a.exec();  // Inicia el bucle de eventos
  /* El bucle de eventos termina con la función quit() del objeto QApplication
   * y sucede indirectamente cuando se cierra la ventana de la aplicación. */
}
