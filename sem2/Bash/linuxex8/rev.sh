read l
if [ 1 -eq 1 ]
then
   if [ $l -gt 0 ]
   then
      num=$l
      sum=0
      while [ $num -ne 0 ]
      do
	 temp=`expr $num % 10`
	 sum=`expr $sum \* 10 + $temp`
	 num=`expr $num \/ 10`
      done
      echo "Reverse of digits is $l is $sum"
   else
      echo " Number is less than 0"
   fi
else
   echo "Insert only one parameter "
fi
