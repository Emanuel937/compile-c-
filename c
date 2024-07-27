#!/bin/bash
function COMPILATE_C_SCRIPT()
{
    FILE_TO_COMPILATE=$1
    GENERATE_FILE="${FILE_TO_COMPILATE%.*}"
    #CLANG CMD  
    clang -o $GENERATE_FILE $FILE_TO_COMPILATE
     # Vérifier le code de sortie de la commande précédente
    if [ $? -eq 0 ]; then
      ./$GENERATE_FILE
      if [ $? -eq 0 ];
            then 
                rm ./$GENERATE_FILE
      fi
    else
        echo "Erreur de compilation. Le fichier source '$FILE_TO_COMPILATE' n'a pas pu être compilé."
    fi
}
# Vérifier si un argument a été passé
if [ $# -eq 0 ]; then
    echo "Usage: $0 <fichier_source.c>"
    exit 1
fi
#RUN THE FUNFTION 
COMPILATE_C_SCRIPT $1
