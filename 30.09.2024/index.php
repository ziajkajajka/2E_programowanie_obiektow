<!DOCTYPE HTML>
<html>
    <title> Zadania </title>
    <meta charset="UTF-8">
</html>
<body>
<?php
echo "Zadanie 1 <br>" ;
$celcjusz = (integer) 7;
$far = $celcjusz * 1.8 +32;
$far = <<<SF
stopnie Fahreheita wynosza: $far
SF;
echo $far;
echo "Zadanie 2 <br>" ;
$x = 3;
$y = 4;
$dodawanie = "+";
$odejmowanie = "-";
$mnozenie = "*";
$dzielenie = "/";
$rowna = "=";
$wynik1 = $x + $y;
$wynik2 = $x - $y;
$wynik3 = $x * $y;
$wynik4 = $x / $y;
echo "$x $dodawanie $y $rowna $wynik1 <br>";
echo "$x $odejmowanie $y $rowna $wynik2 <br>";
echo "$x $mnozenie $y $rowna $wynik3 <br>";
echo "$x $dzielenie $y $rowna $wynik4 <br>";

echo "<br> Zadanie 3 <br>";
$promien = 8;
echo (pi()*($promien*$promien));
echo "<br> Zadanie 4 <br>";
$wiek = 13;
$dni = $wiek *365;
$wiekdni = <<< WD
Wiek podany w dniach: $dni
WD;
echo $wiekdni;
echo "<br> Zadanie 5 <br>";
$s = (string)'k';
$i = (integer)12;
$f = (float)3.5;
$b = (boolean)true;
echo $s .'<br>' . $i .'<br>' . $f . '<br>' . $b . '<br>';
$s = (integer)222;
$i = (string)'kj';
$f = (boolean)true;
$b = (float)111.01;
echo '<br>' . $s . '<br>' . $i . '<br>' . $f . '<br>' . $b . '<br>';
echo "<br> Zadanie 6 <br>";
$liczba3 = (string)500;
$liczba4 = (string)700;
$liczba3 = (integer)$liczba3;
$liczba4 = (integer)$liczba4;
$wynik5 = $liczba3 + $liczba4;
$wynik6 = $liczba3 - $liczba4;
$wynik7 = $liczba3 * $liczba4;
$wynik8 = $liczba3 / $liczba4;
echo $wynik5 . '<br>' . $wynik6 . '<br>' .  $wynik7 . '<br>' . $wynik8 . '<br>';

?>
</body>
</html>