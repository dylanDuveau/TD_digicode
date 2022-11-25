#include "digicode.h"
#include "ui_digicode.h"

digicode::digicode(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::digicode)
{
    ui->setupUi(this);

          int ligne = 0, colonne = 0;
           grille = new QGridLayout(this);
        afficheur = new QLineEdit(this);
        afficheur->setReadOnly(true);
        afficheur->setAlignment(Qt::AlignRight);
        afficheur->setEchoMode(QLineEdit::Password);
        afficheur->setMinimumHeight(80);
        grille->addWidget(afficheur,ligne,colonne,1,3);







    QString TableDesSymboles[4][3] = {{"7","8","9"},{"4","5","6"},{"1","2","3"},{"On","0","Ok"}};
    ligne = 4,colonne = 3;
    for(int li = 0;li<ligne;li++)
    {
        for(int col = 0; col<colonne;col++)
        {
                        touches[li][col] = new QPushButton;
                    touches[li][col]->setText(TableDesSymboles[li][col]);
                    touches[li][col]->setMaximumWidth(80);
            touches[li][col]->setMinimumHeight(80);
            touches[li][col]->setStyleSheet("background-color: gray;");
            grille->addWidget(touches[li][col],li+1,col);
            connect(touches[li][col],&QPushButton::clicked,this,&digicode::onQPushButtonClicked);
            connect(&tempoGache,&QTimer::timeout,this,&digicode::onTimerTempoGache_timeout);
            connect(&tempoVerrouillage,&QTimer::timeout,this,&digicode::onTimerTempoVerrouillage_timeout);
        }
    }
    this->setLayout(grille);
    tempoGache.setSingleShot(true);

}

digicode::~digicode()
{
    delete ui;
    delete grille;
    delete afficheur;
    delete [] touches[4][3];
}

void digicode::onQPushButtonClicked()
{
    QPushButton *pbouton = static_cast<QPushButton *>(sender());
    QString texteBouton = pbouton->text();

    if (texteBouton != "Ok" && texteBouton != "On")
    {
        code = code + texteBouton;
    }
    else
    {
        if(texteBouton == "Ok")
        {
            if(code == codeSecret){

                code = "";
                nbErreur = 0;
            }
            else
            {

                code = "";
                nbErreur++;
                if(nbErreur == 3)
                {
                    for(int ligne=0;ligne<4;ligne++)
                    {
                        for(int colonne = 0;colonne<3;colonne++)
                        {
                            touches[ligne][colonne]->setEnabled(false);
                        }
                    }
                    QMessageBox message;
                    message.setText("3 erreur gg");
                    message.exec();
                }
            }
        }
        if(texteBouton == "On")
        {
            code = "";
        }
    }


}
