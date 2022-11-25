#ifndef DIGICODE_H
#define DIGICODE_H

#include <QWidget>
#include <QString>
#include <QPushButton>
#include <QLineEdit>
#include <QGridLayout>
#include <QMessageBox>
#include <QTimer>


namespace Ui {
class digicode;
}

class digicode : public QWidget
{
    Q_OBJECT

public:
 digicode( QWidget *parent = 0);
    ~digicode();

private slots:
 void onQPushButtonClicked();
   void onTimerTempoGache_timeout();
   void onTimerTempoVerrouillage_timeout();

private:
    Ui::digicode *ui;
      QString code;
      QString codeSecret = "1234";
      QPushButton *touches[4][3];
      QLineEdit *afficheur;
      QGridLayout *grille;
      QTimer tempoGache;
      QTimer tempoVerrouillage;
      int nbErreur = 0;
      void closeEvent(QCloseEvent *event) override;
};

#endif // DIGICODE_H
