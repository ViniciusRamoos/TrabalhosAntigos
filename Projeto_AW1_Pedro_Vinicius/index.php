<!DOCTYPE html>
<?php
include 'ConexaoBanco.php';

$sql="SELECT * FROM CADASTRO_USUARIO";

$resultado = $banco -> prepare ($sql);
$resultado -> execute();

$registro = $resultado -> fetchAll();
?>

<html>
    <head>
        <meta charset="UTF-8">
        <title></title>
    </head>
    <body>
        <form action="Cadastro.php" method="POST">
            Nome:
            <input type="text" name="nome"/> <br/>
            Idade:
            <input type="text" name="idade"/> <br/>

            <input type="submit" name="Enviar" value="Enviar"/>
        </form>



        <h1> Lista de Jogadores </h1>

        <?php
        if (count($registro)<1)
        {
            echo"<br/> Não existem registros de jogadores";
        }
        else
        {

        ?>

        <table border = "2">
            <tr>
            <th> ID </th>
            <th> Nome </th>
            <th> Idade </th>
            <th> Editar </th>
            <th> Excluir </th>
            </tr>
            <?php foreach($registro as $linha) { ?>
            <tr>
                <td><?php echo $linha['id'];?></td>
                <td><?php echo $linha['nome'];?></td>
                <td><?php echo $linha['idade'];?></td>
                <td><?php echo "<a href='Edicao.php?id=".$linha['id']."'>Editar</a>"?></td>
                <td><?php echo "<a href='Exclusao.php?id=".$linha['id']."'>Excluir</a>"?></td>
            </tr>
            <?php } ?>
        </table>
        <?php } ?>
    </body>
</html>

