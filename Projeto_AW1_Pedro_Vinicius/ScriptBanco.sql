CREATE DATABASE IF NOT EXISTS `REGISTRO_ESCAPE` DEFAULT CHARACTER SET latin1 COLLATE latin1_swedish_ci;
USE `REGISTRO_ESCAPE`;

CREATE TABLE `cadastro_usuario` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `nome` varchar(100) NOT NULL,
  `idade` int(3) NOT NULL,
  `username` varchar(100) NOT NULL,
  `senha` varchar(45) NOT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `username_UNIQUE` (`username`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1

CREATE TABLE `opcao_dificuldade` (
  `id` int(1) NOT NULL,
  `dificuldade` varchar(45) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1

CREATE TABLE `cadastar_jogador` (
  `id` int(11) NOT NULL,
  `username` varchar(100) NOT NULL,
  `dificuldade` int(1) NOT NULL,
  `tempo` int(4) NOT NULL,
  PRIMARY KEY (`id`),
  KEY `username_idx` (`username`),
  KEY `dificuldade_idx` (`dificuldade`),
  CONSTRAINT `dificuldade` FOREIGN KEY (`dificuldade`) REFERENCES `opcao_dificuldade` (`id`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `username` FOREIGN KEY (`username`) REFERENCES `cadastro_usuario` (`username`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=latin1