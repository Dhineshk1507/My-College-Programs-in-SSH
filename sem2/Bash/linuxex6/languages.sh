#!/bin/bash
echo -n "Enter the name of a country "
read country
echo -n "The official language of $country is "
case $country in
   Lithuania)
      echo -n "Lithuanian"
      ;;
   Romania)
      echo -n "Romanian"
      ;;
   Italy)
      echo -n "Italian"
      ;;
   *)
      echo -n "UNKNOWN"
      ;;
esac
