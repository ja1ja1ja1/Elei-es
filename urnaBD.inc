<?php
$hostname = "localhost";
$bancodedados = "urna";
$usuario = "root";
$senha = "";

$nome =  $_POST("nome");
$sobrenome = $_POST("snome");
$dtNasc = $_POST("nasc");
$cpf = $_POST("cpf");
$senha = $_POST("sen");
$adm = $_POST("adm");

$opcao = $_POST("opcao");

switch ($opcao) {
    case "cadastrar":
      cadastro();
      break;
    case "atualizar":
      echo "Your favorite color is blue!";
      break;
    case "candidatar":
      echo "Your favorite color is green!";
      break;
    case "candidatar":
      echo "Your favorite color is green!";
      break;
    default:
      echo "Your favorite color is neither red, blue, nor green!";
  }

  function cadastro(){

    $con = new mysqli("localhost", "root","" , "urna");
if ($con->connect_errno) {
    echo "Falha ao concetar : (" . $con->connect_errno . ") " . $con->connect_errno;
}

$sql = "INSERT INTO tbusuarios (Nome, Sobrenome, dtNasc, cpf, senha, adm)
VALUES ('$nome','$sobrenome','$dtNasc','$cpf','$senha','$adm');";

     $con_query($con,$sql)

     $con_query->close();
     return;
  }

?>