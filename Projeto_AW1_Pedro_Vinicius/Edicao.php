<?php
include 'ConexaoBanco.php';

$sql="Select * From CADASTRO_USUARIO where id=".$_GET['id'];

$resultado= $banco -> prepare ($sql);
$resultado -> execute();

$registro = $resultado -> fetchAll();

?>

<html>
    <head>
        <meta charset="UTF-8">
        <title></title>
    </head>
    <body>
        <?php foreach($registro as $linha) { ?>
        <form action="Update.php" method="POST">
            Nome:
            <input type="text" name="nome" value="<?php echo $linha['nome'];?>"/> <br/>
            Idade:
            <input type="text" name="idade"value="<?php echo $linha['idade'];?>"/> <br/>
            <input type="hidden" name="id"value="<?php echo $linha['id'];?>"/> <br/>
            <input type="submit" name="Enviar" value="Editar"/>
            <?php } ?>
        </form>
    </body>
</html>