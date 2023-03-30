<?php
include 'ConexaoBanco.php';

$nome = $_POST['nome'];
$idade = $_POST['idade'];


$sql="insert into CADASTRO_USUARIO (nome, idade) values (:nome,:idade)";

$resultado= $banco -> prepare ($sql);

$resultado-> bindParam(':nome',$nome);
$resultado-> bindParam(':idade',$idade);
$resultado -> execute();

header("location:index.php");

?>
