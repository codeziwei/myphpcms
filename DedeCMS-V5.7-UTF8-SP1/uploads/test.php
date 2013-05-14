<?php  
$string = "Aprila_sfsf@2003";  
$pattern = "/(/w+) (/d+)@ (/d+)/i";  
$replacement = "/${1}1,/$3";  
print preg_replace($pattern, $replacement, $string);  
 

?> 