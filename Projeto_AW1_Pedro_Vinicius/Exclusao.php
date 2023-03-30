<?php

include 'ConexaoBanco.php';
$id = $_GET ['id'];

$sql="delete From CADASTRO_USUARIO where id=:id";

$resultado= $banco -> prepare ($sql);


$resultado-> bindParam(':id',$id);
$resultado -> execute();


header("location:index.php");
?>

