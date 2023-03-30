<?php
include 'ConexaoBanco.php';
$id= $_POST ['id'];
$nome = $_POST['nome'];
$idade = $_POST['idade'];

$sql="update CADASTRO_USUARIO set nome=:nome,idade=:idade where id=:id";

$resultado= $banco -> prepare ($sql);

$resultado-> bindParam(':nome',$nome);
$resultado-> bindParam(':idade',$idade);
$resultado-> bindParam(':id',$id);
$resultado -> execute();


header("location:index.php");

?>

