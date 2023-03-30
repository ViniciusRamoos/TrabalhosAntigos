<?php

$servername = "localhost";
$usuario = "root";
$senha = "";
$dname = "REGISTRO_ESCAPE";

try {
    $banco = new PDO("mysql:host=$servername;dbname=$dname", $usuario, $senha);
    $banco->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
} catch (PDOException $e) {
    echo "Erro banco de dados: " . $e->getMessage() . "<br/>";
}
?>
