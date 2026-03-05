#!/bin/bash
echo "Menu"
echo "1.Lower to Upper"
echo "2.Upper to Lower"
echo "3.Quit"
echo "Enter your choice : \c"
read ch
case "$ch" in
   1) echo "Enter File : \c"
      read f1
      if [ -f$f1 ]
      then
	 echo "converting lower case to upper case"
	 tr '[a-z]' '[A-Z]' < $f1
      else
	 echo "$f1 does not exist"
      fi
      ;;
   2) echo "Enter the file : \c"
      read f1
      if [ -f$f1 ]
      then
	 echo "converting Upper to lower case to"
	 tr '[A-Z]' '[a-z]' < $f1
      else
	 echo "$f1 file does not exist"
      fi
      ;;
   3)
      echo "Exit..."
      exit
      ;;
esac
