      ******************************************************************
      * Author: Charles Dantas
      * Date: 03//01/2021
      * Purpose:
      * Tectonics: cobc
      ******************************************************************
       IDENTIFICATION DIVISION.
       PROGRAM-ID. YOUR-PROGRAM-NAME.
       DATA DIVISION.
       FILE SECTION.
       WORKING-STORAGE SECTION.

           77 TESTE PIC 9(07) VALUE "7".

           1 CHARLES.
               2 AGE PIC 9(08) VALUE "19".
               2 HEIGHT PIC 9(08) VALUE "20".
       PROCEDURE DIVISION.

            DISPLAY "Hello world"
            DISPLAY TESTE.
            STOP RUN.
