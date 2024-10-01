<?php
function leapyear($year)
{
    if(!is_numeric ($year))
    {
        echo "string is not allowed input should be a number";
    }
}
if(($year%4==0 && $year%100)||$year%400==0)
{
    echo $year," is a leap year";
}
else
{
    echo $year," is not a leap year";
}
$year=2000;
 leapyear($year)
?>